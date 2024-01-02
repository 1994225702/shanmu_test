/*
1151 求函数值
时间限制:30000MS  代码长度限制:10KB
提交次数:862 通过次数:549

题型: 编程题   语言: G++;GCC
Description 输入x(x为整数)，求函数值
函数定义如下：
F(x)=x          	         x小于3
F(x)=F(x/3)*2   	         x大于等于3且x为3的倍数
F(x)=F((x-1)/3)+1   	x大于等于3且x除3余1
F(x)=F((x-2)/3)+2   	x大于等于3且x除3余2



输入格式
一个整数


输出格式
结果


输入样例
20


输出样例
6
*/
//#include <stdio.h>
//int F(int x)
//{
//    if(x<3) return x;
//    else if(x>=3&&x%3==0) return F(x/3)*2;
//    else if(x>=3&&x%3==1) return F((x-1)/3)+1;
//    else return F((x-2)/3)+2;
//
//}
//
//
//
//int main()
//{
//    int x;
//    scanf("%d",&x);
//
//    printf("%d",F(x));
//
//    return 0;
//}

