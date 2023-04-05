#include <iostream>

using namespace std;
/**
 * Implemente un programa que solicite por teclado una cadena y 
 * un caracter e imprima la cantidad de veces que el caracter
 * se encuentra en dicha cadena
 * Por ejemplo: "ciencia" - 'i'
 * debe imprimir: 2
*/
int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    cin >> cadena;
    char car;
    cout << "Ingrese un caracter: ";
    cin >> car;

    int contador = 0;
    for(int i = 0; i < cadena.length(); i++) {
        if(car == cadena.at(i))
            contador++;
    }
    cout << "El caracter " << car << " se repite " << contador
            << " veces!!" << endl;
        
    return 0;
}