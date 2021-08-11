#include<stdio.h>

int add(int x[3][3], int y[3][3])
{
        int z[3][3];
        for(int i = 0; i<3 ; i++)
    {
            for(int j = 0 ; j<3 ; j++)
            {
                    z[i][j] = x[i][j] + y[i][j];
            }
    }
    printf("the sum of the matrices is \n");
    for(int i = 0; i<3 ; i++)
    {
            for(int j = 0 ; j<3 ; j++)
            {
                    printf("%d  ",z[i][j]);
            }
            printf("\n");
    }
    return 0;
}
int diff(int x[3][3], int y[3][3])
{
        int z[3][3];
        for(int i = 0; i<3 ; i++)
    {
            for(int j = 0 ; j<3 ; j++)
            {
                    z[i][j] = x[i][j] - y[i][j];
            }
    }
    printf("the subtraction of the matrices is \n");
    for(int i = 0; i<3 ; i++)
    {
            for(int j = 0 ; j<3 ; j++)
            {
                    printf("%d  ",z[i][j]);
            }
            printf("\n");
    }
    return 0;
}
int upplow(int x[3][3])
{
    printf("the upper triangle of matrix is \n");
    for(int i = 0; i<3 ; i++)
    {
            for(int j = 0 ; j<3 ; j++)
            {       if(j>=i)
                    printf("%d  ",x[i][j]);
                    else
                    printf("0  ");
            }
            printf("\n");
    }

    printf("the lower triangle of matrix is \n");
    for(int i = 0; i<3 ; i++)
    {
            for(int j = 0 ; j<3 ; j++)
            {       if(j<=i)
                    printf("%d  ",x[i][j]);
                    else
                    printf("0  ");
            }
            printf("\n");
    }
    return 0;       
}
int trans(int x[3][3])
{   
    int z[3][3];
    for(int i = 0; i<3 ; i++)
    {
            for(int j = 0 ; j<3 ; j++)
            {       
                z[j][i] = x[i][j];
            }
    }
    printf("the transpose of the matrix is \n");
    for(int i = 0; i<3 ; i++)
    {
            for(int j = 0 ; j<3 ; j++)
            {
                    printf("%d  ",z[i][j]);
            }
            printf("\n");
    }
    return 0;       
}
int product(int x[3][3], int y[3][3])
{
        int z[3][3],sum;
        for(int i = 0; i<3 ; i++)
    {       
            for(int j=0 ; j < 3 ;j++)
            {
                sum = 0;
            for(int k = 0 ; k < 3 ; k++)
            {
                    sum = sum + x[i][k]*y[k][j];
            }
            z[i][j] = sum;
            }
    }
    printf("the product of the matrices is \n");
    for(int i = 0; i<3 ; i++)
    {
            for(int j = 0 ; j<3 ; j++)
            {
                    printf("%d  ",z[i][j]);
            }
            printf("\n");
    }
    return 0;
}
int main()
{
    int a[3][3],b[3][3],c[3][3],choice,w;
    printf("enter the value of first matrix 3x3 \n");
    for(int i = 0; i<3 ; i++)
    {
            for(int j = 0 ; j<3 ; ++j)
            {
                    scanf("%d",&a[i][j]);
            }
            printf("\n");
    }
    printf("enter the value of second matrix 3x3 \n");
    for(int i = 0; i<3 ; i++)
    {
            for(int j = 0 ; j<3 ; j++)
            {
                    scanf("%d",&b[i][j]);
            }
            printf("\n");
    }
    do{
    printf("enter the choice of operation you want to perform \n");
    printf(" 1) sum of two matrices \n");
    printf(" 2) subtraction of two matrices \n");
    printf(" 3) Finding upper and lower triangular matrices of first matrix \n");
    printf(" 4) Transpose of first matrix \n");
    printf(" 5) Product of two matrices \n");

    scanf("%d",&choice);

    switch(choice)
    {
        case 1 : add(a,b);
                 break;
                
        case 2 : diff(a,b);
                 break;

        case 3 : upplow(a);
                 break;

        case 4 : trans(a);
                 break;

        case 5 : product(a,b);
                 break;
        default : printf("wrong input \n");
    }
    printf("do you wish to continue press 1 \n ");
    scanf("%d",&w);
    }while(w == 1);
    return 0;

}