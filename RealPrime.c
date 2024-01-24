/*
15  真质数
Time Limit:1000MS  Memory Limit:65535K
题型: 编程题   语言: G++;GCC
描述
找出正整数M和N之间（N不小于M）的所有真质数。
真质数的定义：如果一个正整数P为质数，且其反序也为质数，那么P就是真质数。
例如，11，13均为真质数，因为11的反序还是为11，13的反序为31也为质数。

输入格式
输入两个数M和N，空格间隔，1≤M≤N≤1000。
输出格式
按从小到大输出M和N之间（包括M和N）的真质数，每行一个。

如果之间没有真质数，则输出NO。
输入样例
10 35
输出样例
11
13
17
31

*/


//#include <stdio.h>
//#include <math.h>
//int IsPrime(int n)
//{
//    int i;
//    for(i=2;i<=sqrt(n);i++)
//    {
//        if(n%i==0)
//            return 0;
//    }
//    return 1;
//}
//
//int main()
//{
//    int i,j,M,N,flag=1;
//    scanf("%d%d",&M,&N);
//
//    for(i=M;i<=N;i++)
//    {
//        if(IsPrime(i))
//        {
//            int tmp;
//            if(i<10)
//            {
//                flag=0;
//                printf("%d\n",i);
//            }
//            else if(i>=100&&i<1000)
//            {
//                tmp=(i%10)*100+(i/100)+(i/10)%10*10;
//                if(IsPrime(tmp))
//                {
//                    flag=0;
//                    printf("%d\n",i);
//                }
//
//            }
//            else if(i<100&&i>=10)
//            {
//                tmp=(i%10)*10+i/10;
//                if(IsPrime(tmp))
//                {
//                    flag=0;
//                    printf("%d\n",i);
//                }
//            }
//        }
//
//    }
//    if(flag) printf("NO");
//
//    return 0;
//}




