#include<stdio.h>
#include<math.h>

int main()
{
        int i,Lnum,sum,r,n,a,b,c,temp=0;
        do
        {       
                printf("enter the suitable input in the menu\n");
                printf("press 1 for calculating gp with power function\n");
                printf("press 2 for calculating gp with for loop\n");
                scanf("%d",&c);
                switch (c)
                {
                case 1 :
                        printf("enter the first number of gp\n");
                        scanf("%d",&a);
                        printf("enter the common ratio of gp\n");
                        scanf("%d",&r);
                        printf("enter the number of gp till you wish to calculate the sum and that number \n");
                        scanf("%d",&n);

                        sum = (a*(1-pow(r,n)))/(1-r);
                        Lnum = a*pow(r,n-1);

                        printf("\n the sum till %d is %d \n ",Lnum,sum);
                        break;
                
                case 2 :
                        printf("enter the first number of gp\n");
                        scanf("%d",&a);
                        printf("enter the common ratio of gp\n");
                        scanf("%d",&r);
                        printf("enter the number of gp till you wish to calculate the sum and that number \n");
                        scanf("%d",&n);
                        temp = a;
                        sum = 0;
                        for(int i = 0;i<n;i++)
                        {
                                sum = sum + temp;
                                temp = temp*r; 
                                printf("%d\n",sum);
                                
                        }
                        Lnum = temp/r;
                        printf("\n the sum till %d is %d \n ",Lnum,sum);
                        break;
                }
                

                printf("do you wish to continuw press 1 ?\n");
                scanf("%d",&b);
        }while(b==1);
        

        return 0;
}