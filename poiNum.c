#include<stdio.h>
void main()
{
int a=10;
int *p;
int *pp;
p=&a;
pp=&p;
printf("%d  %u  %u  %d  %d ",a,p,pp,*p,**pp);
}
/* int a[]={10,20,30,40,50,60};
int *p[]={a,a+1,a+2,a+3,a+4,a+5};
int **pp=p;
printf("%d %d %d",pp-p,*pp-a,**pp);
} */
