#include <iostream>

using namespace std;

bool esPalIter(const int arr[], const int tam) {
    int ini = 0;
    int fin = tam-1;
    while(ini<fin) {
        if(arr[ini] != arr[fin])
            return false;
        ini++;
        fin--;
    }
    return true;
}

bool esPalRec(const int arr[], int tam, int ini=0) {
    if(ini>=tam-1)
        return true;
    if(arr[ini] != arr[tam-1])
        return false;
    return esPalRec(arr, tam-1, ini+1);
}

int main() {
    int arr[] = {1,2,3,3,2,1};
    cout << esPalIter(arr, 6) << endl;
    cout << esPalRec(arr, 6) << endl;
    return 0;
}
