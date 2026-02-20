#include <stdio.h>
    int main()
{
    int m,n,x,y,i,j;
    int A[5][5],B[5][5],C[5][5];
    printf("Enter number of rows and columns of first matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter elements of first matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter number of rows and columns of second matrix\n");
    scanf("%d%d",&x,&y);
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    if(n==x)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<y;j++)
            {
                C[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    C[i][j]+=A[i][k]*B[k][j];
                }
            }
        }
        printf("Resultant matrix after multiplication is\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<y;j++)
            {
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication not possible\n");
    }

    return 0;
}
