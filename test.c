#define _CRT_SECURE_NO_WARNINGS 1

//####return value (EOF)-------fclose  / fgetc  / fputc  / fputs  / 
               //  (NULL)------fopen   / fgets    

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
//int main(int argc, char* argv[])
//{//�����в���
//	int a, b, sum;
//	if (argc != 3)
//	{
//		printf("Error!Usage: add 1 2\n");
//		exit(0);
//	}
//	a = atoi(argv[1]);
//	b = atoi(argv[2]);
//	sum = a + b;
//	printf("%d + %d = %d\n", a, b,sum);
//	return 0;
//}
//
////�ļ��򿪲���
//FILE* fp;
//fp = fopen("course.txt", "r");
//if (fp == NULL)
//{
//	printf("Can't open the file! \n");
//	exit(0);
//}
//fclose(fp);	//�ر��ļ�----------ʧ�ܷ���EOF--(-1)

//int main()
//{//д���ļ�
//	char ch;
//	FILE* fp;
//	fp = fopen("file1.txt", "w");//��w��ʽ���ļ�
//	if (fp == NULL)
//	{
//		printf("���ļ�ʧ��! \n");
//		exit(0);
//	}
//	while ((ch = getchar()) != '#')
//	{
//		fputc(ch, fp);			//���ַ�chд���ļ�-------------fputc(char ch,FILE* fp)
//													//		   fgetc(FILE* fp)
//	}
//	fclose(fp);					//�ر��ļ�
//	return 0;
//}


//int main()
//{//�����ļ�
//	FILE* fp1, * fp2;
//	char ch, src[50], dest[50];
//	printf("����Դ�ļ�����");
//	scanf("%s", src);
//	printf("����Ŀ���ļ�����");
//	scanf("%s", dest);
//	if ((fp1 = fopen(src, "r")) == NULL)
//	{
//		printf("ԭ�ļ���ʧ�ܣ�\n");
//		exit(0);
//	}
//	if ((fp2 = fopen(dest, "w")) == NULL)
//	{
//		printf("Ŀ���ļ���ʧ�ܣ�\n");
//		exit(0);
//	}
//	while ((ch = fgetc(fp1)) != EOF)
//	{
//		fputc(ch, fp2);
//	}
//	fclose(fp1);
//	fclose(fp2);
//	printf("�ļ�������ɣ�\n");
//	return 0;
//}



//int main()
//{//���ļ�dict.txt����n�����Ȳ�����20��Ӣ�ĵ���(n<10),ÿ��һ�����ʣ���д������ļ��ж�ȡ��Щ���ʰ���������������output.txt�ļ�
//	char dict[10][21], tmp[21];
//	int i, j, n = 0;
//	FILE* fp;
//	if ((fp = fopen("dict.txt", "r")) == NULL)	//����ʽ���ļ�
//	{
//		printf("�ļ���ʧ�ܣ� \n");
//		exit(0);
//	}
//	while ((fgets(dict[n], 21, fp)) != NULL)	//ѭ�����ļ��ж�ȡ�ַ���-----  char* fgets(char* buf,int n,FILE* fp)-----nΪ�ַ������Ȱ���������־
//	{
//		n++;									//ѭ��������nΪ�ַ�������
//	}
//	fclose(fp);									//�ر��ļ�
//	for (i = 0; i < n - 1; i++)					//ð������
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (strcmp(dict[j], dict[j + 1]) > 0)
//			{
//				strcpy(tmp, dict[j]);
//				strcpy(dict[j], dict[j + 1]);
//				strcpy(dict[j + 1], tmp);
//			}
//		}
//	}
//	if ((fp = fopen("output.txt", "w")) == NULL)	//д��ʽ���ļ�
//	{
//		printf("�ļ���ʧ�ܣ�\n");
//		exit(0);
//	}
//	for (i = 0; i < n; i++)					//ѭ�����ַ���д���ļ�
//	{
//		fputs(dict[i], fp);					//intfputs(char*s,FILE* fp)
//	}
//	fclose(fp);
//	return 0;
//}


//int main()
//{//������4λ����д��������ļ�integer.dat�У��ٽ������������ļ��������������������ĺ�
//    int i, sum = 0;
//    FILE* fp;
//    //�Զ�����д�뷽ʽ���ļ�
//    if ((fp = fopen("integer.dat", "wb")) == NULL)	
//    {
//       	printf("�ļ���ʧ�ܣ�\n");
//        exit(0);
//    }
//    for (i = 1000; i <= 9999; i++)
//    {
//        fwrite(&i, sizeof(int), 1, fp);         //���ļ���д��1������
//    }                                           //int fwrite(void* p,unsigned size,unsigned n,FILE* fp)
//    fclose(fp);
//    //�Զ����ƶ���ʽ���ļ�
//    if ((fp = fopen("integer.dat", "rb")) == NULL)
//    {
//        printf("�ļ���ʧ�ܣ�\n");
//        exit(0);
//    }
//    while ((fread(&i, sizeof(int), 1, fp)) > 0)     //��ȡ1�����������ж��Ƿ�ɹ�
//    {                                               //int fread(void* p,unsigned size,unsigned n,FILE* fp)
//        sum = sum + i;
//    }
//    fclose(fp);
//    printf("sum=%d\n", sum);
//    return 0;
//}

//typedef struct student
//{
//    int id;
//    char name[20];
//    double score;
//}STUDENT;
//int main()
//{//�Ѷ��ѧ����Ϣ�Ľṹ������д��student.dat�ļ���
//    STUDENT stu[] = { {1001,"Zhang",88.0},{1002,"Lee",75},{1003,"Wang",95} };
//    int i;
//    FILE* fp;
//    if ((fp = fopen("student.dat", "wb")) == NULL)
//    {
//        printf("�ļ���ʧ�ܣ�\n");
//        exit(0);
//    }
//    for (i = 0; i < 3; i++)
//    {
//        fwrite(&stu[i], sizeof(STUDENT), 1, fp);
//    }//�ȼ���==fwrite(stu,sizeof(STUDENT),3,fp);
//    fclose(fp);
//    return 0;
//}


//��ʽ����д����
//int fscanf(FILE* fp,char * format,args,...)
//int fprintf(FILE* fp,char * format,args,...)



int main()
{
    int i = 0, sum = 0,n;
    FILE* fp;
    if ((fp = fopen("integer.dat", "rb")) == NULL)
    {
        printf("�ļ���ʧ�ܣ�\n");
        exit(0);
    }
    while (fread(&n, sizeof(int), 1, fp) > 0)
    {
        printf("i=%d,n=%d\n", i, n);
        sum = sum + n;
        fseek(fp, sizeof(int), SEEK_CUR);       //������һ������
    }
    fclose(fp);
    printf("sum=%d\n", sum);
    return 0;
}
















