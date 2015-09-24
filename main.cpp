// Задание: касса для продажи билетов
// К нам поступает информация о рейсах
// количестве и цене билетов на них.
// Мы продаём билеты и отчитываемся
// о проданном.
#include <iostream>

using namespace std;

enum STATE {AVAILABLE, RESERVED, PAYED, WITHDRAWN, CANCELLED, EXPIRED};//expired когда самолет уже прилетел
enum ACTION {RESERVE, PAY, CANCEL, CHANGE};

Class Ticket_booth { //касса
  
  void Ticket_FSM(STATE state, ACTION action){
    switch(state)
    {
      case AVAILABLE:
        if(action == RESERVE) state = RESERVED;
        break;
      case RESERVED:
        if(action == CANCEL) state = available; //как добавить, что самолет уже прилетел - в expired
        break;
      case PAYED:
        break;
      case WITHDRAWN:
        break;
      case CANCELLED:
        break;
      case EXPIRED:
        break;
      default:
    }
    return;
  }
  public:
    void addTicket();
    void claimTicket(ACTION action,); //желание полупателя
}

// Билет
class Ticket {
  struct time_loc{
   int year;
   int month;
   int day;
   int hour;
   int min;
  };
  
  
  }
 public:
  int ID; //чтобы следить за ним
  double price; // Цена билета
  bool discount; //Скидка
  time_loc ticket_time;
  STATE st;
};

// Билет на поезд
class TrainTicket : public Ticket {
};

// Билет на самолёт
class AirplainTicket : public Ticket {
};

// Билет на подводную лодку
class SubmarineTicket : public Ticket {
};

int main() {
  return 0;
}
