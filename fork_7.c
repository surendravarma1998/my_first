#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
if(argc!=2)
{
fprintf(stderr,"incorrect number of arguments. Please pass one integer\n");
return 1;
}
int n=atoi(argv[1]);
int i;
for(i=1;i<=n;i++)
if(fork() !=0)
break;
fprintf(stderr,"PID=%ld,PPID=%ld\n",(long)getpid(),(long)getppid());
while(1);
return 0;
}
