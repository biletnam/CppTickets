#include "TicketFilter.h"
#include <Windows.h>
#include <iostream>
#include <cstdio>

using namespace std;

TicketFilter::TicketFilter() {
  transport = NO;
}

TicketFilter::~TicketFilter() {
  //dtor
}

void TicketFilter::enterTransport(void)
{
    SetConsoleCP(65001); //это UTF-8
    SetConsoleOutputCP(65001);

    transport = NO;
    int in = 0;
    while(!in)
    {

        printf("Enter transport:\n");
        printf("[1] train\n");
        printf("[2] plane\n");
        printf("[3] submarine\n");

        cin >> in;
    }
    switch(in)
    {
        case 1:
            transport = TRAIN;
            cout << "train" << endl;
            break;
        case 2:
            transport = AIRPLANE;
            cout << "airplane" << endl;
            break;
        case 3:
            transport = SUBMARINE;
            cout << "submarine" << endl;
            break;
        default:
            break;
    }
    return;
}

void TicketFilter::enterPrice()
{
    cout << "Enter min price: ";
    cin >> price.from;
    cout << "entered: " << price.from << endl;
    cout << "Enter max price: ";
    cin >> price.to;
    cout << "entered: " << price.to << endl;
    return;
}

void TicketFilter::enterTime()
{
    printf("Enter min hour: ");
    cin >> time.from.hour;
    cout << "entered: " << time.from.hour << endl;
    printf("Enter max hour: ");
    cin >> time.to.hour;
    cout << "entered: " << time.to.hour << endl;
    return;
}

void TicketFilter::enterDestination()
{

    return;
}


