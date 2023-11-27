#define _CRT_SECURE_NO_WARNINGS 1



//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <string.h>
//char words[10010][21];//存放单词
//int nums[10010] = { 0 };//存放单词数量
//int n = 0;
//int isLetter(char c)
//{
//    return ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z');
//}
//
//main()
//{
//    freopen("case1.in", "r", stdin);
//    int status = 0; // 0当前是标点，1当前是单词字母，2当前是-号
//    char w[30], ch;
//    int pos = 0;
//    //获得单词
//    while ((ch = getchar()) != EOF)
//    {
//        switch (status)
//        {
//        case 0:// 0当前是标点
//            if (isLetter(ch))
//            {
//                status = 1;
//                w[0] = ch;
//                pos = 1;
//            }
//            break;
//        case 1://1当前是单词字母
//            if (isLetter(ch))
//            {
//                w[pos++] = ch;
//            }
//            else if (ch == '-')
//            {
//                status = 2;
//            }
//            else
//            {
//                status = 0;
//                w[pos++] = 0;
//                strlwr(w);
//                strcpy(words[n++], w);
//            }
//            break;
//        case 2://2当前是-号
//            if (ch == '\n')
//            {
//                status = 1;
//            }
//            else if (isLetter(ch))
//            {
//                status = 1;
//                w[pos++] = 0;
//                strlwr(w);
//                strcpy(words[n++], w);
//                w[0] = ch;
//                pos = 1;
//            }
//            else if (ch != ' ')
//            {
//                status = 0;
//            }
//            break;
//        }
//    }
//    if (status == 1)
//    {
//        w[pos++] = 0;
//        strlwr(w);
//        strcpy(words[n++], w);
//    }
//    int i, j;
//    //按单词排
//    char temp[30], t;
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = 0; j < n - 1 - i; j++)
//        {
//            if (strcmp(words[j], words[j + 1]) > 0)
//            {
//                strcpy(temp, words[j]);
//                strcpy(words[j], words[j + 1]);
//                strcpy(words[j + 1], temp);
//            }
//        }
//    }
//    //计数
//    nums[0] = 1;
//    for (i = 1; i < n; i++)
//    {
//        if (strcmp(words[i - 1], words[i]) == 0)
//        {
//            nums[i] = nums[i - 1] + 1;
//            nums[i - 1] = 0;
//        }
//        else nums[i] = 1;
//    }
//    // 按数量排
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = 0; j < n - 1 - i; j++)
//        {
//            if (nums[j] < nums[j + 1])
//            {
//                strcpy(temp, words[j]);
//                strcpy(words[j], words[j + 1]);
//                strcpy(words[j + 1], temp);
//                t = nums[j]; nums[j] = nums[j + 1]; nums[j + 1] = t;
//            }
//        }
//    }
//    for (i = 0; i < 5 && i < n; i++)
//        if (nums[i] > 0)
//            printf("%s %d\n", words[i], nums[i]);
//}

