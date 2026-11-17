#include "chef.h"

Chef::Chef(const string &na) : name(na)
{
    cout<<"Chef "<<name<<" konstruktori"<<endl;
}

void Chef::makeSlad()
{
    cout<<"Chef "<<name<<" makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup"<<endl;
}

Chef::~Chef()
{
    cout<<"Chef "<<name<<" destruktori"<<endl;
}
