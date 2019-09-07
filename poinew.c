#include<stdio.h>

void main()
{
char b[6]="world";
	int i,j;
	for(i=0,j=5;i<j;b[i++]=b[j--])
	printf("%s",b);

printf("\n %s",b);
printf("%d",printf("world"));
}
