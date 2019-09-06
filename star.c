#include<stdio.h>

int main()
{
         int a[5],b[5],i;
         printf("\n enter the list of numbers: ");
         for(i=0;i<5;i++)
           scanf("%d",&a[i]);
         for(i=0;i<5;i++)
            b[i]=a[i]*a[i];
              printf("\n squares of numbers are: ");
               for(i=0;i<5;i++)
             printf("%d\n",b[i]);
return 0;
}
