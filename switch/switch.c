#include<stdio.h>
 
 int main()
 {
        int n;
        printf("enter your choice 1,2,3");
        scanf("%d",&n);

        switch(n)
        {
                case 1 : printf("your choice is 1");
                         break;

                 default : printf("your choice is not matched");
                           break;
                
                case 2 : printf("your choice is 2");
                         break;
                case 3 : printf("your choice is 3");
                         break;
                
                
 }
 return 0;}