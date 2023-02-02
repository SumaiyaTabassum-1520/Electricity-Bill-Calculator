#include<stdio.h>
int main()
{
    int a,b;
    char symbol;
    printf("\t\tEnter two digit and symbol for \n\t\t1.addition\n\t\t2.subtraction\n\t\t3.multiplication\n\t\t4.modulus \n\t\t5.division\n");
    while(scanf("%d%c%d",&a,&symbol,&b)==3)
    {

        if(symbol=='+')
        {
            printf("addition = %d+%d\n=%d\n",a,b,a+b);
        }
        else if(symbol=='-')
        {
            if(a>b)
            {
                printf("subtraction = %d-%d\n=%d\n",a,b,a-b);
            }
            else
            {
                printf("subtraction is invalid\n");
            }
        }
        else if(symbol=='*')
        {
            printf("multiplication = %d*%d\n=%d\n",a,b,a*b);
        }
        else if(symbol=='/')
        {
            if(a>b && a>0 && b>0)
            {
                 printf("division = %d/%d\n=%d\n",a,b,a/b);
            }
            else
            {
                printf("division is invalid\n");
            }

        }
        else if(symbol=='%')
        {
            char c='%';
            printf("modulus = %d ",a);
            printf("%c",c);
            printf(" %d\n=%d\n",b,a%b);
        }
        else
        {
            printf("The symbol is invalid\n");
        }
    }
    return 0;
}
