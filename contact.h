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


//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���

};

//��������
void InitContact(struct Contact* ps);//��ʼ��ͨѶ¼

void AddContact(struct Contact* ps);//����ͨѶ¼��Ϣ

void ShowContact(const struct Contact* ps);//��ӡͨѶ¼

void DelContact(struct Contact* ps);//ɾ��ָ����ϵ��

void SearchContact(struct Contact* ps);//����ָ����ϵ��

void ModifyContact(struct Contact* ps);//�޸�ָ����ϵ����Ϣ

void SortContact(struct Contact* ps);//��ͨѶ¼����


