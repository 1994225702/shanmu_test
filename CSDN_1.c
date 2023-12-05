#define _CRT_SECURE_NO_WARNINGS 1

//代码注释
//尽量使用const
//#include <assert.h>
//#include <stdio.h>


//有问题

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//typedef struct
//{
//    char word[40];
//    int time;
//}WORD;
//
//int sum = 0;
//WORD word[10005];
//WORD max_time[5];
//WORD MAX;//存储time最大的结构体
//
////memset(NewWord,'\0',sizeof(NewWord));//格式化
//
//int main()
//{
//    char NewWord[40];
//    char ch;
//    int pos = 0, i = 0, j = 0, k = 0;
//    int flag = 0;
//    FILE* fp;
//    fp = fopen("case1.in", "r");
//    if (fp == NULL)
//    {
//        return 0;
//    }
//    memset(NewWord, '\0', sizeof(NewWord));
//    while ((ch = fgetc(fp)) != EOF)
//    {
//        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//        {
//            if (ch >= 'A' && ch <= 'Z')
//            {
//                ch += 32;
//            }
//            NewWord[pos] = ch;
//            pos++;
//        }
//        else if ((ch >= 32 && ch <= 44) || (ch >= 46 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= '0' && ch <= '9') || (ch == '.'))//常用符号的ASCII码
//        {
//            if (NewWord[0] != '\0')//如果第一个字母为空，则不是单词
//            {
//                flag = 0;
//                for (i = 0; i < sum; i++)
//                {
//                    if (strcmp(word[i].word, NewWord) == 0)
//                    {
//                        flag = 1;//找到相同的单词
//                        word[i].time++;
//                        memset(NewWord, '\0', sizeof(NewWord));
//                        pos = 0;
//                        break;
//                    }
//                }
//                if (flag == 0)
//                {
//                    strcpy(word[sum].word, NewWord);
//                    word[sum].time = 1;
//                    memset(NewWord, '\0', sizeof(NewWord));
//                    sum++;
//                    pos = 0;
//                }
//            }
//        }
//        else if (ch == '-')
//        {
//            ch = fgetc(fp);//判断下一个字符，如果不是换行符则连字符等同于空格（血的教训！！！）
//            if (ch == '\n')
//            {
//                continue;//换行就不用管了
//            }
//            else//不是换行符就是一个单词结束了，开新单词
//            {
//                if (NewWord[0] != '\0')//如果第一个字母为空，则不是单词
//                {
//                    flag = 0;
//                    for (i = 0; i < sum; i++)
//                    {
//                        if (strcmp(word[i].word, NewWord) == 0)
//                        {
//                            flag = 1;//找到相同的单词
//                            word[i].time++;
//                            memset(NewWord, '\0', sizeof(NewWord));
//                            pos = 0;
//                            break;
//                        }
//                    }
//                    if (flag == 0)
//                    {
//                        strcpy(word[sum].word, NewWord);
//                        word[sum].time = 1;
//                        memset(NewWord, '\0', sizeof(NewWord));
//                        sum++;
//                        pos = 0;
//                    }
//                    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))//如果新字符是字母，就记录下来
//                    {
//                        if (ch >= 'A' && ch <= 'Z')
//                        {
//                            ch += 32;
//                        }
//                        NewWord[pos] = ch;
//                        pos++;
//                    }
//                }
//            }
//        }
//    }
//    if (NewWord[0] != '\0')//处理最后一个单词
//    {
//        flag = 0;
//        for (i = 0; i < sum; i++)
//        {
//            if (strcmp(word[i].word, NewWord) == 0)
//            {
//                flag = 1;//找到相同的单词
//                word[i].time++;
//                memset(NewWord, '\0', sizeof(NewWord));
//                pos = 0;
//                break;
//            }
//        }
//        if (flag == 0)
//        {
//            strcpy(word[sum].word, NewWord);
//            word[sum].time = 1;
//            memset(NewWord, '\0', sizeof(NewWord));
//            sum++;
//            pos = 0;
//        }
//    }
//    fclose(fp);
//    MAX.time = 0;
//    memset(MAX.word, '\0', sizeof(MAX.word));
//    for (k = 0; k < 5; k++)//开一个新数组存放要输出的单词
//    {
//        for (i = 0; i < sum; i++)
//        {
//            if (word[i].time > MAX.time)
//            {
//                MAX.time = word[i].time;
//                strcpy(MAX.word, word[i].word);
//                j = i;//记录位置
//            }
//            else if (word[i].time == MAX.time)
//            {
//                if (strcmp(word[i].word, MAX.word) < 0)
//                {
//                    MAX.time = word[i].time;
//                    strcpy(MAX.word, word[i].word);
//                    j = i;
//                }
//            }
//        }
//        strcpy(max_time[k].word, MAX.word);
//        max_time[k].time = MAX.time;
//        MAX.time = 0;
//        memset(MAX.word, '\0', sizeof(MAX.word));
//        word[j].time = 0;//清0
//    }
//    for (k = 0; k < 5&&k<sum; k++)//输出单词
//    {
//        printf("%s %d\n", max_time[k].word, max_time[k].time);
//    }
//    return 0;
//}


//改进版
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//typedef struct
//{
//    char word[40];
//    int time;
//}WORD;
//
//int sum = 0;
//WORD word[10005];
//WORD max_time[5];
//WORD MAX;//存储time最大的结构体
//
////memset(NewWord,'\0',sizeof(NewWord));//格式化
//
//int main()
//{
//    char NewWord[40];
//    char ch;
//    int pos = 0, i = 0, j = 0, k = 0;
//    int flag = 0;
//    FILE* fp;
//    fp = fopen("case1.in", "r");
//    if (fp == NULL)
//    {
//        return 0;
//    }
//    memset(NewWord, '\0', sizeof(NewWord));
//    while ((ch = fgetc(fp)) != EOF || NewWord[0] != '\0')   //利用逻辑或短路--前真后短路--双非退出
//    {
//        if (ch == EOF)//如果文件已经终止而NewWord存有单词，就人为赋值一个标点符号来让单词赋值
//        {
//            ch = '.';//人为添加一个句号作终止符
//        }
//        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//        {
//            if (ch >= 'A' && ch <= 'Z')
//            {
//                ch += 32;
//            }
//            NewWord[pos] = ch;
//            pos++;
//        }
//        else if ((ch >= 32 && ch <= 44) || (ch >= 46 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= '0' && ch <= '9') || (ch == '.'))//常用符号的ASCII码
//        {
//            if (NewWord[0] != '\0')//如果第一个字母为空，则不是单词
//            {
//                flag = 0;
//                for (i = 0; i < sum; i++)
//                {
//                    if (strcmp(word[i].word, NewWord) == 0)
//                    {
//                        flag = 1;//找到相同的单词
//                        word[i].time++;
//                        memset(NewWord, '\0', sizeof(NewWord));
//                        pos = 0;
//                        break;
//                    }
//                }
//                if (flag == 0)
//                {
//                    strcpy(word[sum].word, NewWord);
//                    word[sum].time = 1;
//                    memset(NewWord, '\0', sizeof(NewWord));
//                    sum++;
//                    pos = 0;
//                }
//            }
//        }
//        else if (ch == '-')
//        {
//            ch = fgetc(fp);//判断下一个字符，如果不是换行符则连字符等同于空格（血的教训！！！）
//            if (ch == '\n')
//            {
//                continue;//换行就不用管了
//            }
//            else//不是换行符就是一个单词结束了，开新单词
//            {
//                if (NewWord[0] != '\0')//如果第一个字母为空，则不是单词
//                {
//                    flag = 0;
//                    for (i = 0; i < sum; i++)
//                    {
//                        if (strcmp(word[i].word, NewWord) == 0)
//                        {
//                            flag = 1;//找到相同的单词
//                            word[i].time++;
//                            memset(NewWord, '\0', sizeof(NewWord));
//                            pos = 0;
//                            break;
//                        }
//                    }
//                    if (flag == 0)
//                    {
//                        strcpy(word[sum].word, NewWord);
//                        word[sum].time = 1;
//                        memset(NewWord, '\0', sizeof(NewWord));
//                        sum++;
//                        pos = 0;
//                    }
//                    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))//如果新字符是字母，就记录下来
//                    {
//                        if (ch >= 'A' && ch <= 'Z')
//                        {
//                            ch += 32;
//                        }
//                        NewWord[pos] = ch;
//                        pos++;
//                    }
//                }
//            }
//        }
//    }
//    fclose(fp);
//    MAX.time = 0;
//    memset(MAX.word, '\0', sizeof(MAX.word));
//    for (k = 0; k < 5&&k<sum; k++)//开一个新数组存放要输出的单词
//    {
//        for (i = 0; i < sum; i++)
//        {
//            if (word[i].time > MAX.time)
//            {
//                MAX.time = word[i].time;
//                strcpy(MAX.word, word[i].word);
//                j = i;//记录位置
//            }
//            else if (word[i].time == MAX.time)
//            {
//                if (strcmp(word[i].word, MAX.word) < 0)
//                {
//                    MAX.time = word[i].time;
//                    strcpy(MAX.word, word[i].word);
//                    j = i;
//                }
//            }
//        }
//        strcpy(max_time[k].word, MAX.word);
//        max_time[k].time = MAX.time;
//        MAX.time = 0;
//        memset(MAX.word, '\0', sizeof(MAX.word));
//        word[j].time = 0;//清0
//        printf("%s %d\n", max_time[k].word, max_time[k].time);//输出单词
//    }
//    return 0;
//}
