///A program to print 2,4,6,8....n.(even numbers);
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n: ");

    scanf("%d",&n);

    for(i = 0 ; i < n ; i++)
        if(i % 2 == 0)
        printf("%d ",i);
    printf("\n");

    return 0;
}
