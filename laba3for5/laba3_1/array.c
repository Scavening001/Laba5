#include "func.h"
#define N 76
void func()
{
    int B[N];
    int rez=0;
    int buff=-1000;
    for(int i=0; i<N; i++)
    {
         B[i]=rand() % 101 - 50;
       // scanf("%d",&B[i]);
    }
    printf("Array>\n");
    for(int i=0; i<N; i++)
    {
        printf("%d ",B[i]);
    }
    printf("\n");
    for(int i=0; i<N; i++)
    {
        if(B[i]<0&&B[i]>buff)
        {
            buff=B[i];
        }
    }
    for(int i=0; i<N; i++)
    {
        if(B[i]==buff)
        {
            rez+=B[i];
        }

    }
    printf("Answer = %d",rez);
}
