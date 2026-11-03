#include "functions.h"
#include <iostream>
#include <iomanip>
using namespace std;

void calcSum(int a, int b) {
    cout<< fixed<< setprecision(2)<< "calcSum funktion tulos: " <<a<<"+"<<b<<" = "<< a+b <<endl;
}

void calcDiv(int a, int b) {
    if (b==0) {
        cout << "Jakaja ei saa olla nolla!" <<endl;
    }
    else {
    cout<< fixed<< setprecision(2)<< "calcDiv funktion tulos: " <<a<<"/"<<b<<" = "<< (float)a/b <<endl;
    }
}

int retSum(int a,int b) {
    return a+b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Jakaja ei saa olla nolla!");
    }
    return (float)a/b;
}
