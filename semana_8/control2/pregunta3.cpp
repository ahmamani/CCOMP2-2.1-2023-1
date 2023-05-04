#include <iostream>
using namespace std;

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}
void intercambio_ptr(int *p, int *q) {
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

void invertir(int *ini, const int tam) {    
    int *fin = (ini + tam - 1);
    while(ini < fin) {
        intercambio_ptr(ini++, fin--);
    }
}

void invertirRec(int *ini, int *fin) {
    if(ini >= fin)
        return;
    intercambio_ptr(ini, fin);
    invertirRec(++ini, --fin);
}

void print(const int arr[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}

int main() {
    int arr[] = {1,2,3,4,10,9,5};
    int tam = sizeof(arr) / sizeof(arr[0]);
    invertir(arr, 7);
    print(arr, 7);
    invertirRec(arr, arr+tam-1);
    print(arr, 7);
    return 0;
}
