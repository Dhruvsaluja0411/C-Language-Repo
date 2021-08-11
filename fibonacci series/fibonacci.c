#include<stdio.h>
// fibonacii series
int fibo(int);
int main()
{
        int x;
        printf("Enter the number till what number you want the fibonacci series");
        scanf("%d",&x);
        fibo(x);
        return 0;
}

int fibo(a)
{   
    int x = 0,z=0,y=1;
    for(int i=0;z<=a;i++)
    {
            printf("%d,",z);
            x=y;
            y=z;
            z = x + y;
    }
    return 0;
}