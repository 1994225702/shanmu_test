#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <stdlib.h>
typedef struct NODE
{
	int id;
	struct NODE* next;
}NODE;

NODE* create(int n)
{
	NODE* p = NULL, * head = NULL, * tail = NULL;
	int i;
	for (i = 1; i <= n; i++)
	{
		p = (NODE*)malloc(sizeof(NODE));
		p->id = i;
		p->next = NULL;
		if (head == NULL) head = p;
		else tail->next = p;
		tail = p;

	}
	return head;
}

int main()
{
	int n, i;
	scanf("%d", &n);

	NODE* head = create(n);
	NODE* tmp = head,*pre = NULL;
	for (i = 1;; i++)
	{
		if(i>1) 
		{
			pre = tmp;
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			tmp = head;
		}
		if (i % 3 == 0)
		{
			if (tmp == head)
			{
				head = head->next;
				free(tmp);
			}
			else if (tmp->next = NULL)
			{
				free(tmp);
				tmp = head;
			}
			else
			{
				pre->next = tmp->next;
				free(tmp);
			}
		}
		
		if (head->next == NULL)
		{
			printf("%d", head->id);
			return 0;
		}
	}
	
	return 0;
}
























