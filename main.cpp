// Задание: касса для продажи билетов
// К нам поступает информация о рейсах
// количестве и цене билетов на них.
// Мы продаём билеты и отчитываемся
// о проданном.
#include <iostream>
#include <string>
#include <clocale>
#include <Windows.h>
#include "Ticket.h"
#include "TrainTicket.h"
#include "AirplainTicket.h"
#include "SubmarineTicket.h"
#include "TicketOffice.h"
#include "common.h"

using namespace std;

int main() {
  //setlocale(LC_ALL, "Russian");
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);

  /* Города изначально неизвестны */
  TicketOffice office;
  office.setCityArray("Elabuga");
  office.setCityArray("Penza");
  office.setCityArray("Siktivkar");
  office.setCityArray("Pskov");
  office.setCityArray("Novgorod");
  office.setCityArray("Salehard");

/* Здесь на самом деле ввод из файла */
  Ticket ticket1(100, false, office.getFromCityArray(0), 22, 11);
  office.load(ticket1);
  Ticket ticket2(200, true, office.getFromCityArray(2), 18, 23);
  office.load(ticket2);
/***********************/

  //посмотреть, что ввелось
  office.show(0);
  office.welcome();

  TicketFilter filter;
  filter.enterTransport();
  filter.enterPrice();
  //filter.enterTime();





//  Ticket* ticket = NULL;
//  switch(a) {
//  case 1:
//    ticket = new TrainTicket;
//    break;
//  case 2:
//    ticket = new AirplainTicket;
//    break;
//  case 3:
//    ticket = new SubmarineTicket;
//    break;
//  }
//// TrainTicket* tt = ticket;
//// tt->
//
//
//  Ticket t1;
//  t1.setStatus(RESERVED);
//  cout<<t1.getStatus();
//  t1.setDestination("Penza");
//  cout<<t1.getDestination();

  /*
  Ticket t_1, t_2;
  t_1.setName("test");
  char* n = t_1.getName();
  int k = 0;
  k++;
  return 0;
  */
}
