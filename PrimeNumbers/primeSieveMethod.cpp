///A program to find out the prime numbers using sieve method where  even numbers are checking separately.
#include<stdio.h>
#include<math.h>
int flag[1000];

int main()
{
    int nItem,loop1,loop2,sum;

    scanf("%d",&nItem);

    sum = sqrt(nItem);

    ///even numbers position are initializing by 1
    for(loop1 = 4 ; loop1 <= nItem; loop1++)
    {
        if(loop1 % 2 == 0)
            flag[loop1] = 1;
    }

    ///checking prime numbers without 2
    for(loop1 = 3; loop1 <= sum; loop1 = loop1 + 2)
    {
        if(flag[loop1] == 0)
        for(loop2 = loop1 + loop1; loop2 <= nItem ; loop2 = loop2 + loop1)
        {
                flag[loop2] = 1;
        }
    }

    for(loop1 = 2 ; loop1 <= nItem ; loop1++)
    {
        if(flag[loop1] == 0)
            printf("%d ",loop1);
    }
    printf("\n");

    return 0;
}
