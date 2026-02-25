#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10],str3[20];
    int i=0,j=0,k=0;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    // Concatenation
    while(str1[i]!='\0')
    {
        str3[k]=str1[i];
        i++;
        k++;
    }
    str3[k]=' '; // Adding space between two strings
    k++;
    while(str2[j]!='\0')
    {
        str3[k]=str2[j];
        j++;
        k++;
    }
    str3[k]='\0'; // Null-terminating the concatenated string
    printf("Concatenated String: %s\n", str3);
    return 0;
}