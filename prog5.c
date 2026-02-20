#include <stdio.h>
int main()
{
    int i,n,key,pos,flag=1;
    int arr[10];
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d", &key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            pos=i+1;
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("Element found at position %d", pos);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}