#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"
using namespace std;

int main()
{
    Car objCar1("Volvo", "S80", 2005);
    Car objCar2;
    objCar2.setBrand("Skodillac");
    objCar2.setModel("Duperb");
    objCar2.setYearModel(2023);
    objCar1.printData();
    objCar2.printData();


    Rectangle *objRect1 = new Rectangle(2,2);
    objRect1->getArea();
    objRect1->getCircum();
    delete objRect1;
    objRect1 = nullptr;
    Rectangle *objRect2 = new Rectangle;
    objRect2->setWidth(5);
    objRect2->setHeight(4);
    objRect2->getArea();
    objRect2->getCircum();
    delete objRect2;
    objRect2 = nullptr;

    unique_ptr<Student> s = make_unique<Student>();
    s->setName("Aimo Tampio");
    s->setStudentNumber(42);
    s->setAverage(4.8);
    cout<<"Name of a student: "<<s->getName()<<" | Student number: "<<s->getStudentNumber()<<" | Average score: "<<s->getAverage()<<endl;

    return 0;
}
