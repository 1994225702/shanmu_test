/*
1050 寻找字符串
时间限制:1000MS  代码长度限制:10KB
提交次数:3136 通过次数:1836

题型: 编程题   语言: G++;GCC
Description
由键盘输入两个字符串（假设第一个字符串必包含第二个字符串，如第一个字符串为ABCDEF，第二个为CDE，
则CDE包含在ABCDEF中），现要求编程输出第二字符串在第一行字符串中出现的位置。
（如果第二个字符串在第一个字符串中出现多次，则以最前出现的为准）



输入样例
ABCDEFG
DE


输出样例
4


提示
因为DE在ABCDEFG中的第4个字符处出现
*/

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char str1[100] = {0},str2[100] = {0};
//    gets(str1);
//    gets(str2);
//
//    printf("%d",strstr(str1,str2)-str1+1);
//    return 0;
//}
