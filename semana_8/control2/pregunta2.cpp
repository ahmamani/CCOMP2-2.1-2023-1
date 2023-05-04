#include <iostream>

using namespace std;

void intercambio_ref(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void intercambio_ptr(int *p, int *q) {
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

int main() {
    int x = 10;
    int y = 20;
    intercambio_ref(x, y);
    cout << x << endl;
    cout << y << endl;
    intercambio_ptr(&x, &y);
    cout << x << endl;
    cout << y << endl;
    
    return 0;
}