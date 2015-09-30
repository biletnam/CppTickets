#ifndef TICKETOFFICE_H
#define TICKETOFFICE_H

#include <iostream>
#include <vector>
#include "TicketFilter.h"

using namespace std;

#define CITY_SIZE 50

//касса
class TicketOffice {
  vector <Ticket> tickets;
  string city_array[CITY_SIZE]; //пусть приватная часть кассы - сейфик с базой данных
public:
  TicketOffice();
  virtual ~TicketOffice();
  void welcome(void);
  // Покупка билета
  void buyTicket();
  // Загрузка билетов
  void load(Ticket ticket);
  void show(int n);
  void enterData();
  void setCityArray(string city) //можно функцией с переменным числом аргументов
                            //книжка осталась на работе, лень гуглить(
  {
      static int cnt;
      if(cnt <= CITY_SIZE)
      {
        city_array[cnt] = city;
        cnt++;
      }
      else cout << "too many cities in the scope\n" << endl;
  }

  string getFromCityArray(int index)
  {
      return city_array[index];
  }

protected:
};

#endif // TICKETOFFICE_H
