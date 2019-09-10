#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* link;
};
void printlist(struct node* n)
{
while(n!=NULL)
{
printf("%d ",(*n).data);
n=(*n).link;
}
}
int main()
{
 struct node* temp=NULL;
 struct node* temp1=NULL;
 struct node* temp2=NULL;
 
 temp=(struct node*)malloc(sizeof(struct node));
 temp1=(struct node*)malloc(sizeof(struct node));
 temp2=(struct node*)malloc(sizeof(struct node));
 (*temp).data=2;
 (*temp).link=temp1;
 
 (*temp1).data=4;
 (*temp1).link=temp2;

 (*temp2).data=6;
 (*temp2).link=NULL;

 printlist(temp);
}
