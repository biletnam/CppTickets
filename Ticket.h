#ifndef TICKET_H
#define TICKET_H

enum state {AVAILABLE, RESERVED, PAYED, WITHDRAWN, CANCELLED,
            EXPIRED //  expired когда самолет уже прилетел
           };

enum city {NONE=0x0,Elabuga, Penza, Siktivkar, Pskov, Rostov, Salehard};         //  по хорошему не в каждый из портов этих прекрасных городов может зайти подводная лодка
struct time_loc {                                                       //  я сократил время до сегодняшнего дня, а то запаритесь с проверкой на кол-во дней в году и високосность
  int hour;
  int minute;
};

// Вид транспорта
enum Transport { NO, TRAIN, AIRPLANE, SUBMARINE };

// Билет
class Ticket {
public:                         //все параметры пихаем в приват, общаемся через паблик методы ибо Инкапсуляция
  Ticket();
  ~Ticket();
  static int counter;         //статическая переменная, счетчик. Инкрементируется при каждом создании билета и уменьшается при деструкции
  void setID(int id_t) {
    idT=id_t;
  }
  void setName(char* n) {
    delete owner_name;
    owner_name=new char[10];
    owner_name=n;
  }
  void setPrice(double p) {
    price=p;
  }
  void setDiscountStatus(bool d) {
    discountStatus=d;
  }
  void setStatus(state s);
  void setDestination(city c) {
    destination=c;
  }
  void setTime(time_loc t) {
    ticket_time.hour=t.hour;
    ticket_time.minute=t.minute;
  }

  int getIdT() {
    return idT;
  }
  char* getName() {
    return owner_name;
  }
  double getPrice() {
    return price;
  }
  bool getDiscountStatus() {
    return discountStatus;
  }
  char* getStatus() {     //TODO чтобы выводил символами статус
    char *STATUS[] = {"AVAILABLE", "RESERVED", "PAYED", "WITHDRAWN", "CANCELLED", "EXPIRED"};

    return STATUS[status];
  }
  char* getDestination() {
    char* DESTINATION[]= {"NONE=0x0","Elabuga", "Penza", "Siktivkar", "Pskov", "Rostov", "Salehard"};
    return DESTINATION[destination];     //TODO чтобы выводил символами город
  }
  time_loc getTime() {
    return ticket_time;
  }
private:
  int idT;                    //чтобы следить за ним
  char* owner_name;
  double price;               //Цена билета
  bool discountStatus;        //Скидка
  state status;               //Статус билета
  city destination;           //место назначения
  time_loc ticket_time;       //время отправления
};

#endif // TICKET_H
