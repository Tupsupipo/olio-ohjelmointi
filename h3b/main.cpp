#include <iostream>
#include "animal.h"
#include "dog.h"
using namespace std;

int main()
{
    Animal objAnimal;
    Dog objDog;
    objAnimal.callOut();
    objDog.callOut();
    return 0;
}
