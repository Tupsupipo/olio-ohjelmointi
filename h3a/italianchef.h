#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string);
    void makePasta();
    string getName();
    ~ItalianChef() override;
};

#endif // ITALIANCHEF_H
