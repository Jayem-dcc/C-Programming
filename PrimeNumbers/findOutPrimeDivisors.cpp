/**cOmPlEtE
"A PROGRAM TO FIND OUT PRIME DIVISORS."

Prime numbers are those numbers who are divided by 1 and itself.

Now we are going to find out the prime divisors,suppose for n = 50.

(70)
= 1 x 70
= 2 x 35
= 5 x 14
= 7 x 10

that's it.
 -> 1,2,5 and 7 are divisors for the number 70. and without 1
it's the list of prime divisors.

For this at first we need a list of prime numbers ,so that we can check to
find the divisors by the only prime number.

After doing this we need a list to find which are the prime divisors for that number.

*/

#include<stdio.h>
#include<math.h>
int flag[1000];

int main()
{
    int n,loop1,loop2,prime[1000],pCount = 1;

    scanf("%d",&n);

    ///even number's position are initializing by 1
        for(loop2 = 4 ; loop2 <= n ; loop2++)
        {
            if(loop2 % 2 == 0)
                flag[loop2] = 1;
        }

        ///initializing by 0 who are not prime numbers
    for(loop1 = 3; loop1 <= sqrt(n) ; loop1 = loop1 + 2)
    {
        if(flag[loop1] == 0)
        for(loop2 = loop1 + loop1 ; loop2 <= n ; loop2 = loop2 + loop1)
        {
            flag[loop2] = 1;
         //   printf("flag: %d\n",loop2);
        }
    }

    ///whose position in flag array is zero are stored in the prime array.
    for(loop1 = 1; loop1 <= n ; loop1++)
    {
        if(flag[loop1] == 0)
        {
            prime[pCount] = loop1;
            pCount++;
        }
    }

    ///finding out the n's prime divisors.
    for(loop1 = 2 ; prime[loop1] ; loop1++)
    {
        if(n % prime[loop1] == 0)
            printf("%d ",prime[loop1]);
    }

    printf("\n");
    return 0;
}
