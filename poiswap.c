#include<stdio.h>

void swap(int *a,int *b)
{

*a=*a^*b;
*b=*b^*a;
*a=*a^*b;

}

void main()
{

int a=1,b=2;
printf("before swap:a=%d b=%d\n",a,b);
swap(&a,&b);
printf("after swap:a=%d b=%d\n",a,b);
}

