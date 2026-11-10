#include "car.h"


Car::Car()
{

}

Car::Car(string brnd, string mdl, int year)
{
    brand=brnd;
    model=mdl;
    yearModel=year;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    cout<<"Brand: "<<brand<<" | Model: "<<model<<" | YearModel: "<<yearModel<<endl;
}
