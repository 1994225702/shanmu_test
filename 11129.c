/*
11129 文本文件操作_读取与选择显示
时间限制:1000MS  代码长度限制:10KB
提交次数:993 通过次数:447

题型: 填空题   语言: GCC
Description
    在当前目录中存在文件名为"case1.in"的文本文件，现要求打开该文件，读出里面的所有字符，只将其中的数字字符按先后顺序显示在屏幕上。

（如case1.in内容如下）
13 cats and 22 bikes
（在屏幕上输出结果如下）
1322



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
//        if(ch>='0'&&ch<='9')
//            putchar(ch);
//    }
//    fclose(fp);
//}

