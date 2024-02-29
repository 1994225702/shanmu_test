#define _CRT_SECURE_NO_WARNINGS 1
//代码注释
//尽量使用const

#include "Administrator.h"
#include "GlobalFile.h"

//打印学生信息
void printStu(Student& s)
{
	cout << "学号:" << s.id << " 姓名:" << s.name << " 密码:" << s.password << endl;
}
//打印教师信息
void printTea(Teacher& t)
{
	cout << "职工编号:" << t.id << " 姓名:" << t.name << " 密码:" << t.password << endl;
}

//默认构造
Administrator::Administrator()
{

}
//有参构造
Administrator::Administrator(string name, string password)
{
	this->name = name;
	this->password = password;

	//初始化信息 获取所有学生和老师的信息
	this->InitVector();

	this->InitComputerroom();
	
}

//初始化机房信息(后期要修改信息，最好封装函数)
void Administrator::InitComputerroom()
{
	ifstream ifs(COMPUTER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在!" << endl;
		ifs.close();
		return;
	}



	ComputerRoom com;
	while (ifs >> com.id  && ifs >> com.capacity)
	{
		vcom.push_back(com);
	}
	
	ifs.close();
	cout << "机房的数量为:" << vcom.size() << endl;
}

//操作菜单
void Administrator::operMenu()
{
	cout << "================= 欢迎管理员<"<<this->name<<">登录! "<<" ================ = " << endl;
	cout << "\t ---------------------------------\n";
	cout << "\t|                                 |\n";
	cout << "\t|            1.添加账号           |\n";
	cout << "\t|                                 |\n";
	cout << "\t|            2.查看账号           |\n";
	cout << "\t|                                 |\n";
	cout << "\t|            3.查看机房           |\n";
	cout << "\t|                                 |\n";
	cout << "\t|            4.清空预约           |\n";
	cout << "\t|                                 |\n";
	cout << "\t|            0.注销登录           |\n";
	cout << "\t|                                 |\n";
	cout << "\t ---------------------------------\n";
	cout << "请选择您的操作:  ";
}
//添加账号
void Administrator::AddPerson()
{
	//
	cout << "1.添加学生" << endl;
	cout << "2.添加教师" << endl;
	cout << "请输入添加账号类型:";

	string filename;
	string errortip;

	ofstream ofs;

	int select;
	string tmp;
	while (true)
	{
		cin >> tmp;
		select = atoi(tmp.c_str());
		if (select == 1)
		{
			//添加学生
			filename = STUDENT_FILE;
			cout << "请输入学号:";
			errortip = "学生重复，请重新输入";
			break;
		}
		else if (select == 2)
		{
			filename = TEACHER_FILE;
			cout << "请输入职工编号:";
			errortip = "教师重复，请重新输入";
			break;
		}
		else
		{
			cout << "输入错误,请重新输入" << endl;
			system("pause");
			//system("cls");

		}
	}
	ofs.open(filename, ios::out | ios::app);
	int id;
	string name;
	string password;

	while (true)
	{
		cin >> tmp;
		id = atoi(tmp.c_str());
		bool ret = checkRepeat(id, select);
		if (ret)
		{
			cout << errortip << endl;
		}
		else
			break;

		
	}


	cout << "请输入用户名:";
	cin >> name;
	cout << "请输入密码:";
	cin >> password;


	ofs << id << ' ' << name << ' ' << password << endl;

	cout << "添加成功" << endl;
	system("pause");
	system("cls");

	ofs.close();

	//初始化容器
	this->InitVector();
	this->InitComputerroom();


}
//查看账号
void Administrator::showPerson()
{
	cout << "1.查看所有学生" << endl;
	cout << "2.查看所有教师" << endl;
	cout << "请选择查看内容:";

	int select;
	string tmp;
	while (true)
	{
		cin >> tmp;
		select = atoi(tmp.c_str());
		if (select == 1)
		{
			//查看学生
			cout << "所有学生信息如下:" << endl;
			if (vstu.size() == 0)
				cout << "暂无学生信息" << endl;
			else
			for_each(vstu.begin(), vstu.end(), printStu);
			break;
		}
		else if (select == 2)
		{
			//查看教师
			cout << "所有教师信息如下:" << endl;
			if (vtea.size() == 0)
				cout << "暂无教师信息" << endl;
			else
			for_each(vtea.begin(), vtea.end(), printTea);
			break;

		}
		else
		{
			cout << "输入错误,请重新输入" << endl;
			/*system("pause");
			system("cls");
			return;*/
		}
	}
	system("pause");
	system("cls");

	//初始化容器
	this->InitVector();
	this->InitComputerroom();
}
//查看机房信息
void Administrator::showComputer()
{
	cout << "机房的信息如下:" << endl;
	if (vcom.size() == 0)
		cout << "暂无机房信息" << endl;
	else
	for (vector<ComputerRoom>::iterator it = vcom.begin(); it != vcom.end(); it++)
	{
		cout << "机房编号:" << it->id << " 机房最大容量:" << it->capacity << endl;
	}
	system("pause");
	system("cls");

	//初始化容器
	this->InitVector();
	this->InitComputerroom();
}
//清空预约记录
void Administrator::clearFile()
{
	cout << "确定清空?" << endl;
	cout << "1.确定" << endl;
	cout << "else.我再想想" << endl;
	int select;
	string tmp;

	cin >> tmp;
	select = atoi(tmp.c_str());
	if(select==1)
	{
		ofstream ofs(ORDER_FILE, ios::trunc);
		ofs.close();

		cout << "清空成功!" << endl;
		
	}
	system("pause");
	system("cls");

	//初始化容器
	this->InitVector();
	this->InitComputerroom();
}

//初始化容器
void Administrator::InitVector()
{
	//确保容器为空
	vstu.clear();
	vtea.clear();
	vcom.clear();
	//读取学生信息
	ifstream  ifs(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件读取失败" << endl;
		return;
	}
	Student s;
	while (ifs >> s.id && ifs >> s.name && ifs >> s.password)
	{
		vstu.push_back(s);
	}
	cout << "当前学生数量为:" << vstu.size() << endl;
	ifs.close();

	//读取教师信息
	ifs.open(TEACHER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件读取失败" << endl;
		return;
	}
	Teacher t;
	while (ifs >> t.id && ifs >> t.name && ifs >> t.password)
	{
		vtea.push_back(t);
	}
	cout << "当前教师数量为:" << vtea.size() << endl;
	ifs.close();
}
//检测重复 参数1ID 参数2检测类型
bool Administrator::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		//检测学生
		for (vector<Student>::iterator it = vstu.begin(); it != vstu.end(); it++)
		{
			if (it->id == id)
			{
				return true;
			}
		}
		return false;
	}
	else if (type == 2)
	{
		//检测教师
		for (vector<Teacher>::iterator it = vtea.begin(); it != vtea.end(); it++)
		{
			if (it->id == id)
			{
				return true;
			}
		}
		return false;
	}
}