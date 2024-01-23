/*
13  数据加密
Time Limit:1000MS  Memory Limit:65535K
题型: 编程题   语言: G++;GCC
描述
n位的正整数（0<n<10），加密规则为：每位数字加6，然后用和除以8的余数再加1，代替该数字，即为密文数据。
现在由键盘输入正整数n，请编程输出密文数据。

输入格式
n位的正整数（0<n<10）
输出格式
密文数据
输入样例
123
输出样例
812

*/


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char num;
//    while((num=getchar())!='\n')        //OJ上提交和codeblocks提交不一样，注意区别cb只能识别读取的'\n',OJ上是EOF
//    {
//        printf("%d",((num-'0')+6)%8+1);
//    }
//    return 0;
//}

