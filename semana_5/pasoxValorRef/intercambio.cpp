#include <iostream>

using namespace std;

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
    cout << "el valor de a en intercambio es " << a << endl;
    cout << "el valor de b en intercambio es " << b << endl;
}

int main() {
    int q = 10;
    int r = 20;

    intercambio(q, r);

    cout << "el valor de q en main es " << q << endl;
    cout << "el valor de r en main es " << r << endl;

    return 0;
}
