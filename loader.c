#include "load.h"
char* findSymbolFromPoint(char* start,char symbol){
    while(*start!='\0'){
        if(*start==symbol) {
                return start;
        }
        start++;
    }
    return NULL;
}

vector<string*> divideTicketString(string str){
    vector<string*> par; //parapmeters of ticket
    char* pointer=&str[0];
    char* result=(findSymbolFromPoint(pointer,';'));
    while(result!=NULL){
        par.push_back(copyStringPointToPoint(pointer,result));
        pointer=++result;
        result=(findSymbolFromPoint(pointer,';'));
    }
    return par;
}

string* copyStringPointToPoint(char* s,char* e){
    string* str=new string;
    int l;
    while(s<e){
        str->push_back(*s);
        s++;
    }
    str+='\0';
    return str;
}

void test()
{
    string test("id=1:prc=10:name=nikolau:dicountstatus=false:dst=moskow:time=1120:status=available;id=1:prc=100:name=david:dicountstatus=true:dst=tver:time=1535:status=available;");
    vector<string*> par;
    par.reserve(10);
    par=divideTicketString(test);
    int i;
    for(i=0;i<par.size();i++){
        cout<<*par[i]<<endl;
    }
    //return 0;
}
