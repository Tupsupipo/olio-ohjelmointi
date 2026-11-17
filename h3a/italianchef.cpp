#include "italianchef.h"

ItalianChef::ItalianChef(string na) : Chef(na) {
    cout<<"ItalianChef "<<name<<" konstruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"ItalianChef "<<name<<" makes pasta"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<name<<" destruktori"<<endl;
}
