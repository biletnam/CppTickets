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

  cout << "На что вам нужен билет?" << endl;
  cout << "[1] на поезд" << endl;
  cout << "[2] на самолет " << endl;
  cout << "[3] на подводную лотку " << endl;
  int a = 0;
  cin >> a;
  if (a == 1) {
    TrainTicket person;
  } else if (a == 2) {
    AirplainTicket person;
  } else {
    SubmarineTicket person;
  }


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
