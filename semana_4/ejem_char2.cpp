#include <iostream>

using namespace std;
/**
 * Implemente un programa que reciba 2 caracteres, verifique 
 * si dichos caracteres representan numeros e imprima la el 
 * resultado de sumar dichos caracteres
 * si se ingresa '1' y '3', debe mostrar 4
*/
int main() {
    char car1, car2;
    cout << "Ingrese el primer caracter: ";
    cin >> car1;
    cout << "Ingrese el segundo caracter: ";
    cin >> car2;

    int val1 = static_cast<int>(car1);
    int val2 = static_cast<int>(car2);
    if( (val1 >= 48 && val1 <= 57) && (val2 >= 48 && val2 <= 57) ) {
        int suma = (val1 - '0') + (val2 - '0');
        cout << "La suma es " << suma << endl;

    } else {
        cout << "Uno o ambos caracteres no representa un NUMERO!!" << endl;
    }
        
    return 0;
}