#include <iostream>
using namespace std;

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void invertir(int arr[], const int tam) {
    int ini = 0;
    int fin = tam - 1;
    while(ini < fin) {
        intercambio(arr[ini++], arr[fin--]);
    }
}

void invertirRec(int arr[], int tam, int ini = 0) {
    if(ini>=tam-1)
        return;
    intercambio(arr[ini], arr[tam-1]);
    invertirRec(arr, --tam, ++ini);
}

void print(const int arr[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}

int main() {
    int arr[] = {1,2,3,4,10,9,5};
    invertir(arr, 7);
    print(arr, 7);
    invertirRec(arr, 7);
    print(arr, 7);
    return 0;
}
