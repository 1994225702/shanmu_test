/*
1107 �ı��ļ�����_���ʵ�����
ʱ������:1000MS  ���볤������:10KB
�ύ����:4897 ͨ������:1269

����: �����   ����: GCC
Description �ڵ�ǰĿ¼���ļ���case1.in�����ļ������ж�����ܸ���������10000����Ӣ�ĵ��ʣ�ÿ��Ӣ�ĵ��ʲ��ᳬ��10�������ַ����� ÿ��һ��������δ������Ҫ�󣬽��ļ��е����е��ʰ��ֵ�˳������Ȼ������õĵ���д���½����ļ�answer.txt�У�ע���ļ�����ڵ�ǰĿ¼���� ����ɳ���ʵ�ָù��ܣ���ע�⣬����⣬�벻Ҫʹ��return 0�����������Ӱ�����ж��д�
����case1.in�ļ���ԭ�������£�
hello
bye
yes
������ִ�к����ļ�answer.txt���������£�
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
//    fprintf(fp,"%s\n",word[j]);      //�ð���ʽ�������
//    fclose(fp);
//    exit(0);
//}


