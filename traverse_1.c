#include<stdio.h>
#include<stdlib.h>

struct SLL
{
 int data;
 struct SLL*link;
};

void traverse_SLL(struct SLL*head);
void main()

{
 struct SLL*head = (struct SLL*)malloc(sizeof(struct SLL*));
 head->data = 10;
 head->link = NULL;

 struct SLL*current = (struct SLL*)malloc(sizeof(struct SLL*));
 current->data = 20;
 current->link = NULL;

 head->link = current;

 current = (struct SLL*)malloc(sizeof(struct SLL*));
 current->data = 30;
 current->link = NULL;

 head->link->link = current;

 traverse_SLL(head);
}

void traverse_SLL(struct SLL*head)

{
 struct SLL*Temp = NULL;
 Temp = head;
 if(head==NULL)
 {
  printf(" SLL is empty ");
  exit(0);
 }
 while(Temp!=NULL)
 {
 printf(" %d ", Temp->data);
 printf(" %d ", Temp->link);
 
i Temp = Temp->link;
 }
}



/*10  968143552  20  968143584  30  0 */
