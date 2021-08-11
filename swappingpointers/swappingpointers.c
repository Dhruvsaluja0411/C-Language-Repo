#include<stdio.h>

int swap(int*n,int*m)
{
        int temp;
        temp = *n;
        *n=*m;
        *m=temp;
        return 0;

}
int main()
{
        int a,b;
        printf("enter the first number :\n");
        scanf("%d",&a);
        printf("enter the second number :\n");
        scanf("%d",&b);

        printf("the numbers before swapping are a and b : %d and %d \n",a,b);
        swap(&a,&b);
        printf("the numbers after swapping are a and b : %d and %d \n",a,b);

    return 0;
}