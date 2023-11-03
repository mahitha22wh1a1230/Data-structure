#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *link;
};

void traverse_node(struct node *head);
void del_pos(struct node *head, int pos);

void main()
{
 struct node *head = (struct node*)malloc(sizeof(struct node));
 head->data = 10;
 head->link = NULL;

 struct node *current = (struct node*)malloc(sizeof(struct node));
 current->data = 20;
 current->link = NULL;

 head->link = current;

 current = (struct node*)malloc(sizeof(struct node));
 current->data = 30;
 current->link = NULL;

 head->link->link = current;

 printf("Before deleting the random position\n");
 traverse_node(head);
 printf("After deleting the random position\n");
 del_pos(head,2);
 traverse_node(head);
}

void traverse_node(struct node *head)
{
 struct node *Temp = NULL;
 Temp=head;
 if(head==NULL)
 {
  printf(" node is empty ");
 }
 
 while(Temp!=NULL)
 {
  printf(" %d -->",Temp->data);
  Temp = Temp->link;
 }
 printf("NULL\n");
}

void del_pos(struct node *head, int pos)
{
 struct node *current = head;
 struct node *previous = head;
 if (head == NULL)
 {
  printf("list is empty");
 }
 else if(pos == 1)
 {
  head = current->link;
  free(current);
  current = NULL;
 }
 else
 {
  while(pos!=1)
  {
   previous = current;
   current = current->link;
   pos--;
  }
  previous->link = current->link;
  free(current);
  current = NULL;
  }
}

/* Before deleting the random position
 10 --> 20 --> 30 -->NULL
 After deleting the random position
 10 --> 30 -->NULL
*/

