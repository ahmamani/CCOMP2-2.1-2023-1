#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Array.h" // Array class definition

using namespace std;

Array::Array(int arraySize)
    : size{(arraySize > 0 ? static_cast<size_t>(arraySize) :
            throw invalid_argument{"Array size must be greater than 0"})},
            ptr{ new int[size]{} } {}

Array::Array(const Array& arrayToCopy)
        : size{arrayToCopy.size}, ptr{new int[size]} {
    for (size_t i{0}; i < size; ++i) {
        ptr[i] = arrayToCopy.ptr[i];
    }
}

Array::~Array() {
    delete[] ptr;
}

size_t Array::getSize() const {
    return size;
}

const Array& Array::operator=(const Array& right) {
    if (&right != this) {
        if (size != right.size) {
            delete[] ptr; 
            size = right.size; 
            ptr = new int[size]; 
        }
        for (size_t i{0}; i < size; ++i) {
            ptr[i] = right.ptr[i];
        }
    }
    return *this; 
}

bool Array::operator==(const Array& right) const {
    if (size != right.size) {
        return false;
    }
    for (size_t i{0}; i < size; ++i) {
        if (ptr[i] != right.ptr[i]) {
            return false;
        }
    }
    return true; 
}

// overloaded subscript operator for non-const Arrays;
// reference return creates a modifiable lvalue
int& Array::operator[](int subscript) {
// check for subscript out-of-range error
if (subscript < 0 || subscript >= size) {
throw out_of_range{"Subscript out of range"};
}
return ptr[subscript]; // reference return
}
// overloaded subscript operator for const Arrays
// const reference return creates an rvalue
int Array::operator[](int subscript) const {
// check for subscript out-of-range error
if (subscript < 0 || subscript >= size) {
throw out_of_range{"Subscript out of range"};
}
return ptr[subscript]; // returns copy of this element
}
// overloaded input operator for class Array;
// inputs values for entire Array
istream& operator>>(istream& input, Array& a) {
for (size_t i{0}; i < a.size; ++i) {
input >> a.ptr[i];
}
return input; // enables cin >> x >> y;
}
// overloaded output operator for class Array
ostream& operator<<(ostream& output, const Array& a) {
// output private ptr-based array
for (size_t i{0}; i < a.size; ++i) {
output << a.ptr[i] << " ";
}
output << endl;
return output; // enables cout << x << y;
} 