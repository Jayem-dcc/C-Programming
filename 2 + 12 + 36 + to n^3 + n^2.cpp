/**
A program to calculate the sum of the following sequence
    1^2 * 2 + 2^2 * 3 + 3^2 * 4 + n^2 * (n + 1)
            or
    2 + 12 + 36 + 80 + n^3 + n^2;
*/
#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i = 1 ; i <= n ; i++)
    {
        sum = sum + i*i * (i + 1);
        printf("%d*%d",i*i,i+1);
        if(i != n)
            printf(" + ");
    }
    printf("\n= %d\n",sum);
    return 0;
}
