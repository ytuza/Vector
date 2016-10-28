#include <iostream>
#include "point.h"

using namespace std;

void point::printp(){
    cout << "(" << x << "," << y << ")" ;
}

void point::setx(double nx){
    x = nx;
}
void point::sety(double ny){
    y = ny;
}
double point::getx(){
    return x;
}
double point::gety(){
    return y;
}
void point::modpo(double nx, double ny){
    x = nx;
    y = ny;
}


