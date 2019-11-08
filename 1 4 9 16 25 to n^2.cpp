///A program to print 1,4,9,16,15....n^2;
#include<stdio.h>
#include<math.h>
int main()
{
    int n,sroot,i,sum;printf("Sum : %d , n: %d, sroot:  %d, i: %d\n",sum,n,sroot,i);

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i = 1 ; i <= n*n; i++)
    {
        sroot = sqrt(i);
        if(sroot*sroot == i)
            printf("%d ",i);
    }

    printf("\n");
    return 0;
}
