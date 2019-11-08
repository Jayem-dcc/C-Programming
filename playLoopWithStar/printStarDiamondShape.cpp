///printStarDiamondShape
#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    //n=5;

    for(i = 0 ; i < n ; i++)
    {
        for(k = 0 ; k < n - i ; k++)
            printf(" ");
        for(j = 0 ; j <= i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(i = 0 ; i < n ; i++)
    {
        for(k = 0 ; k <= i  ; k++)
            printf(" ");

        for(j = 0 ; j <= n - i - 2 ; j++)
        {
            printf(" *");
        }
        printf("\n");

    }
    return 0;
}
