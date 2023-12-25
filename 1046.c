/*
1046 计算高精度加法
时间限制:1000MS  代码长度限制:10KB
提交次数:4771 通过次数:1813

题型: 编程题   语言: G++;GCC
Description
由键盘输入两个位数很长的整数（一行一个，最多不超过80位），试计算并输出这两个数的和。



输入样例
1234567890123456789353534532453453453434534
987654321098765324534534534534532


输出样例
1234567891111111110452299856987987987969066


提示
注意，一个普通的变量不能保存十多位长的整数

*/


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char num1[81]={0},num2[81]={0};
//    int digit[82]={0};
//    gets(num1);
//    gets(num2);
//
//    int left=0,len1=strlen(num1);
//    int right=len1-1;
//    int len2=strlen(num2);
//
//    while(left<right)
//    {
//        int tmp=num1[left];
//        num1[left] = num1[right];
//        num1[right] =tmp;
//        left++;
//        right--;
//    }
//    left=0,right=len2-1;
//    while(left<right)
//    {
//        int tmp=num2[left];
//        num2[left] = num2[right];
//        num2[right] =tmp;
//        left++;
//        right--;
//    }
//    int i,tmp=0,max=(len1>len2?len1:len2);
//    for(i=0;i<max;i++)
//    {
//        if(num1[i]>='0')
//            num1[i]-='0';
//        if(num2[i]>='0')
//            num2[i]-='0';
//        digit[i]=(num1[i]+num2[i]+tmp)%10;      //注意加上进数再求余取进数
//        tmp=(num1[i]+num2[i]+tmp)/10;           //************************
//
//
//    }
//
//    if(tmp)
//        printf("%d",tmp);
//    for(i=max-1;i>=0;i--)
//        printf("%d",digit[i]);
//
//    return 0;
//}



//标程
//
//#include "stdio.h"
//#include "string.h"
//main()
//{   int a[100]={0},b[100]={0},c[100]={0};
//    char s[101];
//    int i=0,n1=0,n2=0,max=0,e=0;
//    gets(s);
//    n1=strlen(s);
//    for(i=n1-1;i>=0;i--) a[n1-1-i]=s[i]-'0';
//    gets(s);
//    n2=strlen(s);
//    for(i=n2-1;i>=0;i--) b[n2-1-i]=s[i]-'0';
//    if(n1>n2) max=n1;
//    else max=n2;
//    for(i=0;i<=max;i++)
//    {    c[i]=(a[i]+b[i]+e)%10;
//         e=(a[i]+b[i]+e)/10;
//    }
//	if(c[max]>0) printf("%d",c[max]);
//    for(i=max-1;i>=0;i--)
//    printf("%d",c[i]);
//}
