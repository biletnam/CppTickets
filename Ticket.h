#ifndef TICKET_H
#define TICKET_H
#include "common.h"
#include <string>




struct time_loc {                                                       //  я сократил время до сегодняшнего дня, а то запаритесь с проверкой на кол-во дней в году и високосность
  int hour;
  int minute;
};

// Вид транспорта - его в поля каждого наследника добавить? так-то и так понятно, что если
// обратиться к элементу типа поезд, он и есть поезд, но в билете не написано


// Билет
class Ticket {
private:

  //char* city_array[10];
  int idT;                    //чтобы следить за ним
  string owner_name;
  double price;               //Цена билета
  bool discountStatus;        //Скидка
  state status;               //Статус билета
  string destination;           //место назначения
  time_loc ticket_time;       //время отправления
public:                         //все параметры пихаем в приват, общаемся через паблик методы ибо Инкапсуляция

  Ticket();
  Ticket(double price, bool discountStatus, string destination, int hour, int minute);
  ~Ticket();
  static int counter;         //статическая переменная, счетчик. Инкрементируется при каждом создании билета и уменьшается при деструкции



  void setID(int id_t) {
    idT=id_t;
  }
  void setName(string n) {
    owner_name = n;
  }
  void setPrice(double p) {
    price=p;
  }
  void setDiscountStatus(bool d) {
    discountStatus=d;
  }
  void setStatus(state s);

  void setDestination(string city) {
    destination = city;
  }
  void setTime(time_loc t) {
    ticket_time.hour=t.hour;
    ticket_time.minute=t.minute;
  }

  int getIdT() {
    return idT;
  }
  string getName() {
    return owner_name;
  }
  double getPrice() {
    return price;
  }
  bool getDiscountStatus() {
    return discountStatus;
  }
  state getStatus() {     //TODO чтобы выводил символами статус
    //char *STATUS[] = {"AVAILABLE", "RESERVED", "PAYED", "WITHDRAWN", "CANCELLED", "EXPIRED"};
    return status;
  }
  string getDestination() {
    //char* DESTINATION[]= {"NONE=0x0","Elabuga", "Penza", "Siktivkar", "Pskov", "Rostov", "Salehard"};

    return destination;     //TODO чтобы выводил символами город
  }
  time_loc getTime() {
    return ticket_time;
  }

};

#endif // TICKET_H
