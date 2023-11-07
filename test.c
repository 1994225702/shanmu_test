#define _CRT_SECURE_NO_WARNINGS 1

//####return value (EOF)-------fclose  / fgetc  / fputc  / fputs  / 
               //  (NULL)------fopen   / fgets    

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
//int main(int argc, char* argv[])
//{//命令行参数
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
////文件打开操作
//FILE* fp;
//fp = fopen("course.txt", "r");
//if (fp == NULL)
//{
//	printf("Can't open the file! \n");
//	exit(0);
//}
//fclose(fp);	//关闭文件----------失败返回EOF--(-1)

//int main()
//{//写入文件
//	char ch;
//	FILE* fp;
//	fp = fopen("file1.txt", "w");//以w方式打开文件
//	if (fp == NULL)
//	{
//		printf("打开文件失败! \n");
//		exit(0);
//	}
//	while ((ch = getchar()) != '#')
//	{
//		fputc(ch, fp);			//把字符ch写入文件-------------fputc(char ch,FILE* fp)
//													//		   fgetc(FILE* fp)
//	}
//	fclose(fp);					//关闭文件
//	return 0;
//}


//int main()
//{//复制文件
//	FILE* fp1, * fp2;
//	char ch, src[50], dest[50];
//	printf("输入源文件名：");
//	scanf("%s", src);
//	printf("输入目标文件名：");
//	scanf("%s", dest);
//	if ((fp1 = fopen(src, "r")) == NULL)
//	{
//		printf("原文件打开失败！\n");
//		exit(0);
//	}
//	if ((fp2 = fopen(dest, "w")) == NULL)
//	{
//		printf("目标文件打开失败！\n");
//		exit(0);
//	}
//	while ((ch = fgetc(fp1)) != EOF)
//	{
//		fputc(ch, fp2);
//	}
//	fclose(fp1);
//	fclose(fp2);
//	printf("文件复制完成！\n");
//	return 0;
//}



//int main()
//{//在文件dict.txt中有n个长度不超过20的英文单词(n<10),每行一个单词，编写程序从文件中读取这些单词按升序排序后输出到output.txt文件
//	char dict[10][21], tmp[21];
//	int i, j, n = 0;
//	FILE* fp;
//	if ((fp = fopen("dict.txt", "r")) == NULL)	//读方式打开文件
//	{
//		printf("文件打开失败！ \n");
//		exit(0);
//	}
//	while ((fgets(dict[n], 21, fp)) != NULL)	//循环从文件中读取字符串-----  char* fgets(char* buf,int n,FILE* fp)-----n为字符串长度包含结束标志
//	{
//		n++;									//循环结束后n为字符串个数
//	}
//	fclose(fp);									//关闭文件
//	for (i = 0; i < n - 1; i++)					//冒泡排序
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
//	if ((fp = fopen("output.txt", "w")) == NULL)	//写方式打开文件
//	{
//		printf("文件打开失败！\n");
//		exit(0);
//	}
//	for (i = 0; i < n; i++)					//循环把字符串写入文件
//	{
//		fputs(dict[i], fp);					//intfputs(char*s,FILE* fp)
//	}
//	fclose(fp);
//	return 0;
//}


//int main()
//{//把所有4位整数写入二进制文件integer.dat中，再将所有整数从文件读出，计算所有整数的和
//    int i, sum = 0;
//    FILE* fp;
//    //以二进制写入方式打开文件
//    if ((fp = fopen("integer.dat", "wb")) == NULL)	
//    {
//       	printf("文件打开失败！\n");
//        exit(0);
//    }
//    for (i = 1000; i <= 9999; i++)
//    {
//        fwrite(&i, sizeof(int), 1, fp);         //向文件中写入1个整数
//    }                                           //int fwrite(void* p,unsigned size,unsigned n,FILE* fp)
//    fclose(fp);
//    //以二进制读方式打开文件
//    if ((fp = fopen("integer.dat", "rb")) == NULL)
//    {
//        printf("文件打开失败！\n");
//        exit(0);
//    }
//    while ((fread(&i, sizeof(int), 1, fp)) > 0)     //读取1个整数，并判断是否成功
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
//{//把多个学生信息的结构体数组写入student.dat文件中
//    STUDENT stu[] = { {1001,"Zhang",88.0},{1002,"Lee",75},{1003,"Wang",95} };
//    int i;
//    FILE* fp;
//    if ((fp = fopen("student.dat", "wb")) == NULL)
//    {
//        printf("文件打开失败！\n");
//        exit(0);
//    }
//    for (i = 0; i < 3; i++)
//    {
//        fwrite(&stu[i], sizeof(STUDENT), 1, fp);
//    }//等价于==fwrite(stu,sizeof(STUDENT),3,fp);
//    fclose(fp);
//    return 0;
//}


//格式化读写函数
//int fscanf(FILE* fp,char * format,args,...)
//int fprintf(FILE* fp,char * format,args,...)



int main()
{
    int i = 0, sum = 0,n;
    FILE* fp;
    if ((fp = fopen("integer.dat", "rb")) == NULL)
    {
        printf("文件打开失败！\n");
        exit(0);
    }
    while (fread(&n, sizeof(int), 1, fp) > 0)
    {
        printf("i=%d,n=%d\n", i, n);
        sum = sum + n;
        fseek(fp, sizeof(int), SEEK_CUR);       //跳过下一个整数
    }
    fclose(fp);
    printf("sum=%d\n", sum);
    return 0;
}
















