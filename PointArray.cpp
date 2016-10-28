#include <iostream>
#include "PointArray.h"

using namespace std;

void PointArray::resiz(const int x){
    point *a;
    a = new point[x];
    siz = x;
    int i = 0;
    for(i; i<x ;i++){
        a[i]= cab[i];
    }
    delete[] cab;
    cab = a;
}

void PointArray::prap(){
    cout << "[";
    for(int i = 0;i<siz ;i++){
    cab[i].printp();
    cout << " " ;
    }
    cout << "]" << endl;
}

void PointArray::addfin(const point &p){
    point* temp = cab;
    int i = 0;
    cab = new point[siz+1];

    for(i; i<siz ; i++){
        cab[i] = temp[i];
    }
    cab[i] = p;
    siz++ ;
    delete[] temp;
}

void PointArray::insp(const int position, const point &p){
    point* temp = cab;
    int i = 0 , j = 0;
    cab = new point[siz+1];
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

void PointArray::remp(const int position){
    if(position >= siz){
        cout << "tamanio mayor" << endl;
        return;
    }
    point* temp = cab;
    int i = 0 , j = 0;
    cab = new point[siz-1];
    for(i; i<siz;i++){
        if(position != i){
            cab[j]= temp[i];
            j++;

        }


    }

    siz--;
    delete[]temp;
}

int PointArray::getSize(){
    return siz;
}

void PointArray::clar(){
    delete[]cab;
    cab = NULL;
    siz = 0;
}

point* PointArray::getp(const int pos){
    if(siz > pos)
        return &cab[pos];
    return NULL;
}

const point* PointArray::getp(const int pos) const {
    if(siz > pos)
        return &cab[pos];
    return NULL;
}

