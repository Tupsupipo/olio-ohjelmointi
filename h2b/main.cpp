#include <iostream>
#include "car.h"
#include <vector>
using namespace std;

int main()
{
    vector<Car> carList;
    carList.emplace_back("Volvo","V90",2020);
    carList.emplace_back("Volkswagen","Beetle",1973);
    carList.emplace_back("Tesla","Model 3",2022);

    cout<<"Second car in the list: ";
    carList[1].printData();

    cout<<"All cars in the list:"<<endl;
    for (Car car: carList){
        car.printData();
    }
    return 0;
}
