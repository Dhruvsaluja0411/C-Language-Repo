#include <stdio.h>
#include <stdlib.h>

char A[100];
char B[100];

void single_input()
{
    printf("Enter the string: ");
    getchar();
    scanf("%[^\n]s",A);
}

void double_input()
{
    printf("Enter the first string: ");
    getchar();
    scanf("%[^\n]s",A);
    printf("Enter the second string: ");
    getchar();
    scanf("%[^\n]s",B);
}

int len(char arr[])
{
    int i=0;
    for(i=0; arr[i]!='\0';i++);
    return i;
}

void cat()
{
    int size1=len(A);
    int size2=len(B);
    int count = size1 + size2 - 1;

    for (int i = size1 , j=0; i<=count; i++ , j++)
    {
        A[i]=B[j];
    }
    
    printf("The string after concatation is: ");
    puts(A);
}

void rev()
{
    int size=len(A);
    
    for (int i = 0, j = size - 1; i != size; i++,j--)
    {
        B[j]=A[i];
    }
    B[size]='\0';
    printf("String after reversal: ");
    puts(B);
}

void cpy()
{
    printf("String A : ");
    puts(A);
    printf("String B : ");
    puts(B);
    int size = len(A);

    for (int i = 0; A[i] != '\0'; i++)
    {
        B[i]=A[i];
    }
    B[size]='\0';
    printf("copying A to B \n");
    printf("String A : ");
    puts(A);
    printf("String B : ");
    puts(B);
}

int main()
{
    int choice=0;

    printf("\n\tMENU\n");
    printf("\n\n1. Find the length of the string.\n");
    printf("2. Concatanate two strings.\n");
    printf("3. Find the reverse of the string.\n");
    printf("4. Copy one string to another.\n");
    
    printf("\n\nEnter the desired choice number: ");
    
    scanf("%d", &choice);
    
    switch (choice)
    {
    case 1:
        single_input();
        printf("\nLength of the string is: %d", len(A));
        break;
    case 2:
        double_input();
        cat();
        break;
    case 3:
        single_input();
        rev();
        break;
    case 4:
        double_input();
        cpy();
        break;
    default:
        printf("Wrong value entered. Program terminating...\n\n");
        exit(0);
    }

    return 0;
}