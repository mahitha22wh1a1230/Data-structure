#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *p;
};

void display(struct node *head);
void search(struct node *head);

void main()
{
 struct node *head=(struct node*)malloc(sizeof(struct node*));
 head->data=10;
 head->p=NULL;

 struct node *current=(struct node*)malloc(sizeof(struct node *));
 current->data=20;
 current->p=NULL;

 head->p=current;
 
 current=(struct node*)malloc(sizeof(struct node*));
 current->data=30;
 current->p=NULL;

 head->p->p=current;

 current=(struct node*)malloc(sizeof(struct node*));
 current->data=40;
 current->p=NULL;

 head->p->p->p=current;
 
 printf("List :\n");
 display(head);
 search(head);
}

void display(struct node *head)
{
 struct node *temp=head;
 while(temp!=NULL)
 {
  printf("%d -> ",temp->data);
  temp=temp->p;
 }
 printf("NULL\n");
}

void search(struct node *head)
{
 int select=40,c=0;
 struct node *temp=head;
 while(temp!=NULL)
 {
  c++;
  if(temp->data==select)
  printf("Search is found at %d , search element=%d\n",c,temp->data);
  temp=temp->p;
 }
} 
