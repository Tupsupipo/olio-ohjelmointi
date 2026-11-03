#include <iostream>
#include <iomanip>
#include "functions.h"
using namespace std;

int a;
int b;

int main() {
    cout << "Anna kokonaisluku: ";
    cin >> a;
    cout << "Anna toinen kokonaisluku: ";
    cin >> b;
    calcSum(a,b);
    calcDiv(a,b);

    cout<< "retSum funktion palautus: " <<a<<"+"<<b<<" = "<< retSum(a,b) << endl;

    //jos try-lohkossa nousee runtime error, hypätään catch-lohkoon
    try {
        float result = retDiv(a,b);
        cout<< fixed<< setprecision(2)<< "retDiv funktion palautus: " << a << "/" <<  b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }

    return 0;

}

