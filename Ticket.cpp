#include "Ticket.h"

void Ticket::setStatus(state s) {
  if((s==AVAILABLE)||(s==WITHDRAWN)) {
    delete owner_name;
    owner_name=new char[10];
    owner_name="none";
  }
  status=s;
}

Ticket::Ticket() {
  idT=counter++;
  setStatus(AVAILABLE);
  setPrice(0);
  setDestination(NONE);
  setDiscountStatus(false);
  time_loc temp;
  temp.hour=0;
  temp.minute=0;
  setTime(temp);
}

Ticket::~Ticket() {
  delete owner_name;
  counter--;
}

int Ticket::counter=0;
