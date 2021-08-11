#include<stdio.h>
// Program to show basic input and output functiond for diff. data types
int sum(int a, int b)
{
        int y ;
        y = a + b;
        return y;
}
int main()
{
       // Declare variables
       int i = 0,add,a,b;
       char ch = '0';
       float f = 0;

       printf("enter the integer \n");
       scanf("\n%d",&i);
       printf("\nThe integer you enetered is %d ",i);

       printf("\nenter the character \n");
       scanf("\n %ch",&ch);
       printf("\nThe character you enetered is %c ",ch);

       printf("\nenter the float \n");
       scanf(" \n %f",&f);
       printf("\n The float you enetered is %f ",f);

       printf("Enter two numbers you want to do sum for");
       scanf(" \n%d",&a);
       scanf(" \n%d",&b); 
       add = sum(a,b);
       printf(" \n sum of a and b is %d",add); 
 
       
        return 0;

}