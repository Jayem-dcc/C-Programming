///decimal to hexadecimal conversion
#include<stdio.h>
int main()
{
    int decimalNumber,hexadecimalNumber[100],loopConVar,reminder;

    scanf("%d",&decimalNumber);

    for(loopConVar = 0 ; decimalNumber != 0 ; loopConVar++)
    {
        reminder = decimalNumber % 16;

        hexadecimalNumber[loopConVar] = reminder;

        decimalNumber /= 16;
    }

    for(loopConVar-- ; loopConVar >= 0 ; loopConVar--)
    {
        if(hexadecimalNumber[loopConVar] >= 10)
        /**
                 as the hexadecimal number which are equal or greater than 10, they are
                denoted by
                10 = A,
                11 = B,
                12 = C,
                13 = D,
                14 = E,
                15 = F.
                we know that the ascii value of A is 65,and we put a condition
                if the value of inside the array is more than 10 so need 65 - 10 = 55
                to get the ascii character of hexadecimal values
        */

            printf("%c",hexadecimalNumber[loopConVar] + 55);
        else
            printf("%d",hexadecimalNumber[loopConVar]);
    }
    printf("\n");
    return 0;
}
