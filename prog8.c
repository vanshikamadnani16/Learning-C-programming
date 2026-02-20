#include <stdio.h>
int main()
{
    int i,n,pos;
    printf("Enter number of elements of an array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter position of element to be deleted:");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}


