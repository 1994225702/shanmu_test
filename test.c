#define _CRT_SECURE_NO_WARNINGS 1
//########################################################
//###########    指针不初始化一定要置于空    #############
//########################################################
#include <stdlib.h>
#include <stdio.h>
//#define LEN sizeof(struct student)
#define LEN sizeof(struct DATA)
//#define DISK 30

struct DATA
{
	long num;
	struct DATA* next;
};

struct DATA* create(int n)
{
	struct DATA* head = NULL, * p1 = NULL, * p2 = NULL;
	int i;
	for (i = 1; i <= n; i++)
	{
		p1 = (struct DATA*)malloc(LEN);
		scanf("%ld", &p1->num);
		p1->next = NULL;
		if (i == 1) head = p1;
		else p2->next = p1;
		p2 = p1;
	}
	return(head);
}

struct DATA* merge(struct DATA* head, struct DATA* head2)
{
	if (head == NULL) return head2;
	struct DATA* p = head;
	while (p->next != NULL)
	{
		p=p->next;
	}
	p->next = head2;
	return head;
}

struct DATA* insert(struct DATA* head, struct DATA* d)
{
	if (head == NULL) return d;
	else if (head->num > d->num)
	{
		d->next = head;
		return d;
	}
	struct DATA* p = head,*pre = NULL;
	while (p->num < d->num && p != NULL)
	{
		pre = p;
		p = p->next;
	}
	d->next = pre->next;
	pre->next = d;
	return head;
}

struct DATA* sort(struct DATA* head)
{
	struct DATA* p, * p2,*head2;
	p2 = NULL;
	head2 = NULL;
	p = head;
	if (head = NULL) return NULL;
	while (p != NULL)
	{
		p2 = p->next;
		p->next = NULL;
		head2 = insert(head2, p);
		p = p2;

	}
	head = head2;
	return head;
}

void print(struct DATA* head)
{
	struct DATA* p;
	p = head;
	while (p != NULL)
	{
		printf("%ld", p->num);
		p = p->next;
		printf("\n");
	}
}

main()
{
	struct DATA* head, * head2;
	int n;
	//long del_num;
	scanf("%d", &n);
	head = create(n);
	scanf("%d", &n);
	head2 = create(n);
	head = merge(head, head2);
	head = sort(head);
	print(head);
}




//struct student
//{
//	long num;
//	int score;
//	struct student* next;
//};
//struct student* create(int n)
//{
//	struct student* head = NULL, * p1 = NULL, * p2 = NULL;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		p1 = (struct student*)malloc(LEN);
//		scanf("%ld", &p1->num);
//		scanf("%d", &p1->score);
//		p1->next = NULL;
//		if (i == 1) head = p1;
//		else p2->next = p1;
//		p2 = p1;
//	}
//	return (head);
//}

//struct student* merge(struct student* head,struct student* head2)
//{
//	if (head == NULL) return head2;
//	struct student* p = head;
//	while (p->next != NULL) p = p->next;
//	p->next = head2;
//	return head;
//	/*///*else
//	{//写法太低级
//		struct student* p,*pre=NULL;
//		p = head;
//		while (p != NULL)
//		{
//			pre = p;
//			p = p->next;
//		}
//		pre->next = head2;
//		return head;
//	}*///
//}
//

//struct student* insert(struct student* head, struct student* stud)
//{//完成插入链表结点的函数(按学号顺序)，并调试通过、提交
//	struct student* pre = NULL, * p = head;
//	if (head == NULL) return stud;			//情况1--头指针为空，返回插入的结构体指针
//	else if (stud->num < p->num)			//情况2--结构体指针插入链表前
//	{
//		stud->next = head;
//		return stud;
//	}
//	while (p->num < stud->num && p != NULL) //情况3--结构体指针插入链表中间或尾指针
//	{
//		pre = p;
//		p = p->next;
//	}
//	stud->next = pre->next;
//	pre->next = stud;
//	return head;

	//标程

	/*struct student* p0, * p1, * p2;
	p1 = head;  p0 = stud;
	if (head == NULL)
	{
		head = p0;
	}
	else
	{
		while ((p0->num > p1->num) && (p1->next != NULL))
		{
			p2 = p1;     p1 = p1->next;
		}
		if (p0->num <= p1->num)
		{
			if (head == p1) head = p0;
			else p2->next = p0;
			p0->next = p1;
		}
		else { p1->next = p0; }
	}
	return(head);*/

//}

//
//struct student* reverse(struct student* head)
//{
//
//}


//struct student* sort(struct student* head)
//{//标程
//	struct student* head2 = NULL;
//	if (head == NULL) return NULL;
//	struct student* p = head, * p2;
//	while (p != NULL)
//	{
//		p2 = p->next;							//
//		p->next = NULL;							//将p结点分离
//		head2 = insert(head2, p);				//insert函数插入结点自动检查排序
//		p = p2;
//	}
//	return head2;







	/*struct student* p=head ;
	int i, j,temp, n = 0;
	long tmp;
	while ((p = p->next) != NULL)
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		p = head;
		for (j = 0; j < n - i; j++)
		{
			if (p->num > (p->next)->num)
			{
				tmp = p->num;
				p->num = (p->next)->num;
				(p->next)->num = tmp;
				temp = p->score;
				p->score = (p->next)->score;
				(p->next)->score = temp;
			}
			p = p->next;
		}
	}
	return head;*/
//}


//struct student* sort(struct student* head)
//{
//	struct student* p = head,*tmp;
//	int i, j, n=0;
//	while ((p = p->next) != NULL)
//	{
//		n++;
//	}
//	for (i = 0; i < n; i++)
//	{
//		p = head;
//		for (j = 0; j < n - i; j++)
//		{
//			if (head->num > (head->next)->num)
//			{
//				tmp = head->next;
//				head->next = tmp->next;
//				free(head->next);
//				tmp->next = head;
//				head = tmp;
//			}
//			struct student* pre = p;
//			if(p->num > (p->next)->num)
//			{
//
//				tmp->next = (p->next)->next;
//				p->next = (p->next)->next;
//
//			}
//		}
//	}
//}





//void print(struct student* head)
//{
//	struct student* p;
//	p = head;
//	while (p != NULL)
//	{
//		printf("%8ld%8d", p->num, p->score);
//		p = p->next;
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	struct student* head, * stu=NULL;
//	int n;
//	scanf("%d", &n);
//	head = create(n);
//	print(head);
//	head = sort(head);
//	//head = reverse(head);
//	print(head);
//}



//int main()
//{
//	struct student* head, * stu;
//	int n;
//	scanf("%d", &n);
//	head = create(n);
//	print(head);
//	stu = (struct student*)malloc(LEN);
//	scanf("%ld", &stu->num);
//	scanf("%d", &stu->score);
//	stu->next = NULL;
//	head = insert(head, stu);
//	print(head);
//}

//
//int main()
//{
//	struct student* head, * head2;
//	int n;
//	//long del_num;
//	scanf("%d", &n);
//	head = create(n);
//	print(head);
//	scanf("%d", &n);
//	head2 = create(n);
//	print(head2);
//	head = merge(head, head2);
//	print(head);
//}
















//struct data
//{
//	int num;
//	char name[10];
//	double score[3];
//	//##double average;
//};
//
//int main()
//{//输入10个学生，每个学生的数据包括学号、姓名、3门课的成绩。定义结构体类型表示学生类型，输入10个学生的数据，
//	//计算每个学生的平均成绩。按平均成绩由高到低输出所有学生信息，成绩相同时按学号从小到大输出。
//	int i, j;
//	struct data stu[10], tmp;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d%s%lf%lf%lf", &stu[i].num, stu[i].name, stu[i].score, stu[i].score + 1, stu[i].score + 2);
//		//## stu[i].average=stu[i].score[0]+stu[i].score[1]+stu[i].score[2];
//	}
//	for(i=0;i<9;i++)
//		for (j = 0; j < 9 - i; j++)
//		{
//			//##if(stu[j].average<stu[j+1].average)
//			if ((stu[j].score[0] + stu[j].score[1] + stu[j].score[2]) < (stu[j + 1].score[0] + stu[j + 1].score[1] + stu[j + 1].score[2])
//				|| (stu[j].score[0] + stu[j].score[1] + stu[j].score[2]) == (stu[j + 1].score[0] + stu[j + 1].score[1] + stu[j + 1].score[2])
//				&& stu[j].num > stu[j + 1].num)
//			{
//				tmp = stu[j];
//				stu[j] = stu[j + 1];
//				stu[j + 1] = tmp;
//			}
//
//		}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d %s %.0lf %.0lf %.0lf\n",stu[i].num,stu[i].name, stu[i].score[0],stu[i].score[1],stu[i].score[2]);
//	}
//	return 0;
//}






//struct candidate	//定义候选人的结构体类型
//{
//	char name[20];	//姓名
//	int count;		//得票数
//};
//
//int main()
//{
//	//定义结构体并初始化
//	struct candidate cand[3] = { {"zhang",0},{"wang",0},{"sun",0} };
//	int i, j, n;
//	char name[20];
//	printf("输入投票人数：");
//	scanf("%d", &n);
//	printf("输入全部[%d]个投票人选举的候选人名：\n", n);
//	//外层循环输入n个投票情况
//	for (i = 1; i <= n; i++)
//	{
//		printf("第[%d]个投票人选举的人名：", i);
//		scanf("%s", name);
//		//下面循环检查本次投票是投给哪个候选人
//		for (j = 0; j < 3; j++)
//		{
//			if (strcmp(cand[j].name, name) == 0)
//				cand[j].count++;//判断到候选人，该候选人票数+1
//		}
//	}
//	printf("候选人得票情况如下:\n");
//	for (i = 0; i < 3; i++)
//		printf("%-10s:%2d\n", cand[i].name, cand[i].count);
//	return 0;
//}


//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)//递归的终止条件
//		printf("%c - - - > %c\n", a, c);
//	else
//	{
//		hanoi(n - 1, a, c, b);//递归移动n-1个盘子
//		printf("%c - - - > %c\n", a, c);//移动到剩下的一个盘子
//		hanoi(n - 1, b, a, c);//递归移动n-1个盘子
//	}
//}
//
//
//int main()
//{//汉诺塔问题
//	printf("移动%d个盘子的过程:\n",DISK);
//	hanoi(DISK, 'A', 'B', 'C');
//	return 0;
//}







//void find(int a[][4])
//{
//	int(*p)[4], * q, * max;
//	for (p = a;p<a+4;p++)
//	{
//		max = *p;
//		for (q = max+1;q<*p+4;q++)
//		{
//			if (*q > *max)
//				max = q;
//		}
//		printf("%d\n", *max);
//	}
//}
//
//int main()
//{//输入一个4*4的二维整型数组，使用指针变量查找并输出二维整型数组中每一行的最大值
//	int a[4][4], i, j;
//	for (i = 0; i < 4; i++)
//		for (j = 0; j < 4; j++)
//			scanf("%d", &a[i][j]);
//	find(a);
//	return 0;
//}



















//void removeSpace(char* s)
//{
//	//int i = 0, j = 0;//标程!!!!!!!!!!!!!!!!!!!!!!!!!
//	//while (s[j] != '\0')//######s[j]==*(s+j)########
//	//{
//	//	if (s[j] == ' ') j++;
//	//	else
//	//		s[i++] = s[j++];//虚拟同轴传递
//	//}
//	//s[i] = '\0';
//
//
//
//
//	//普通算法
//
//	/*int i, j;
//	char tmp;
//	for (i = 0; *(s + i) != '\0'; i++)
//	{
//		if (*(s + i)==' ')
//			for (j = i + 1; *(s + j) != '\0'; j++)
//			{	
//				if (*(s + j) != ' ')
//				{
//					tmp = *(s + j);
//					*(s + j) = ' ';
//					*(s + i) =tmp;
//					 
//					break;
//				}
//			}
//	}*/
//}
//
//int main()
//{//用指针方法解决，输入一个字符串，删除字符串中所有空格后，输出字符串
//	char s[81];
//	gets(s);
//	removeSpace(s);
//	printf("%s", s);
//	return 0;
//}