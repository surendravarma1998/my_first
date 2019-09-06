#include<stdio.h>
int add(int a,int b)
{
            if(b==0)
               return a;
            else
               return add(a^b,(a&b)<<1);
}
int main()
{
           
            int a,b;
            printf(" enter two numbers: \n ");
            scanf("%d %d",&a,&b);
            
            printf("answer is %d \n",add(a,b));
            return 0;
}
