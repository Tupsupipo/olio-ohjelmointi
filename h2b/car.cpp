#include "car.h"


Car::Car(const string &brand, const string &model, int yearModel) : brand(brand),
    model(model),
    yearModel(yearModel)
{}


void Car::printData()
{
    cout<<"Brand: "<<brand<<" | Model: "<<model<<" | Model year: "<<yearModel<<endl;
}

