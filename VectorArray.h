#include "vector.h"

class VectorArray{
private:
    vec* cab = NULL;
    int siz;
public:
    VectorArray(vec arr[], const int sz){
        cab = new vec[sz];
        for(int i = 0; i<sz ; i++){
            cab[i] = arr[i];
        }
        siz = sz;
    }
    VectorArray(const VectorArray& pv){
        cab = new vec[pv.siz];
        siz = pv.siz;
        for(int i = 0; i<siz ; i++){
            cab[i] = pv.cab[i];
        }
    }
    void prav();
    void addfinv(const vec &p);
    void insv(const int position, const vec &p);
    void remv(const int position);
    int getSizev();
    void clarv();

};
