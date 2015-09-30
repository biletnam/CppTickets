#include "loader.h"

pPair findParamInParamPairs(string* str,char* params[],int qty)
{
    int i;
    char* strPar;
    pPair parPair;
    strPar=&str->at(0);
    char* point;
    char* temp=params[0];
    for(i=0; i<qty; i++)
    {
        if(strncmp(params[i],strPar,strlen(params[i]))==0)
        {
            parPair.par=params[i];
            point=findSymbolFromPoint(strPar,'=');
            point++;
            while(*point!='\0')
            {
                parPair.value.push_back(*point);
                point++;
            }
            return parPair;
        }
    }
}
char* findSymbolFromPoint(char* start,char symbol){
    while(*start!='\0'){
        if(*start==symbol) {
                return start;
        }
        start++;
    }
    return NULL;
}

vector<string*> divideTicketString(string str,char symbol){
    vector<string*> par; //parapmeters of ticket
    char* pointer=&str[0];
    char* result=(findSymbolFromPoint(pointer,symbol));
    while(result!=NULL){
        par.push_back(copyStringPointToPoint(pointer,result));
        pointer=++result;
        result=(findSymbolFromPoint(pointer,symbol));
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
    char *paramFields[]= {"id","prc","name","dicountstatus","dst","time","status"};
    string test("id=1:prc=10:name=nikolau:dicountstatus=false:dst=moskow:time=1120:status=available;id=1:prc=100:name=david:dicountstatus=true:dst=tver:time=1535:status=available;");
    vector<string*> ticket;
    ticket.reserve(10);
    vector<string*> param;
    param.reserve(10);
    ticket=divideTicketString(test,';');
    int i;
    pPair parPair;
    for(i=0; i<ticket.size(); i++)
    {
        cout<<*ticket[i]<<endl;
        param=divideTicketString(*ticket[i],':');
        int j;
        for(j=0; j<param.size(); j++)
        {
            cout<<*param[j]<<endl;
            parPair=findParamInParamPairs(param[j],paramFields,7);
            cout<<parPair.par<<endl;
            cout<<parPair.value<<endl;
            cout<<"next"<<endl;
        }
    }
    //return 0;
}
