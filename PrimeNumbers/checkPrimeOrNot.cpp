//check the given number is prime or not
/**
    1. we know that,those numbers are prime who has only 2 divisors
        -> first one is 1 and second one is that number.

    2. if the given number is divided by any other number except 1 and the given number then it will be called prime number.

    3. so we will check the number by dividing from 2 to less than 1 of that given number.

    4. if the given number is divided by any then we should change the initial value of flag then use the break command to exit the loop.

    5. after the exiting the loop we use if else condition to determine flag's initial value is changed or not,if not change then the
        given number is prime else is not prime.

    6. 2 is the starting number of prime numbers.. for your kind information 0 and 1 are not prime number..
        cause 1 is divided by 1 and itself.
*/
#include<stdio.h>
int main()
{
    int inputNumber,flag = 0,loopContVar;

    scanf("%d",&inputNumber);

    for(loopContVar = 2; loopContVar < inputNumber ; loopContVar++)
    {
        if(inputNumber % loopContVar == 0)///if the reminder is zero
        {
            flag = 1;               ///then the value of flag is changed
            break;                  ///and put a break command to exit the loop
        }
    }

    if(flag == 0)                   ///if the value is prime then the flag will be same as initialized

        printf("The Number: %d is prime.\n",inputNumber);

    else                         ///and if the value is NOT prime then the flag will changed.

        printf("The Number: %d is NOT prime.\n",inputNumber);
    return 0;
}
