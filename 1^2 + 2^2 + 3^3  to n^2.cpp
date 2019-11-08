///A program to calculate the sum of the sequence 1^2 + 2^2 + 3^2 + ..... + n^2;
#include<stdio.h>
int main()
{
    int n,i,sum = 0;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i = 1 ; i <= n ; i++)
    {
        sum = sum + i*i;
        printf("%d",i*i);
        if(i != n)
            printf(" + ");
    }
    printf("\n= %d\n",sum);
    return 0;
}
