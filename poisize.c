#include<stdio.h>
void A(int n)
{
if(n>0)
{	
printf("%d ",n);
A(n-1);
printf("%d ",n);
}
}
void main()
{
A(3);
}
