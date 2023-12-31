/*
1105 [填空]文本文件操作_字符读入
时间限制:1000MS  代码长度限制:10KB
提交次数:6324 通过次数:2085

题型: 填空题   语言: GCC
Description 在当前目录中存在文件名为"case1.in"的文本文件，现要求你使用fopen函数命令打开该文件，读出里面的所有字符， 遇到大写字母的，将其变为小写字母，其它字符不变，最后将所有字符按顺序在屏幕上输出。请填空完成程序， （注意，填空题，请不要使用return 0结束，否则会影响评判而判错）
（如case1.in内容如下）
Hello my Dear:
Have a GooD Time!
（在屏幕上输出结果如下）
hello my dear:
have a good time!

（提示，在提交前要测试自己的代码是否正确，可在源文件所有目录自己创建一个名为case1.in的文本文件，
在文件中自己打入一些字母，以便测试自己的代码是否正确）



*/


//#include "stdio.h"
//
//main()
//{
//    FILE *fp;
//    char ch;
//
//    if((fp=fopen("case1.in","r"))==NULL)
//        return 0;
//    while((ch=fgetc(fp))!=EOF)
//    {
//        if ('A'<=ch && ch<='Z')
//            ch = ch + 32;
//        putchar(ch);
//    }
//    fclose(fp);
//}
