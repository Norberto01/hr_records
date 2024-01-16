#include <iostream>

using namespace std;

namespace Records
{
    const int kDefaultStartingSalary = 30000;

    class Employee 
    {
        public: 
            Employee();
            void promote(int inRaiseAmount = 1000);
            void demote(int inDemeritAmount = 1000);
            void hire();    // Hires or rehires the employee
            void fire();    // Dismisses the employee
            void display(); // Outputs employee info to the console

            // Accessors and setters
            void setFirstName(string inFirstName);
            string getFirstName();
            void setLastName(string inLastName);
            string getLastName();
            void setEmployeeNumber(int inEmployeeNumber);
            int getEmployeeNumber();
            void setSalary(int inNewSalary);
            int getSalary();
            bool getIsHired();
        
        private:
            string mFirstName;
            string mLastName;
            int mEmployeeNumber;
            int mSalary;
            bool fHired;           

    };
};
