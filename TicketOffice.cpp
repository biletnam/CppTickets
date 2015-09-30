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

  // Выбор времени
  //filter.time.from = new time_loc;
  cout << "Time from hour: ";
  //cin >> filter.time.from->hour;
  filter.price.from = 0;
  //cin >> filter.price.from;
  // TODO: Поиск по списку (узнать о начилии билетов)
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
