// C program to find factorial of given number
#include <stdio.h>
  
// function to find factorial of given number
unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1; // returning 1 in the case for n = 0
    return n * factorial(n - 1);
}
  
int main()
{
    int num;
    printf("enter the number for whivh you want the factorial :  ");
    scanf("%d",&num);
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}