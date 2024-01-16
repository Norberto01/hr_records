#include <iostream>
#include "include/Employee.h"

using namespace std;
using namespace Records;

int main(int argc, char** argv)
{
    cout << "Testing the Employee class." << endl;

    Employee emp;

    emp.setFirstName("Mario");
    emp.setLastName("Brother");
    emp.setEmployeeNumber(43);
    emp.setSalary(45000);
    emp.promote();
    emp.promote(42);
    emp.hire();
    emp.display();

    return 0;
}