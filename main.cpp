#include <iostream>

#include "VectorArray.h"

using namespace std;

int main()
{
    point a(4.43,5.39) , b(3,4), c(6.7,7.8);
    point x(66,77),y(1.2,2.3),z(5,6);
    vec p(a,x) , q(b,y) , t(c,z);
    point arr[4]={a,b,c,x};
    PointArray hola(arr,4);

    point *u;

    u = hola.getp(2);
    u -> printp();
    cout << endl;


    u -> printp();
    return 0;
}
