#include<stdio.h>

void main()
	{
	int a[10][10],m,i,j;
	printf("\n enter the square matrix order");
	scanf("%d",&m);
	printf("\n enter numbers in matrix");
	for(i=0;i<m;i++)
	for(j=0;j<m;j++)
	scanf("%d",&a[i][j]);
        printf("\n the diagonal elements are\n");
	for(i=0;i<m;i++)
{
	for(j=0;j<m;j++)
{	 
        if(i==j||i+j==(m-1))
	printf("%3d",a[i][j]);
else 
printf(" ");
}
printf("\n");
}
	}
