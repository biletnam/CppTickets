#ifndef TICKETOFFICE_H
#define TICKETOFFICE_H

#include <vector>
#include "TicketFilter.h"

using namespace std;

//касса
class TicketOffice {
  vector<Ticket*> tickets;
public:
  TicketOffice();
  virtual ~TicketOffice();
  // Покупка билета
  void buyTicket();
  // Загрузка билетов
  void load();
protected:
private:
};

#endif // TICKETOFFICE_H
