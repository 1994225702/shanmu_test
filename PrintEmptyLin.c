/*
9  打印数字空心菱形
Time Limit:1000MS  Memory Limit:65536K
题型: 编程题   语言: G++;GCC
描述
由键盘输入n（n为奇数），打印如下图空心菱形

例n=7
   1
  2 2
 3   3
4     4
 3   3
  2 2
   1

输入格式
整数
输出格式
如题
输入样例
3
输出样例
 1
2 2
 1

 */



// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int t,n,i,j;
//     scanf("%d",&n);
//     t=n/2;
//     for(i=-t;i<=t;i++)
//     {
//         for(j=abs(i);j>0;j--)
//            printf(" ");
//         for(j=abs(i)-t;j<=t-abs(i);j++)
//         {
//             if(abs(j)==t-abs(i))
//                printf("%d",t-abs(i)+1);
//             else printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

