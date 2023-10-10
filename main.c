#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<0)
       printf("negative\n");
    else printf("positive\n");
    if(1==(x%2)||-1==(x%2))
        printf("odd\n");
    else printf("even\n");

    return 0;
}

/*int main()
{
    float a,b,c;
    char op;
    scanf("%f%c%f",&a,&op,&b);
    switch(op)
    {
        case '+':c=a+b;break;
        case '-':c=a-b;break;
        case '*':c=a*b;break;
        case '/':c=a/b;break;
        default:printf("error\n");return 0;
    }
    printf("result=%.2f",c);
    return 0;
}*/
