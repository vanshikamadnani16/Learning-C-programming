#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,p;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            p=i*j;
            printf("%d*%d=%d\n", i,j,p);
        }
    }
    getch();
}