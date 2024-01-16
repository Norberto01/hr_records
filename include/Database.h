#include <iostream>
#include "include/Employee.h"

using namespace std;

namespace Records 
{
    const int kMaxEmployees = 100;
    const int kFirstEmployeeNumber = 1000;

    class Database
    {
        public:
            Database();
            ~Database();

            Employee& addEmployee(string inFirstName, string inLastName);
            Employee& getEmployee(int inEmployeeNumber);
            Employee& getEmployee(string inFirstName, string inLastName);
            void      displayAll();
            void      displayCurrent();
            void      displayFormer();
        protected:
            Employee  mEmployees[kMaxEmployees];
            int       mNextSlot;
            int       mNextEmployeeNumber;
    };
};