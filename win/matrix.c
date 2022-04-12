#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[3][3],b[3][3],mul[3][3],r=3,c=3,i,j,k;
    printf("enter the element first matrix \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Value[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element second matrix\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Value[%d][%d]: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("first matrix\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
         printf("\n");
    }
    printf("second matrix\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("multiply of the matrix\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            mul[i][j]=0;
            for(k=0; k<c; k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
