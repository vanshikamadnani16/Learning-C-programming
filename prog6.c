#include <stdio.h>
int main()
{
    int arr[10];
    int i,j,n,lo,hi,mid,key,pos,flag=1;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d elements in sorted order\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
lo=0;
hi=n-1;
while(lo<=hi)
{
    mid=(lo+hi)/2;
    printf("Enter element to be searched\n");
    scanf("%d",&key);
    if(arr[mid]==key)
    {
        pos=mid+1;
        flag=0;
        break;
    }
    else if(arr[mid]<key)
    {
        lo=mid+1;
    }
    else
    {
        hi=mid-1;
    }
}
if(flag==0)
    printf("Element found at position %d\n",pos);
else
    printf("Element not found\n");
return 0;
}