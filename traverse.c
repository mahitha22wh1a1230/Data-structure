#include<stdio.h>
#include<stdlib.h>

struct traverse
{
 int data;
 struct traverse*link;
};

int main()

{
 struct traverse*head = (struct traverse*)malloc(sizeof(struct traverse*));
 head->data = 10;
 head->link = NULL;

 struct traverse*current = (struct traverse*)malloc(sizeof(struct traverse*));
 current->data = 20;
 current->link = NULL;

 head->link = current;

 current = (struct traverse*)malloc(sizeof(struct traverse*));
 current->data = 30;
 current->link = NULL;

 head->link->link = current;

 struct traverse *node = (struct traverse*)malloc(sizeof(struct traverse*));
 node->data = 40;
 node->link = NULL;

 head->link->link->link = node;


 printf(" %d->%d->%d->%d ", head->data,head->link->data,head->link->link->data,head->link->link->link->data);
}

