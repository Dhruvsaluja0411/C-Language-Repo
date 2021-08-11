#include<stdio.h>
// program to check the greatest of all the numbers entered by the user

int greatest(int a ,int arr[10])
{
        int b=0;
        for(int i = 0;i<=a;i++)
        {
            if(arr[i]>b)
                b = arr[i];
           
        }
            return b;            
            }

int main()
{
    int num[10],k,y;
    printf("enter the total numbers");
    scanf("%d",&k);
    printf("enter the numbers in which you want the greatest \n");
    for(int g = 0;g<k;g++)
    {
            scanf("%d",&num[g]);
    }
    y = greatest(k,num);
    printf("the greatest of all is %d",(y++));
    printf("the greatest of all is %d",y);

    return 0;
}