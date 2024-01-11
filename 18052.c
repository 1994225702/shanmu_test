/*
18052 插入数据
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 填空题   语言: GCC
Description
已经有一个按升序排列的数组，编写程序输入一个整数x，把x插入到数组中，使数组仍然保持升序。
数组如下：
2 3 5 7 11 13 17 23 29 31 34 71 79 97 103



输入格式
输入一个整数x


输出格式
输出更新后的数组元素


输入样例
5
*/

/*

#include <stdio.h>
int a[16]={2, 3, 5, 7, 11, 13, 17, 23, 29, 31, 34, 71, 79, 97, 103};
void display()
{
    int i;
    for(i=0; i<16; i++) printf("%d ", a[i]);
}
int main()
{
    /*
    int x,i,j;
    scanf("%d",&x);

    for(i=0;i<15;i++)
    {
        if(a[i]>x)
            break;
    }
    for(j=15;j>i;j--)
    {
        a[j]=a[j-1];
    }
    a[i]=x;



    int n,i;
    scanf("%d", &n);
    for(i=14; i>=0; i--)
        if(a[i]>n) a[i+1]=a[i];
        else break;
    a[i+1]=n;
    display();
    return 0;
}
*/
