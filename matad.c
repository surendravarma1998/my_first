#include<stdio.h>
int add(int a[2][2],int b[2][2])
{
int i,j;
   for(i=0;i<2;i++)
     {
           for(j=0;j<2;j++)
               {
                  printf("%3d ",a[i][j]+b[i][j]);
               }
           printf("\n");
     }
}

int main()
{
              int p[2][2]={1,2,3,4};
              int q[2][2]={1,2,3,4};
              add(p,q);
return 0;
}

