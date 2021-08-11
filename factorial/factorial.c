#include<stdio.h>

int main()
{
        int i ,fact,a,b;
        do{
        printf("enter the number for which you want to calculate the factorial for\n");
        scanf("%d",&a);
        fact = 1;

        for(i = 1;i<=a;i++)
        {
            fact = fact*i ;
        }

        printf("\nthe factorial of the number %d is %d",a,fact);
        printf("\n do you wish to continue press 1 \n ?");
        scanf("%d",&b);
        }while(b==1);
        

        return 0;
}