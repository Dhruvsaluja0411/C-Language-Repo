#include<stdio.h>
int fib(int n)
{
   if (n <= 1)
      return n;
   return (fib(n-1) + fib(n-2));
}
 
int main ()
{
  int n ,i=0;
  printf("how many numbers you want in your series ? \n");
  scanf("%d",&n);
  for(i = 0;i<n;i++)
  {
     printf("%d  ",fib(i));
  }
  return 0;
}