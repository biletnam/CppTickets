#ifndef AIRPLAINTICKET_H
#define AIRPLAINTICKET_H

#include "Ticket.h"

// Билет на самолёт
class AirplainTicket : public Ticket
{
  public:
    AirplainTicket();
    virtual ~AirplainTicket();
  protected:
  private:
};

#endif // AIRPLAINTICKET_H
