
 #include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};


void
insert_end (struct Node **head, int new_data)
{

struct Node *new_node = (struct Node *) malloc (sizeof (struct Node));
struct Node *last = *head;
new_node->data = new_data;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return;
}
while (last->next != NULL)
last = last->next;
last->next = new_node;
//free(new_node);
return;
}

void
insert_begin (struct Node **head, int new_data)
{
struct Node *new_node = (struct Node *) malloc (sizeof (struct Node));
new_node->data = new_data;
new_node->next = *head;
*head = new_node;
//free(new_node);
return;
}

void
insert_after (struct Node **head, int new_data, int pos)
{
struct Node *new_node = (struct Node *) malloc (sizeof (struct Node));
struct Node *prev = (struct Node *) malloc (sizeof (struct Node));
new_node->data = new_data;
prev = *head;
while (--pos)
{

prev = prev->next;
}
new_node->next = prev->next;
prev->next = new_node;
//free(new_node);
//free(prev);
return;
}


void delete_number(struct Node **head, int new_data)
{
struct Node *temp = (struct Node *) malloc (sizeof (struct Node));
struct Node *prev = (struct Node *) malloc (sizeof (struct Node));
temp=*head;
prev=*head;
while(temp->data!=new_data)
{
prev=temp;
temp=temp->next;

}
prev->next=temp->next;
temp->next=NULL;
//free(temp);
//free(prev);
return;
}

void delete_position(struct Node **head,int pos)
{
struct Node *temp = (struct Node *) malloc (sizeof (struct Node));
struct Node *prev = (struct Node *) malloc (sizeof (struct Node));
prev=*head;
temp=*head;
if(pos==1)
{
temp=temp->next;

*head=temp;
//free(temp);
}
else
{
while (--pos)
{
prev=temp;
temp = temp->next;
}
prev->next=temp->next;
temp->next=NULL;
//free(temp);
//free(prev);
}
return;
}

void
printlist (struct Node *node)
{
printf("OUTPUT:");
while (node != NULL)
{
printf ("%d ", node->data);
node = node->next;
}
printf("\n");
return;
}

void print_rec(struct Node *node)
{

if(node==NULL)
return;
else
{
printf("%d ",node->data);
node=node->next;
print_rec(node);	
}
return;

}

void
main ()
{
struct node *head = NULL;
int n, pos,ch;


while(1)
{
printf ("1.insert at end:\n2.insert at beginning\n3.insert after position\n4.print\n5.delete a number\n6.delete at position\n7.Recursive print\n8.exit\nEnter your choice:\n");
scanf("%d",&ch);

switch(ch)
{
case 1:printf ("enter the numbers to insert :");
scanf ("%d", &n);
insert_end (&head, n);
break;
case 2:
printf ("\nenter a number to insert at begin:");
scanf ("%d", &n);
insert_begin (&head, n);
break;
case 3:
printf ("\nenter a number and a position to insert after:");
scanf ("%d%d", &n, &pos);
insert_after (&head, n, pos);
break;
case 4:
printlist (head);
break;

case 5:
printf("enter a number in the list to delete:");
scanf("%d",&n);
delete_number(&head,n);
break;
case 6:
printf("enter a position in the list to delete:");
scanf("%d",&pos);
delete_position(&head,pos);
break;
case 7:
printf("OUTPUT IN RECURSION:");
print_rec(head);
printf("\n");
break;
case 8:
exit(1);
}
}


}
