//David Archer
//Employee 
//employeeTest.cpp file

#include "employee.h"

//Default constructor
Employee::Employee()
{
	name = "";
	idNumber = "";
	department = "";
	position = "";
	yearsWorked = 0;
}

Employee::Employee(string empname, string id, string dep, string pos, int years)
{
	name = empname;
	idNumber = id;
	department = dep;
	position = pos;
	assert(years >= 0);
	yearsWorked = years;
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
void Employee::setEmpYrs(int years) {
	assert(years >= 0);
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