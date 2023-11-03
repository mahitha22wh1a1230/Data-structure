#include<stdio.h>
#include<stdlib.h>

struct SLL
{
 int data;
 struct SLL*link;
};

int main()
	
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

 printf(" %d->%d->%d ", head->data,head->link->data,head->link->link->data);
}
