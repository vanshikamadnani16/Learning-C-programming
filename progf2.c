#include<stdio.h>
int power(int, int);
int main()
{
    int base, exponent, result;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    result = power(base, exponent);
    printf("%d raised to the power of %d is %d\n", base, exponent, result);
    return 0;
}
int power(int b, int e)
{
    if(e == 0)
        return 1;
    else
        return b * power(b, e - 1);
}