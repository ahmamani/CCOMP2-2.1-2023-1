/**
 * Factorial
 * n! = n * (n-1)!
 * 
 * 0! = 1
 * 
*/
#include <iostream>

using namespace std;

long long factorial(int n) {
    if(n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int n;
    cout << "Ingrese el numero: ";
    cin >> n;

    //imprimirNFibo(n);
    cout << "El factorial de " << n << " es " << factorial(n) << endl;
    return 0;
}
