#include "point.h"

class PointArray{
private:
    point* cab;
    int siz;
    void resiz(const int x);
public:
    PointArray(){
        cab = new point[0];
        siz = 0;
    }
    PointArray(point arr[], const int sz){
        cab = new point[sz];
        for(int i = 0; i<sz ; i++){
            cab[i] = arr[i];
        }
        siz = sz;
    }
    PointArray(const PointArray& pv){
        cab = new point[pv.siz];
        siz = pv.siz;
        for(int i = 0; i<siz ; i++){
            cab[i] = pv.cab[i];
        }
    }
    void prap();
    void addfin(const point &p);
    void insp(const int position, const point &p);
    void remp(const int position);
    int getSize();
    void clar();
    point* getp(const int pos);
    const point* getp(const int pos)const;



};

