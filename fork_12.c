#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
void *f1(void *);

int main(int argc, char* argv[]){
char* msg[]={"thread1","THREAD2","Thread3","thread 4","thread 5"};
pthread_t tids[5];
for(int i=0;i<5;i++)
{
pthread_create(&tids[i],NULL,f1,(void*)msg[i]);
pthread_join(tids[i],NULL);
}
printf("main() : REporting that all threads have terminated\n");
exit(0);
}
void * f1(void *arg){
printf("I am a child %s\n",(char *)arg);
pthread_exit(NULL);
}
