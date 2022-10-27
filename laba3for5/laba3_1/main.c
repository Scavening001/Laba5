#include <stdio.h>
#include <stdlib.h>
#include "load.h"
int main()
{
    int c=0,e=1;
    printf("Choose library:\n1-for array.\n2-for matrix,\n3-quit\n");
    while(e)
    {
        scanf("%d",&c);
        if((c<=0)&&(c>=3))
        {
            printf("Error. Try again pls.");
        }
        if(c==1)
        {
            Load("libarray.dll");
        }
        if(c==2)
        {
             Load("libmatrix.dll");
        }
        if(c==3)
            e=0;

    }
    return 0;
}
/* */
//=========================================================================
/*  int B[N];
   int rez=0;
   int buff=-1000;
   for(int i=0;i<N;i++)
   {
      // B[i]=rand() % 101 - 50;
      scanf("%d",&B[i]);
   }
   printf("Array>\n");
   for(int i=0;i<N;i++)
   {
       printf("%d ",B[i]);
   }
    printf("\n");
    for(int i=0;i<N;i++)
    {
        if(B[i]<0&&B[i]>buff)
        {
            buff=B[i];
        }
    }
    for(int i=0;i<N;i++)
    {
        if(B[i]==buff)
        {
           rez+=B[i];
        }
    }*/



/*   int A[a][b];
int rez=0;
int buff=-1000;
for(int i=0; i<a; i++)
{
    for(int j=0; j<b; j++)
    {
        //A[i][j]=rand() % 101 - 50;
        scanf("%d",&A[i][j]);
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

printf("Answer = %d",rez);*/
