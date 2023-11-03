#include<stdio.h>
#include<stdlib.h>

struct SLL
{
 int data;
 struct SLL *link;
};

void SLL_insert_last(struct SLL *head,int data);
void traverse_SLL(struct SLL *head);

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

 SLL_insert_last(head,40);
 traverse_SLL(head);
}

void SLL_insert_last(struct SLL*head,int data)

{
 struct SLL *new = (struct SLL*)malloc(sizeof(struct SLL));
 new->data = data;
 new->link = NULL;

 struct SLL *Temp = NULL;
 Temp= head;
 
 while(Temp->link!=NULL)
 	 Temp = Temp->link;
 Temp->link = new;
}

void traverse_SLL(struct SLL*head)
{
 struct SLL *Temp = NULL;
 Temp=head;
 if(head==NULL)
 {
  printf(" SLL is empty ");
 }
 
 while(Temp!=NULL)
 {
  printf(" %d -->",Temp->data);
  Temp = Temp->link;
 }
 printf("NULL");
}


/* 10 --> 20 --> 30 --> 40 -->NULL */
