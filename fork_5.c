#include<stdio.h>
#include<unistd.h>


int main()
{
int i,cpid,ctr=0;
cpid=fork();
if(cpid==0){
ctr=1000;
for(i=0;i<3;i++)
 printf("child counter is %d \n",ctr++);
}
else{
for(i=0;i<3;i++)
 printf("parent counter is %d \n",ctr++);
}
return 0;
}
