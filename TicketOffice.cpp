#include "TicketOffice.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

TicketOffice::TicketOffice() { // Конструктор

}

TicketOffice::~TicketOffice() { // Деструктор
}

void TicketOffice::buyTicket() { // Покупка билета
  cout << "Welcome to Ticket Office" << endl;
  cout << "========================" << endl;
  // Фильтр по критериям пользователя
  TicketFilter filter;
  // Выбор времени
  filter.time.from = new time_loc;
  cout << "Time from hour: ";
  cin >> filter.time.from->hour;
  // TODO: Поиск по списку (узнать о начилии билетов)
}

void TicketOffice::load() {
  // Загрузка из нескольких файлов
  // TODO: Загрузка из файла для поездов
  // TODO: Загрузка из файла для самолётов
  // TODO: Загрузка из файла для подводных лодок
}
