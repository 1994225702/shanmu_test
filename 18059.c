/*
18059 ѧ���ɼ���
ʱ������:1000MS  ���볤������:10KB
�ύ����:0 ͨ������:0

����: �����   ����: G++;GCC;VC
Description
����10��ѧ����ÿ��ѧ�������ݰ���ѧ�š�������3�ſεĳɼ�������ṹ�����ͱ�ʾѧ�����ͣ�����10��ѧ�������ݣ�
����ÿ��ѧ����ƽ���ɼ�����ƽ���ɼ��ɸߵ����������ѧ����Ϣ���ɼ���ͬʱ��ѧ�Ŵ�С���������




�����ʽ
10��ѧ����Ϣ��ÿ��һ��ѧ��


�����ʽ
����


��������
1 aaa 50 60 70
2 bbb 50 50 50
3 ccc 60 70 80
4 ddd 40 40 40
5 eee 70 80 90
6 fff 30 30 30
7 ggg 80 90 100
8 hhh 20 20 20
9 iii 100 100 100
10 jjj 10 10 10



�������
9 iii 100 100 100
7 ggg 80 90 100
5 eee 70 80 90
3 ccc 60 70 80
1 aaa 50 60 70
2 bbb 50 50 50
4 ddd 40 40 40
6 fff 30 30 30
8 hhh 20 20 20
10 jjj 10 10 10
*/

/*
#include <stdio.h>

struct data
{
    int num;
    char name[20];
    double score[3];
    double aver;
};

int main()
{
    int i,j;
    struct data stu[10],tmp;
    for(i=0; i<10; i++)
    {
        scanf("%d%s%lf%lf%lf",&stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].aver=(stu[i].score[0]+ stu[i].score[1]+stu[i].score[2])/3;
    }
    for(i=0; i<9; i++)
        for(j=0; j<9-i; j++)
        {
            if(stu[j].aver<stu[j+1].aver)
            {
                tmp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=tmp;
            }
            else if(fabs(stu[j].aver-stu[j+1].aver)<1e-6)
            {
                if(stu[j].num>stu[j+1].num)
                {
                    tmp=stu[j];
                    stu[j]=stu[j+1];
                    stu[j+1]=tmp;
                }

            }

        }
    for(i=0; i<10; i++)
    {
        printf("%d %s %.0lf %.0lf %.0lf\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
    }
    return 0;
}
*/
