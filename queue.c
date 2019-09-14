#include<stdio.h>
#include<stdlib.h>
int queue[10];
int front=-1,rear=-1;
void enqueue(int n)
{
if(front==-1 && rear==-1)
{
front=0;
queue[++rear]=n;
}
else if(rear==9)
printf("\nQueue Full\n");
else
{
queue[++rear]=n;
}
}
void dequeue()
{
if(front==rear)
{
front=-1;
rear=-1;
}
else if(front==-1)
printf("\nQueue Empty\n");
else
front++;
}
void display()
{
int i;
if(front==-1 && rear ==-1)
printf("\nQueue Empty\n");
else
{
for(i=front;i<=rear;i++)
printf("%d ",queue[i]);
printf("\n");
}
}
void main()
{
int i,n;
while(1)
{
printf("Enter your Choice: 1)Enqueue 2)Dequeue 3)display 4)exit : ");
scanf("%d",&i);
switch(i)
{	
case 1:
printf("Enter Data: ");
scanf("%d",&n);
enqueue(n);
break;
case 2:
dequeue();
printf("\n");
break;
case 3:
display();
printf("\n");
break;
case 4:
exit(0);
default:
printf("Enter correct Choice\n");
}
}
}
