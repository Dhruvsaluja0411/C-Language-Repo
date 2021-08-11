#include <stdio.h>

int add();
int sub();
int triag();
int tran();
int multi();

int main()
{
    printf("\n Program to do operations on Matrices\n\n");
    int choice=0;
    int cont=0;
    do{
        printf(" List of operations:\n");
        printf("\n 1. Addition of two matrices");
        printf("\n 2. Subtraction of two matrices");
        printf("\n 3. Finding upper and lower triangular matrices");
        printf("\n 4. Transpose of a matrix");
        printf("\n 5. Product of two matrices");
        printf("\n\n Enter the number of your desired operation");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: add();
                    break;
            case 2: sub();
                    break;
            case 3: triag();
                    break;
            case 4: tran();
                    break;
            case 5: multi();
                    break;
            
            default: printf("\n wrong input \n");

        }
        printf("\n");
        printf("do you wish to continue press 1 \n");
        scanf("\n %d",&cont);
    }while(cont==1);
    printf("\n thank you \n");
    return 0;
}


int add()
{
    int x=0;
    printf("\n\n Enter the order of the square matrices");
    scanf("%d",&x);
    int arr1[x][x];
    int arr2[x][x];
    printf("\n\n Enter the elements in the first matrix:\n\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("\tEnter the element at [ %d ][ %d ]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n\n The first matrix is: \n\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++)
        {
            printf("%d ", arr1[i][j]);
        } 
        printf("\n");
    }
    printf("\n\nEnter the elements in the second matrix:\n\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++)
        {
            printf("\tEnter the element at [%d][%d]: ",i,j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\n\n The second matrix is: \n\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d ", arr2[i][j]);
        } printf("\n");
    }
    printf("\n The matrix after addition is:\n\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            arr1[i][j]+=arr2[i][j];
            printf("%d ", arr1[i][j]);
        }printf("\n");
    }
    return 0;
}


int sub()
{   
    int x=0;
    printf("\n\n Enter the order of the square matrices");
    scanf("%d",&x);
    int arr1[x][x];
    int arr2[x][x];
    printf("\n\n Enter the elements in the first matrix:\n\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("\tEnter the element at [%d][%d]: ",i,j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n\n The first matrix is: \n\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            printf("%d ", arr1[i][j]);
        } printf("\n");
    }
    printf("\n\nEnter the elements in the second matrix:\n\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            printf("\tEnter the element at [%d][%d]: ",i,j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\n\n The second matrix is: \n\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            printf("%d ", arr2[i][j]);
        } printf("\n");
    }

    printf("\n The matrix after subtraction is:\n\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            arr1[i][j]-=arr2[i][j];
            printf("%d ", arr1[i][j]);
        } printf("\n");
    }
    return 0;
}


int triag()
{
    int x=0;
    printf("\n\n Enter the order of the square matrix");
    scanf("%d",&x);
    int arr[x][x];
    printf("\n\n Enter the elements in the matrix:\n\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("\tEnter the element at [%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\n The matrix is: \n\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            printf("%d ", arr[i][j]);
        } printf("\n");
    }
    printf("\n The upper triangle is:\n\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            if(j>=i){
                printf("%d ", arr[i][j]);
            } else{
                printf("0 ");
            }
        } printf("\n");
    }
    printf("\n The lower triangle is:\n\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            if(i>=j){
                printf("%d ", arr[i][j]);
            } else{
                printf("0 ");
            }
        } printf("\n");
    }
    return 0;
}

int tran()
{
    int x=0;
    printf("\n\n Enter the order of the square matrix");
    scanf("%d",&x);
    int arr[x][x];
    printf("\n\n Enter the elements in the first matrix:\n\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            printf("\tEnter the element at [%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\n The matrix is: \n\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d ", arr[i][j]);
        } printf("\n");
    }
    printf("\n\n The transpose matrix is: \n\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++)
        {
            printf("%d ", arr[j][i]);
        }printf("\n");
    } printf("\n");
    return 0;
}

int multi()
{
    int m, n, p, q, i, j, k, prod = 0;
    int first[10][10], second[10][10], multiply[10][10];
    printf("Enter the number of rows and columns of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d%d", &p, &q);
    if (n != p)
    printf("Matrices with entered orders can't be multiplied with each other.\n");
    else{
        printf("Enter the elements of first matrix\n");
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &first[i][j]);
        printf("Enter the elements of second matrix\n");
        for (i = 0; i < p; i++)
            for (j = 0; j < q; j++)
                scanf("%d", &second[i][j]);

        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < q; j++) 
            {
                prod = 0;
                for (k = 0; k < p; k++)
                {
                    prod = prod + first[i][k]*second[k][j];
                }
                multiply[i][j] = prod;
            }
        }
        printf("Product of entered matrices:-\n");
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < q; j++)
               {
                printf("%d ", multiply[i][j]);
               }
            printf("\n");
        }
    }
    return 0; 
}