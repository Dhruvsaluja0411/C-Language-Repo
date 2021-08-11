#include<stdio.h>
long int fact(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, fact(n));
    return 0;
}

long int fact(int n) {
    int temp;
    if(n==0)
    return 1;
    else if(n>=1)
        {temp =  n*fact(n-1);
        return temp;}
        else return 1;
}