#include<stdio.h>

void main()
{
	int i,j,k;
	for(k=0;k<3;k++)
	{
	for(j=2;j>=0;j--)
	{
	for(i=0;i<j;i++)
	{
	printf(" ");
	}
	printf("*");
	}
	printf("\n");
	}
}
