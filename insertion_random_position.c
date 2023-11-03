#include<stdio.h>
#include<stdlib.h>

struct SLL
{
 int data;
 struct SLL *link;
};

void traverse_SLL(struct SLL *head);
void add_at_pos(struct SLL *head, int data, int pos);

void main()
{
 struct SLL *head = (struct SLL*)malloc(sizeof(struct SLL));
 head->data = 10;
 head->link = NULL;

 struct SLL *current = (struct SLL*)malloc(sizeof(struct SLL));
 current->data = 20;
 current->link = NULL;

 head->link = current;

 current = (struct SLL*)malloc(sizeof(struct SLL));
 current->data = 30;
 current->link = NULL;

 head->link->link = current;

 add_at_pos(head,40,3);
 traverse_SLL(head);
}

void traverse_SLL(struct SLL *head)
{
 struct SLL *Temp = NULL;
 Temp=head;
 if(head==NULL)
 	printf(" SLL is empty ");
 while(Temp!=NULL)
 {
  printf(" %d -->",Temp->data);
  Temp = Temp->link;
 }
 printf("NULL");
}

void add_at_pos(struct SLL *head, int data, int pos)
{
 struct SLL *Temp = NULL;
 Temp = head;
 struct SLL *new = (struct SLL*)malloc(sizeof(struct SLL));
 new->data = data;
 new->link = NULL;
 
 while(pos!=2)
 {
  Temp = Temp->link;
  pos--;
 }
 new->link = Temp->link;
 Temp->link = new;
}

	
/* 10 --> 20 --> 40 --> 30 -->NULL */
