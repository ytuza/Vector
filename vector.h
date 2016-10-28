#include "PointArray.h"

class vec{
private:
    point a;
    point b;
public:
    vec(){}
    vec(point p, point q){ a = p; b = q;}
    vec(vec &j){a =j.a; b = j.b;}
    void printv();
    void seta(point na);
    void setb(point nb);
    point geta();
    point getb();
    void modvec(point na, point nb);
    double dista();
};
