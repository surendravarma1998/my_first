#include<stdio.h>
#include<string.h>

void main()
{
	char b[100]="varma";
	char c[100]="satish";
	printf("before:%s\n",c);
	
	strcat(c,b);
	printf("after:%s \n",c);
}
