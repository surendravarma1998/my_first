#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
int g=0;
void *mythreadfun(void *vargp)
{
int *myid=(int *)vargp;
static int s=0;
++s;++g;
printf("thread id:%d,static:%d,Global:%d\n",*myid,++s,++g);
sleep(50);
//printf("printing geeksquiz from thread\n");
//return NULL;
}
int main()
{
int i;
pthread_t tid;
//pthread_t thread_id;
//printf("before thread \n");
for(i=0;i<10;i++)
//pthread_create(&thread_id,NULL,mythreadfun,NULL);
pthread_create(&tid,NULL,mythreadfun,(void *)&tid);

//pthread_join(thread_id,NULL);
//printf("After thread \n");
pthread_exit(NULL);
return 0;
}
