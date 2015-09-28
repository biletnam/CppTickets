#ifndef LOADER_H_INCLUDED
#define LOADER_H_INCLUDED

#include <iostream>
#include <string.h>
#include <vector>
#include <iterator>
using namespace std;

vector<string*> divideTicketString(string str,char symbol); //divide string with symbol and returns vector of strings
string* copyStringPointToPoint(char* s,char* e);            //returns copy of part of string between two pointers      
char* findSymbolFromPoint(char* start,char symbol);         //finds next symbol in string and return pointer to this symbol
pPair findParamInParamPairs(string* str,char* params[],int qty);
void test();

#endif // LOAD_H_INCLUDED
