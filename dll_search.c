#include<stdio.h>
#include<stdlib.h>

struct node
{
 struct node *prev_link;
 int data;
 struct node *next_link;
};

void display(struct node *head);
void search(struct node *head);

void main()
{
 struct node *head=(struct node*)malloc(sizeof(struct node*));
 head->prev_link=NULL;
 head->data=10;
 head->next_link=NULL;

 struct node *current=(struct node*)malloc(sizeof(struct node *));
 current->prev_link=NULL;
 current->data=20;
 current->next_link=NULL;

 head->next_link=current;
 
 current=(struct node*)malloc(sizeof(struct node*));
 current->prev_link=NULL;
 current->data=30;
 current->next_link=NULL;

 head->next_link->next_link=current;

 display(head);
 search(head);
}

void display(struct node *head)
{
 struct node *temp=head;
 while(temp!=NULL)
 {
  printf("%d -> ",temp->data);
  temp=temp->next_link;
 }
 printf("NULL\n");
}

void search(struct node *head)
{
 int select;
 printf("Enter a search element=");
 scanf("%d",&select);
 int c=0;
 struct node *temp=head;
 while(temp!=NULL)
 {
  if(temp->data==select)
  {
	  c++;
   printf("Search is found at %d , search element=%d\n",c,temp->data);
    exit(0);
  }
  else
  {
   temp=temp->next_link;
  }
 }  
 printf("search element is not found");
}


/* 10 -> 20 -> 30 -> NULL
Enter a search element=30
Search is found at 1 , search element=30 */
