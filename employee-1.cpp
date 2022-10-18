//David Archer
//Employee 
//employeeTest.cpp file

#include <iomanip>
#include <string>
#include <iostream>
#include "employee.h"
#include <cassert>

using namespace std;

/*Constructor 1*/

Employee::Employee(string empname, int id)
{
	name = empname;
	idNumber = id;
	department = "";
	position = "";
}

/*Constructor 2*/
Employee::Employee(string empname, string id, string dep, string pos, int years)
{
	name = empname;
	idNumber = id;
	department = dep;
	position = pos;
	years = 0;
	yearsWorked = years;
}

//Default constructor
Employee::Employee()
{
	name = "";
	idNumber = "";
	department = "";
	position = "";
	yearsWorked = 0;
}

void Employee::setEmpName(string empname)
{
	name = empname;
}
void Employee::setEmpId(string id)
{
	idNumber = id;
}
void Employee::setEmpDep(string dep)
{
	department = dep;
}
void Employee::setEmpPos(string pos)
{
	position = pos;
}
void Employee::setEmpYrs(int years) 
{
	years = 0;
	yearsWorked = years;
}

string Employee::getEmpName()
{
	return name;
}
string Employee::getEmpId()
{
	return idNumber;
}
string Employee::getEmpDep()
{
	return department;
}
string Employee::getEmpPos()
{
	return position;
}
int Employee::getEmpYrs()
{
	return yearsWorked;
}