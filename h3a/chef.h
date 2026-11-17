#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{
protected:
    string name;
public:
    Chef(const string &name);
    void makeSlad();
    void makeSoup();
    virtual ~Chef();
};

#endif // CHEF_H
