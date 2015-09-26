#ifndef TICKETFILTER_H
#define TICKETFILTER_H

#include <climits>
#include <string>

#include "common.h"
#include "Ticket.h"

using namespace std;

// Фильтр билетов по заданным пользователем критериям
class TicketFilter {
public:
  // Максимальная цена билета
  Range<double> price;
  // Время отъезда
  Range<time_loc> time;
  // Пункт назначения
  string destination;
  // Тип транспорта
  Transport transport;

  TicketFilter();
  virtual ~TicketFilter();
protected:
private:
};

#endif // TICKETFILTER_H
