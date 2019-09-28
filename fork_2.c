#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
int cpid=fork();
if(cpid==0)
printf("Hello i am a child\n");
else
printf("hello i am a parent\n");
return 0;
}
