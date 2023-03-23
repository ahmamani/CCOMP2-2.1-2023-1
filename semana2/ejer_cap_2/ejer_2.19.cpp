#include <iostream>

using namespace std;

int main() {
    
    int num1, num2, num3;
    cout << "Input three different integers: ";
    cin >> num1 >> num2 >> num3;

    cout << "Sum is " << (num1 + num2 + num3) << endl;
    cout << "Average is " << (num1 + num2 + num3) / 3 << endl;
    cout << "Product is " << (num1 * num2 * num3) << endl;

    int min;
    int max;
    if(num1 < num2 && num1 < num3)
        min = num1;
    if(num2 < num1 && num2 < num3)
        min = num2;
    if(num3 < num1 && num3 < num2)
        min = num3;
    cout << "Smallest is " << min << endl;
    if(num1 > num2 && num1 > num3)
        max = num1;
    if(num2 > num1 && num2 > num3)
        max = num2;
    if(num3 > num1 && num3 > num2)
        max = num3;
    cout << "Largest is " << max << endl;

    return 0;
} 
