// Задание: касса для продажи билетов
// К нам поступает информация о рейсах
// количестве и цене билетов на них.
// Мы продаём билеты и отчитываемся
// о проданном.
#include <iostream>

#include "Ticket.h"
#include "TrainTicket.h"
#include "AirplainTicket.h"
#include "SubmarineTicket.h"
#include "TicketOffice.h"

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");

  // Пользователь вызывает кассу
  TicketOffice office;
  office.buyTicket();

  cout << "На что вам нужен билет?" << endl;
  cout << "[1] на поезд" << endl;
  cout << "[2] на самолет " << endl;
  cout << "[3] на подводную лотку " << endl;
  int a = 0;
  cin >> a;

  Ticket* ticket = NULL;
  switch(a) {
  case 1:
    ticket = new TrainTicket;
    break;
  case 2:
    ticket = new AirplainTicket;
    break;
  case 3:
    ticket = new SubmarineTicket;
    break;
  }
// TrainTicket* tt = ticket;
// tt->


  Ticket t1;
  t1.setStatus(RESERVED);
  cout<<t1.getStatus();
  t1.setDestination(Penza);
  cout<<t1.getDestination();

  /*
  Ticket t_1, t_2;
  t_1.setName("test");
  char* n = t_1.getName();
  int k = 0;
  k++;
  return 0;
  */
}
