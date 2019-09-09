#include<stdio.h>
void main()
{
	char *name[]={"satish","varma","prabhas"};
	printf("%s \n",*(name+2)+3);
}
