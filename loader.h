#ifndef LOADER_H_INCLUDED
#define LOADER_H_INCLUDED

#include <iostream>
#include <string.h>
#include <vector>
#include <iterator>
using namespace std;

vector<string*> divideTicketString(string str);
string* copyStringPointToPoint(char* s,char* e);
char* findSymbolFromPoint(char* start,char symbol);
void test();

#endif // LOADER_H_INCLUDED
