#include <iostream>

using namespace std;
/**
 * Implemente un funcion que reciba como argumento una cadena 
 * y un caracter y retorne la cantidad de veces que el 
 * caracter se encuentra en dicha cadena
 * Por ejemplo: "ciencia" - 'i'
 * debe imprimir: 2
*/
int contarCharDeCadena(string cad, char car) {
    int contador = 0;
    for(int i = 0; i < cad.length(); i++) {
        if(car == cad.at(i))
            contador++;
    }
    return contador;
}

bool esCaracter(char car) {
    int val = static_cast<int>(car);
    return ( (val >= 65 && val <= 90) || (val >= 97 && val <= 122) );
}

bool esNumero(char car) {
    return (car >= 48 && car <= 57);
}

/**
 * Implemente una funcion que reciba una cadena que contenga 
 * digitos y retorne la cantidad de digitos.
 * Por ejm. "1sss2s3d4ffds5"
 *      debe retornar -> 5
*/
int contarDigitosDeCadena(string cad) {
    int contador = 0;
    for(int i = 0; i < cad.length(); i++) {
        if( esNumero(cad.at(i)) )
            contador++;
    }
    return contador;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    cin >> cadena;

    cout << "Numero de digitos: " << contarDigitosDeCadena(cadena) << endl;
    /*char car;
    cout << "Ingrese un caracter: ";
    cin >> car;
*/
    //cout << "El caracter " << car << " se repite " 
    //        << contarCharDeCadena(cadena, car) << " veces!!" << endl;
    return 0;
}