#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main() {
    CommissionEmployee commissionEmployee{
        "Sue", "Jones", "222-22-2222", 10000, .06};

    BasePlusCommissionEmployee basePlusCommissionEmployee{
        "Bob", "Lewis", "333-33-3333", 5000, .04, 300};

    cout << fixed << setprecision(2); // set floating-point formatting

    cout << "DISPLAY BASE-CLASS AND DERIVED-CLASS OBJECTS:\n"
        << commissionEmployee.toString() // base-class toString
        << "\n\n"
        << basePlusCommissionEmployee.toString(); // derived-class toString

    CommissionEmployee* commissionEmployeePtr{&commissionEmployee};

    cout << "\n\nCALLING TOSTRING WITH BASE-CLASS POINTER TO "
        << "\nBASE-CLASS OBJECT INVOKES BASE-CLASS TOSTRING FUNCTION:\n"
        << commissionEmployeePtr->toString(); // base version

    BasePlusCommissionEmployee* basePlusCommissionEmployeePtr{
        &basePlusCommissionEmployee}; // natural

    cout << "\n\nCALLING TOSTRING WITH DERIVED-CLASS POINTER TO "
        << "\nDERIVED-CLASS OBJECT INVOKES DERIVED-CLASS "
        << "TOSTRING FUNCTION:\n"
        << basePlusCommissionEmployeePtr->toString(); // derived version

    commissionEmployeePtr = &basePlusCommissionEmployee;

    cout << "\n\nCALLING TOSTRING WITH BASE-CLASS POINTER TO "
        << "DERIVED-CLASS OBJECT\nINVOKES BASE-CLASS TOSTRING "
        << "FUNCTION ON THAT DERIVED-CLASS OBJECT:\n"
        << commissionEmployeePtr->toString() // base version
        << endl;
    
    return 0;
}
