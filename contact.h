#define MAX_NAME 20
#define MAX_SEX 8
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000

#include <stdio.h>
#include <string.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};


struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};


//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];//存放一个信息
	int size;//记录当前已经有的元素个数

};

//声明函数
void InitContact(struct Contact* ps);//初始化通讯录

void AddContact(struct Contact* ps);//增加通讯录信息

void ShowContact(const struct Contact* ps);//打印通讯录

void DelContact(struct Contact* ps);//删除指定联系人

void SearchContact(struct Contact* ps);//查找指定联系人

void ModifyContact(struct Contact* ps);//修改指定联系人信息

void SortContact(struct Contact* ps);//对通讯录排序


