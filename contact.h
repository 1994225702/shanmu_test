#define MAX_NAME 20
#define MAX_SEX 8
#define MAX_TELE 12
#define MAX_ADDR 30
//#define MAX 1000
#define DEFAULT_SZ 3
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
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
	struct PeoInfo *data;//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
};

//��������
void InitContact(struct Contact* ps);//��ʼ��ͨѶ¼

void AddContact(struct Contact* ps);//����ͨѶ¼��Ϣ

void ShowContact(const struct Contact* ps);//��ӡͨѶ¼

void DelContact(struct Contact* ps);//ɾ��ָ����ϵ��

void SearchContact(struct Contact* ps);//����ָ����ϵ��

void ModifyContact(struct Contact* ps);//�޸�ָ����ϵ����Ϣ

void SortContact(struct Contact* ps);//��ͨѶ¼����

void DestroyContact(struct Contact* ps);//����ͨѶ¼

void SaveContact(struct Contact* ps);//����ͨѶ¼

void LoadContact(struct Contact* ps);//����ͨѶ¼
