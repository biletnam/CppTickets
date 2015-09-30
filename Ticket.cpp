#include "Ticket.h"



void Ticket::setStatus(state s) {
  if((s==AVAILABLE)||(s==WITHDRAWN)) {
    owner_name="none";
  }
  status=s;
}

Ticket::Ticket() {
  idT=counter++;
  setStatus(AVAILABLE);
  setPrice(0);
  setDestination("");
  setDiscountStatus(false);
  time_loc temp;
  temp.hour=0;
  temp.minute=0;
  setTime(temp);
}

Ticket::Ticket(double price, bool discountStatus, string destination, int hour, int minute)
{
    time_loc ticket_time;
    ticket_time.hour = hour;
    ticket_time.minute = minute;

    idT=counter++;
    setStatus(AVAILABLE);
    setPrice(price);
    setDiscountStatus(discountStatus);
    setDestination(destination);
    setTime(ticket_time);
}

Ticket::~Ticket() {
  //delete owner_name;
  counter--;
}

int Ticket::counter=0;
