#define _CRT_SECURE_NO_WARNINGS 1
//代码注释
//尽量使用const

#include "WorkManager.h"
#include "Worker.h"
#include "Employee.h"
#include "Boss.h"
#include "Manager.h"
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	
	// 必须先设置这个，获取全局的这个locale值
	//locale::global(locale("en_US.UTF-8"));

	/*Worker* worker = NULL;
	worker = new Employee(1, "张三", 1);
	worker->showInfo();
	delete worker;
	worker = new Manager(2, "李四", 2);
	worker->showInfo();
	delete worker;
	worker = new Boss(3, "王五", 3);
	worker->showInfo();
	delete worker;*/


	WorkerManager tmp;
	int choice;

	while (true)
	{

		tmp.Show_Menu();
		cout << "请输入你的选择: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:
			tmp.ExitSystem();
			break;
		case 1:
			tmp.Add_Emp();
			break;
		case 2:
			tmp.Show_Emp();
			break;
		case 3:
			tmp.Del_Emp();
			break;
		
		case 4:
			tmp.Mod_Emp();
			break;
		case 5:
			tmp.Find_Emp();
			break;
		case 6:
			tmp.Sort_Emp();
			break;
		case 7:
			tmp.Clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}
	
	return 0;
}
