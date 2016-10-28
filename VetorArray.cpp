#include <iostream>
#include "VectorArray.h"

using namespace std;



void VectorArray::prav(){
    cout << "[";
    for(int i = 0;i<siz ;i++){
    cab[i].printv();
    cout << " / " ;
    }
    cout << "]" << endl;
}

void VectorArray::addfinv(const vec &p){
    vec* temp = cab;
    int i = 0;
    cab = new vec[siz+1];

    for(i; i<siz ; i++){
        cab[i] = temp[i];
    }
    cab[i] = p;
    siz++ ;
    delete[] temp;
}

void VectorArray::insv(const int position, const vec &p){
    vec* temp = cab;
    int i = 0 , j = 0;
    cab = new vec[siz+1];
    siz++ ;
    for(i; i<siz ; i++){
        if(position == i ){
            cab[i] = p;
            j--;
        }
        else{
            cab[i] = temp[j];
        }
        j++;
    }
    delete[] temp;
}

void VectorArray::remv(const int position){
    if(position >= siz){
        cout << "tamanio mayor" << endl;
        return;
    }
    vec* temp = cab;
    int i = 0 , j = 0;
    cab = new vec[siz-1];
    for(i; i<siz;i++){
        if(position != i){
            cab[j]= temp[i];
            j++;

        }

        cout << "dentro" << i << endl ;
    }
    cout << "salio" << endl;
    siz--;
    delete[]temp;
}

int VectorArray::getSizev(){
    return siz;
}

void VectorArray::clarv(){
    delete[]cab;
    cab = NULL;
    siz = 0;
}
