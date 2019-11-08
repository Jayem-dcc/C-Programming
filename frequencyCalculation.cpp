///frequency calculation
#include<stdio.h>
int count[100];

int main()
{
    int loopContVar,value,nItem;

    scanf("%d",&nItem);

    for(loopContVar = 0 ; loopContVar <= nItem; loopContVar++)
    {
        scanf("%d",&value);
        count[value]++;
    }

    for(loopContVar = 0 ; loopContVar < 100; loopContVar++)
    {
        if(count[loopContVar] != 0)
            printf("%d arrives %d times\n",loopContVar,count[loopContVar]);
    }


    return 0;
}
