///not completed yet
#include<stdio.h>
int count[100];

int main()
{
    int loopContVar1,loopContVar2,nItem,value;

    scanf("%d",&nItem);

    for(loopContVar1 = 0; loopContVar1 < nItem ; loopContVar1++)
    {
        scanf("%d",&value);
        count[value]++;
    }


    return 0;
}
