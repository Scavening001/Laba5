#include"func.h"
#define a 7
#define b 8
void func()
{
    int A[a][b];
    int rez=0;
    int buff=-1000;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            A[i][j]=rand() % 101 - 50;
            //scanf("%d",&A[i][j]);
        }
    }
    printf("\n Matrix>\n");
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            printf("%5d",A[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(A[i][j]<0&&A[i][j]>buff)
            {
                buff=A[i][j];
            }
        }
    }

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(A[i][j]==buff)
            {
                rez+=A[i][j];
            }
        }
    }

    printf("Answer = %d",rez);
}
