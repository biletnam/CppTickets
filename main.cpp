// Задание: касса для продажи билетов
// К нам поступает информация о рейсах
// количестве и цене билетов на них.
// Мы продаём билеты и отчитываемся
// о проданном.
#include <iostream>

using namespace std;

// Билет
class Ticket {
 public:
  double price; // Цена билета
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
