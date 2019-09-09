#include<stdio.h>
void copystr(char *p,char *q)
{
while(*q)
{
*p++=*q++;
}
*p='\0';
}


void main()
{

	char p[100],q[100];
	printf("\n enter first string \n");
	gets(p);
	printf("\n enter second string \n");
	gets(q);
	copystr(p,q);
	printf("\n copied string is %s",p);
}
	


