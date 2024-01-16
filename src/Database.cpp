#include <iostream>
#include <stdexcept>

#include "include/Database.h"

using namespace std;

namespace Records 
{
    Database::Database()
    {
        mNextSlot = 0;
        mNextEmployeeNumber = kFirstEmployeeNumber;
    }

    Database::~Database(){};

    Employee& Database::addEmployee(string inFirstName, string inLastName)
    {
        if (mNextSlot >= kMaxEmployees){
            cerr << "There is no more room to add the new Employee!" << endl;
            throw exception();
        }

        Employee& theEmployee = mEmployees[mNextSlot++];
        theEmployee.setFirstName(inFirstName);
        theEmployee.setLastName(inLastName);
        theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
        theEmployee.hire();

        return theEmployee;
    }

    Employee& Database::getEmployee(int inEmployeeNumber)
    {
        for (int i = 0; i < mNextSlot; i++) {
            if (mEmployees[i].getEmployeeNumber() == inEmployeeNumber) {
                return mEmployees[i];
            }
        }

        cerr << "No employee with employee number " << inEmployeeNumber << endl;
        throw exception();
    }
    
    Employee& Database::getEmployee(string inFirstName, string inLastName)
    {
        for (int i = 0; i < mNextSlot; i++) {
            if (mEmployees[i].getFirstName() == inFirstName && mEmployees[i].getLastName() == inLastName) {
                return mEmployees[i];
            }
        }

        cerr << "No match with name " << inFirstName << " " << inLastName << endl;
        throw exception();
    }

}







