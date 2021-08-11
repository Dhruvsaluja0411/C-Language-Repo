#include<stdio.h>
// pyramid of stars
int RslantP(int b)
{
    for(int i = 1;i<=b;i++)
    {
            for(int j = 0;j<i;j++)
            {
                printf("*");
                }
            printf("\n");
    }
    
    return 0;
}
int DRslantP(int b)
{
    for(int i = 1;i<=b;i++)
    {
            for(int j = 0;j<=b-i;j++)
            {
                printf("*");
                }
            printf("\n");
    }
    
    return 0;
}
int LslantP(int b)
{
    for(int i = 0;i<=b;i++)
    {
            for(int j = 0;j<b-i;j++)
            {
                printf(" ");
                }
            for( int k = 1;k<=i;k++)
               { 
                   printf("*");
               }
                printf("\n");
    
    }
            return 0;
}
int DLslantP(int b)
{
    for(int i = 0;i<=b;i++)
    {       
            for( int k = 0;k<=i;k++)
               { 
                   printf(" ");
               }
            for(int j = 0;j<b-i;j++)
            {
                printf("*");
                }
            
                printf("\n");
    
    }
            return 0;
}
int DBslantP(int b)
{
    for(int i = 0;i<=b;i++)
    {       
            for( int k = 0;k<=i;k++)
               { 
                   printf(" ");
               }
            for(int j = 0;j<b-i;j++)
            {
                printf(" *");
                }
            
                printf("\n");
    
    }
            return 0;
}
int BslantP(int b)
{
    for(int i = 0;i<=b;i++)
    {
            for(int j = 0;j<b-i;j++)
            {
                printf(" ");
                }
            for( int k = 1;k<=i;k++)
               { 
                   printf(" *");
               }
                printf("\n");
    
    }
            
    
    return 0;
}

int main()
{
        int a ;
        printf("how big you want the base to be");
        scanf("%d",&a);
        RslantP(a);
        printf("\n");
        LslantP(a);
        printf("\n");
        BslantP(a);
        DRslantP(a);
        printf("\n");
        DLslantP(a);
        printf("\n");
        DBslantP(a);
        printf("\n");

    return 0;
}