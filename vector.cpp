
#include <iostream>
#include "vector.h"
#include <math.h>

using namespace std;

void vec::printv(){
    a.printp();
    cout << " -> " ;
    b.printp();

}
void vec::seta(point na){
    a = na;
}
void vec::setb(point nb){
    b = nb;
}
point vec::geta(){
    return a;
}
point vec::getb(){
    return b;
}
void vec::modvec(point na, point nb){
    a = na;
    b = nb;
}

double vec::dista(){
    return sqrt(pow((b.getx()-a.getx()),2)+pow((b.gety()-a.gety()),2));
}
