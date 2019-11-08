///A program to print 1 , 2, 3, 4 ......n
#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter a value: ");
    scanf("%d",&n);

    for(i = 1; i <= n ; i++)
        printf("%d ",i);
    printf("\n");
    return 0;
}
