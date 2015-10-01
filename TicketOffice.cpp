#include "TicketOffice.h"
#include <iostream>

#include <fstream>
#include <vector>
#include <Windows.h>

using namespace std;



TicketOffice::TicketOffice() { // Конструктор
 vector <Ticket> tickets();
}

TicketOffice::~TicketOffice() { // Деструктор
}


void TicketOffice::buyTicket() { // Покупка билета
    // Фильтр по критериям пользователя
  TicketFilter filter;

  filter.enterTransport();
  // Выбор цены
  filter.enterPrice();
  // Выбор времени
  filter.enterTime();

  // Поиск по списку (чтобы узнать о начилии билетов)
  for(size_t i = 0; i < tickets.size(); i++) {
    Ticket& t = tickets[i];
    cout << t.getDestination() << " " << t.getTime() << " " << t.getPrice() << "$ " << endl;
    if(filter.price.enabled) {
      if(t.getPrice() < filter.price.from) {
        cout << t.getPrice() << " < " << filter.price.from << endl;
        continue;
      }
      if(t.getPrice() > filter.price.to) {
        cout << t.getPrice() << " > " << filter.price.to << endl;
        continue;
      }
    }
    if(filter.time.enabled) {
      if(t.getTime() < filter.time.from) {
        cout << t.getTime() << " < " << filter.time.from << endl;
        continue;
      }
      if(t.getTime() > filter.time.to) {
        cout << t.getTime() << " > " << filter.time.to << endl;
        continue;
      }
    }
  }
}

void TicketOffice::welcome()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("Добро пожаловать в билетную кассу\n"); //не знаю, почему cout глючит
    printf("========================\n\n");
}

void TicketOffice::load(Ticket ticket) {
  tickets.push_back(ticket);
  // Загрузка из нескольких файлов
  // TODO: Загрузка из файла для поездов
  // TODO: Загрузка из файла для самолётов
  // TODO: Загрузка из файла для подводных лодок
}

void TicketOffice::show(int n){ //пока показывает 1 поле

    if(n < tickets.size())
    {
        cout << tickets[n].getDestination() << endl;
    }
    else cout << "No ticket with index " << n << endl;
//cout << tickets.end. << endl;
}
