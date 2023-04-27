#include <iostream>
using namespace std;

bool esPalIter(const int arr[], const int tam) {
    int ini = 0;
    int fin = tam-1;
    while(ini<fin) {
        if(arr[ini++] != arr[fin--])
            return false;
    }
    return true;
}

bool esPalRec(const int arr[], int tam, int ini = 0) {
    if(ini>=tam-1)
        return true;
    if(arr[ini] != arr[tam-1])
        return false;
    return esPalRec(arr, --tam, ++ini);
}

int main() {
    int arr[] = {1,2,3,4,3,2,1};
    cout << esPalIter(arr, 7) << endl;
    cout << esPalRec(arr, 7) << endl;
    return 0;
}
