#include<stdio.h>
int div2(int n)
{
        int a;
        a = n;
        if(a&1)
        printf("\nthe number is odd");
        else
        printf("\nthe number is even");
        return a;
}
int multi2(int n)
{
        int a = n;
        a = a<<1;
        printf("\nthe number multiplied by 2 is %d",a);
        return 0;
}
int divide2(int n)
{
        int a = n;
        a = a>>1;
        printf("\nthe number divided  by 2 is %d",a);
        return 0;
}
int main()
{       
        int a,k;
        do
        {
            printf("enter the number you want to check for odd/even");
            scanf("%d",&a);
            div2(a);
            multi2(a);
            divide2(a);



            printf("\ndo yo wish to continue press 1 ");
            scanf("%d",&k);
            } while (k == 1);

}