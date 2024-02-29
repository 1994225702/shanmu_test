#pragma once
#include "Identity.h"

#include "Student.h"
#include"Teacher.h"
/*

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!!!!!!!!!  重大       事故
！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
!!!!!!!!!!!!!!!!!!!!!!!血的教训！！！！！！！！！！！！！！！！！！！！！！！！！！！
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!!!!!!!!!!!!!平行派生类一定要分开相互包含 ###############################################
#########################################################################################
###############不能偷懒 把派生类头文件包在基类头文件中
###############################重大事故！！！！！！！！！！！！！！1
*/







//管理员
class Administrator :public Identity
{
public:

	//默认构造
	Administrator();
	//有参构造
	Administrator(string name, string password);
	//初始化机房信息(后期要修改信息，最好封装函数)
	void InitComputerroom();
	//操作菜单
	virtual void operMenu();
	//添加账号
	void AddPerson();
	//查看账号
	void showPerson();
	//查看机房信息
	void showComputer();
	//清空预约记录
	void clearFile();
	//初始化容器
	void InitVector();
	//检测重复 参数1ID 参数2检测类型
	bool checkRepeat(int id, int type);
	//学生容器
	vector<Student>vstu;
	//教师容器
	vector<Teacher>vtea;
	//机房容器
	vector<ComputerRoom>vcom;
	
};