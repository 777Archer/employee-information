//David Archer
//Employee
//employee.h file

#pragma once
#include<iostream>
#include<assert.h>

using namespace std;

//Employee class
class Employee
{
//Member variables
private:
	string name;
	string idNumber;
	string department;
	string position;
	int yearsWorked;

//Member function prototypes
public:
	Employee();
	Employee(string ename, string id, string dep, string pos, int years);
	void setEmpName(string ename);
	void setEmpId(string id);
	void setEmpDep(string dep);
	void setEmpPos(string pos);
	void setEmpYrs(int years);
	string getEmpName();
	string getEmpId();
	string getEmpDep();
	string getEmpPos();
	int getEmpYrs();
};
