//David Archer
//Employee 
//employee.cpp file

#include<string>
#include<iostream>
#include <iomanip>
#include "employee.h"

using namespace std;

int main()
{
    Employee emp[3];
    //Employee objects
    Employee emp1("Jenny Jacobs", "JJ8990 ", "Accounting " , "President  ", 15);
    Employee emp2("Myron Smith", "MS7571", "IT        ", "Programmer", 5);
    Employee emp3("Chris Raines", " CR6873 ", "Manufacturing", "Engineer   ", 30);
    emp[0] = emp1;
    emp[1] = emp2;
    emp[2] = emp3;

    cout << "Name               ID Number         Department        Position         "
        "Years Worked\n----               ---------        -----------       "
        "---------         ------------\n";
    for (int num1 = 0; num1 < 3; num1++)
    {
        cout << emp[num1].getEmpName() << setw(14) << setfill(' ') << emp[num1].getEmpId() 
             << setw(21.1) << setfill(' ') << emp[num1].getEmpDep() << setw(19) << setfill(' ') 
             << emp[num1].getEmpPos() << setw(8) << setfill(' ') << emp[num1].getEmpYrs() << endl;
    }
    return 0;
}