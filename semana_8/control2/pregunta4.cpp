#include <iostream>
#include <vector>

#include "Punto.h"

using namespace std;

int main() {
    Punto p1;
    Punto p2(3,4);

    Punto* ptr1 = &p1;
    Punto* ptr2 = &p2;
    
    //  ->  (punteros)
    // .   (objeto o instancia)
    p1.setX(10);
    ptr1->setX(29);

    vector<Punto*> v;
    v.push_back(ptr1);
    v.push_back(ptr2);

    return 0;
}