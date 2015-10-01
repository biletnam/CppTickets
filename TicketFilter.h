#ifndef TICKETFILTER_H
#define TICKETFILTER_H

#include <climits>
#include <string>

#include "common.h"
#include "Ticket.h"

/* Фильтр существует отдельно от кассы */
/* Он принимает данные от пользователя */

using namespace std;

enum Transport {NO, TRAIN, AIRPLANE, SUBMARINE };

// Диапазон
template <class T>
struct Range {
  T from;
  T to;
  bool enabled; // Фильтр включен
  Range() : enabled(false) {};
  Range(T from, T to) : from(from), to(to), enabled(true) {};
  //Range(Transport from = NO, Transport to = NO);

  template <class T2>
  friend std::istream& operator >> (std::istream& in, const Range<T2>& obj);

  template <class T2>
  friend std::ostream& operator << (std::ostream& out, const Range<T2>& obj);

};


template <class T>
std::istream& operator >> (std::istream& in, Range<T>& obj) {
  in >> obj.from;
  return in;
}

template <class T>
std::ostream& operator << (std::ostream& out, Range<T>& obj) {
  out << obj.from;
  return out;
}

// Фильтр билетов по заданным пользователем критериям
class TicketFilter {
public:
  Range <double> price;

  //Range <int> iii; //это была проверка, что оператор перегружается
  // Время отъезда
  Range <time_loc> time;
  // Пункт назначения
  string destination;
  // Тип транспорта
  Transport transport;

  void enterTransport(void);
  void enterPrice(void);
  void enterTime(void);
  void enterDestination(void);
  TicketFilter();
  virtual ~TicketFilter();
protected:
private:


};

#endif // TICKETFILTER_H
