#include <iostream>
#include <include/Database.h>

using namespace std;
using namespace Records;

int main(int argc, char** argv)
{
    Database myDB;

    Employee& emp1 = myDB.addEmployee("Marcus", "Valeri");
    emp1.fire();

    Employee& emp2 = myDB.addEmployee("Michell", "Malori");
    emp2.setSalary(50000);

    Employee& emp3 = myDB.addEmployee("Nolando", "Solano");
    emp3.setSalary(20000);
    emp3.promote();

    cout << "All employees: " << endl;
    cout << endl;
    myDB.displayAll();

    cout << endl;
    cout << "Current Employees: " << endl;
    cout << endl;
    myDB.displayCurrent();

    cout << endl;
    cout << "Former employees: " << endl;
    cout << endl;
    myDB.displayFormer();
}