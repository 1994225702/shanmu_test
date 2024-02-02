#define _CRT_SECURE_NO_WARNINGS 1
//代码注释
//尽量使用const

#include "Employee.h"

Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}


void Employee::showInfo()
{
	cout << "职工编号:" << this->m_Id << endl;
	cout << "职工姓名:" << this->m_Name << endl;
	cout << "职工岗位:" <<this->getDeptName()<<endl;
	cout << "岗位职责:dddd" << endl;
	cout << endl;

}

string Employee::getDeptName()
{
	return string("员工");
}


