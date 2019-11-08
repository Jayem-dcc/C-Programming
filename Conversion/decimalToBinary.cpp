///decimal to binary conversion
#include<stdio.h>
int main()
{
    int decimalNumber,binaryNumber[100],reminder,loop_c_v;

    scanf("%d",&decimalNumber);             ///input contain a decimal number

    ///this loop will find out the reminder and put them into the array

    for(loop_c_v = 0; decimalNumber != 0 ; loop_c_v++)
    {
        reminder = decimalNumber % 2;       ///we know binary value = 2, so we finding out the reminder by mod 2.

        binaryNumber[loop_c_v] = reminder;  ///putting the reminder into the array named binaryNumber.

        decimalNumber = decimalNumber / 2;  ///decimalNumber is divided by 2 ,as we need to find the binary number.


        /**
        suppose, decimalNumber = 70,then

                      reminder
        70 / 2 = 35     - 0     LSB(least significant bit)
        35 / 2 = 17     - 1
        17 / 2 = 8      - 1
         8 / 2 = 4      - 0
         4 / 2 = 2      - 0
         2 / 2 = 1      - 0
         1 / 2 = 0      - 1     MSB(most significant bit)

        */
    }

    ///this loop for printing the value of array named binaryNumber
    for(loop_c_v --; loop_c_v >= 0 ; loop_c_v--) ///as we need to print the msb first so play the loop reversely
    //while(loop_c_v--)
    {
        printf("%d",binaryNumber[loop_c_v]);
    }
    printf("\n");
    return 0;
}
