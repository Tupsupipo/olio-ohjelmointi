#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef objChef("Gordon Ramsay");
    objChef.makeSlad();
    objChef.makeSoup();
    ItalianChef objItalianChef("Anthony Bourdain");
    objItalianChef.makeSlad();
    objItalianChef.makeSoup();
    objItalianChef.makePasta();
    string name = objItalianChef.getName();
    cout<<"Name of the Italian chef is "<<name<<endl;
    return 0;
}
