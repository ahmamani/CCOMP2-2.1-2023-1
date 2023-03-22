// Este es un comentario de una linea
/*
Este es un comentario de 
varias lineas
*/
/**
 * Implemente un programa que solicite por teclado la edad
 * e imprima si dicha edad corresponde a una persona mayor de edad.
*/
#include <iostream>

using namespace std;

int main() {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if( edad >= 18 ) {
        cout << "Usted es mayor de edad!" << endl;
    } else {
        cout << "Usted NO es mayor de edad!" << endl;
    }
    
    return 0;
}