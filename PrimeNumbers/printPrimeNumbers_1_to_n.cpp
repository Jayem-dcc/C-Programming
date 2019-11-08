///print the prime numbers 1 to n

#include<stdio.h>
int main()
{
    int nNumber,flag = 0,loopContVar1,loopContVar2,count=0;

    scanf("%d",&nNumber);

    /// 2 is the starting number of prime numbers.. for your kind information 0 and 1 are not prime number..
    /// cause 1 is divided by 1 and itself.
    for(loopContVar1 = 2 ; loopContVar1 <= nNumber; loopContVar1++)
    {
        flag = 0;           ///most important!!! initialize here otherwise only 2 and 3 will be printed..

        for(loopContVar2 = 2; loopContVar2 < loopContVar1; loopContVar2++)
        {
            if(loopContVar1 % loopContVar2 == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            {
                printf("%d ",loopContVar1);
                count++;
            }
    }
    printf("\n\n\nTotal prime number is: %d till 2 to %d\n",count,nNumber);
    return 0;
}
