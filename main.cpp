// Задание: касса для продажи билетов
// К нам поступает информация о рейсах
// количестве и цене билетов на них.
// Мы продаём билеты и отчитываемся
// о проданном.
#include <iostream>

using namespace std;

enum state {AVAILABLE, RESERVED, PAYED, WITHDRAWN, CANCELLED, EXPIRED}; //  expired когда самолет уже прилетел
enum city {NONE=0x0,Elabuga, Penza, Siktivkar, Pskov, Rostov, Salehard};         //  по хорошему не в каждый из портов этих прекрасных городов может зайти подводная лодка
struct time_loc                                                         //  я сократил время до сегодняшнего дня, а то запаритесь с проверкой на кол-во дней в году и високосность
{
    int hour;
    int minute;
};

class Ticket_booth   //касса
{

};

// Билет
class Ticket
{
public:                         //все параметры пихаем в приват, общаемся через паблик методы ибо Инкапсуляция
    Ticket();
    ~Ticket();
    static int counter;         //статическая переменная, счетчик. Инкрементируется при каждом создании билета и уменьшается при деструкции
    void setID(int id_t)
    {
        idT=id_t;
    }
    void setName(char* n)
    {
        delete owner_name;
        owner_name=new char[10];
        owner_name=n;
    }
    void setPrice(double p)
    {
        price=p;
    }
    void setDiscountStatus(bool d)
    {
        discountStatus=d;
    }
    void setStatus(state s);
    void setDestination(city c)
    {
        destination=c;
    }
    void setTime(time_loc t)
    {
        ticket_time.hour=t.hour;
        ticket_time.minute=t.minute;
    }

    int getIdT()
    {
        return idT;
    }
    char* getName()
    {
        return owner_name;
    }
    double getPrice()
    {
        return price;
    }
    bool getDiscountStatus()
    {
        return discountStatus;
    }
    char* getStatus()       //TODO чтобы выводил символами статус
    {
       char *STATUS[] = {"AVAILABLE", "RESERVED", "PAYED", "WITHDRAWN", "CANCELLED", "EXPIRED"};

        return STATUS[status];
    }
    char* getDestination()
    {
        char* DESTINATION[]={"NONE=0x0","Elabuga", "Penza", "Siktivkar", "Pskov", "Rostov", "Salehard"};
        return DESTINATION[destination];     //TODO чтобы выводил символами город
    }
    time_loc getTime()
    {
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

void Ticket::setStatus(state s)
{
    if((s==AVAILABLE)||(s==WITHDRAWN))
    {
        delete owner_name;
        owner_name=new char[10];
        owner_name="none";
    }
    status=s;
}

Ticket::Ticket(){
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
Ticket::~Ticket(){
    delete owner_name;
    counter--;
}
// Билет на поезд
class TrainTicket : public Ticket
{
};

// Билет на самолёт
class AirplainTicket : public Ticket
{
};

// Билет на подводную лодку
class SubmarineTicket : public Ticket
{
};


int Ticket::counter=0;
int main()
{
    setlocale(LC_ALL, "Russian");
   /*
    cout << "На что вам нужен билет?" << endl;
		cout << "[1] на поезд" << endl;
		cout << "[2] на самолет " << endl;
		cout << "[3] на подводную лотку " << endl;
		int a = 0;
		cin >> a;
		if (a == 1) {
			TrainTicket person;
		}
		else if (a == 2) {
			AirplainTicket person;
		}
		else {
			SubmarineTicket person;
		}
		*/

		Ticket t1;
		t1.setStatus(RESERVED);
		cout<<t1.getStatus();
		t1.setDestination(Penza);
		cout<<t1.getDestination();

	/*
	Ticket t_1, t_2;
	t_1.setName("test");
	char* n = t_1.getName();
	int k = 0;
	k++;
	return 0;
	*/
}
