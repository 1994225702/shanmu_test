#define _CRT_SECURE_NO_WARNINGS 1
//代码注释
//尽量使用const

#include <iostream>
using namespace std;
#include <windows.h>
//cout 输出中文


int main()
{
	SetConsoleOutputCP(65001);
	cout << "\aoperation \" HackerHype \" is now actived!\n";
	cout << "\aEnter your code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou enter " << code << "...\n";
	cout << "\aCode verified,proceed Plan Z3\n";
	return 0;
}