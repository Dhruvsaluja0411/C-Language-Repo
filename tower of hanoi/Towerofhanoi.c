#include<stdio.h>

int TOH(int n , char from_rod , char to_rod, char aux_rod )
{
                if (n == 1)
                {
                        printf("move disc %d from %c to %c \n",n,from_rod,to_rod);
                        return 0; 
                }
               
                        TOH(n-1,from_rod , aux_rod,to_rod);
                        printf("move disc %d from %c to %c \n",n,from_rod,to_rod);
                        TOH(n - 1, aux_rod, to_rod, from_rod);
                return 0 ;
}
int main()
{       int n;
       printf("enter the number of disc in starting rod\n");
       scanf("%d",&n);
       TOH(n,'A','C','B');
       return 0;
}