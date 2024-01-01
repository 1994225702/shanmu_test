/*
1107 文本文件操作_单词的排序
时间限制:1000MS  代码长度限制:10KB
提交次数:4897 通过次数:1269

题型: 填空题   语言: GCC
Description 在当前目录有文件“case1.in”，文件里存放有多个（总个数不超过10000个）英文单词（每个英文单词不会超过10个字文字符）， 每行一个，单词未排序。现要求，将文件中的所有单词按字典顺序排序，然后将排序好的单词写入新建的文件answer.txt中（注：文件存放于当前目录）。 请完成程序，实现该功能，（注意，填空题，请不要使用return 0结束，否则会影响评判而判错）
（如case1.in文件中原内容如下）
hello
bye
yes
（程序执行后，在文件answer.txt中内容如下）
bye
hello
yes



*/


//#include "stdio.h"
//#include "string.h"
//
//main()
//{
//    FILE* fp=fopen("case1.in","r");
//    if(!fp) exit(0);
//    char word[10000][11] = {0};
//    int i=0,j=0;
//    char tmp[11] = {0};
//    while((fscanf(fp,"%s",word[i]))!=EOF) i++;
//    for(j=0;j<i-1;j++)
//    {
//        int min=j;
//        for(int k=j+1;k<i;k++)
//        {
//            if(strcmp(word[k],word[min])<=0)
//            {
//                min=k;
//            }
//        }
//        strcpy(tmp,word[min]);
//        strcpy(word[min],word[j]);
//        strcpy(word[j],tmp);
//    }
//    fclose(fp);
//    fp=fopen("answer.txt","w");
//    if(!fp) exit(0);
//    for(j=0;j<i;j++)
//    fprintf(fp,"%s\n",word[j]);      //得按格式输入输出
//    fclose(fp);
//    exit(0);
//}


