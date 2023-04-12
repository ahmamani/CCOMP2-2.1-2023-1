/**
 * Implemente un funcion que reciba un caracter y verifique 
 * si dicho caracter es una letra ('a'-'z' y 'A' - 'Z')
*/
#include <iostream>

using namespace std;

bool esCaracter(char car) {
    int val = static_cast<int>(car);
    return ( (val >= 65 && val <= 90) || (val >= 97 && val <= 122) );
}

bool esNumero(char car) {
    return (car >= 48 && car <= 57);
}

int main() {
    char caracter;
    cout << "Ingrese un caracter: ";
    cin >> caracter;

    cout << esNumero(caracter) << endl;
    return 0;
}