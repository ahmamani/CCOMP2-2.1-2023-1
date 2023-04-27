#include <iostream>
using namespace std;

bool esPalIter(int *ini, const int tam) {
    int *fin = (ini + tam - 1);
    while(ini < fin) {
        if(*ini++ != *fin--)
            return false;
    }
    return true;
}

bool esPalRec(int *ini, int *fin) {
    if(ini>=fin)
        return true;
    if(*ini != *fin)
        return false;
    return esPalRec(++ini, --fin);
}

void print(int *arr, int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++, arr++)
        cout << *arr << " ";
    cout << "]" << endl;
}

int main() {
    int arr[] = {1,2,3,3,2,1};
    int tam = sizeof(arr) / sizeof(arr[0]);

    cout << esPalIter(arr, tam) << endl;
    cout << esPalRec(arr, arr+tam-1) << endl;
    return 0;
}
