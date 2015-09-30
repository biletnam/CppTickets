#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED
#include <cstdlib>


using namespace std;

enum state {AVAILABLE, RESERVED, PAYED, WITHDRAWN, CANCELLED,
            EXPIRED}; //состояния нужны только автомату в buyTicket
                //сами состояния в билете, автомат не знает о них
                //и перекидивает по ситуации


//enum city {NONE=0x0,Elabuga, Penza, Siktivkar, Pskov, Rostov, Salehard};


#endif // COMMON_H_INCLUDED
