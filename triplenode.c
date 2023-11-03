#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
};

int main()

{
 struct node *head =NULL;
 head=(struct node*)malloc(sizeof(struct node));
 head->data = 40;
 head->link = NULL;

 printf("%d %d\n",head->data,head->link);

 struct node *new =NULL;
 new=(struct node*)malloc(sizeof(struct node));
 new->data = 50;
 new->link = NULL;

 printf("%d %d\n",new->data,new->link);

 struct node *current =NULL;
 current=(struct node*)malloc(sizeof(struct node));
 current->data = 60;
 current->link = NULL;

 printf("%d %d\n",current->data,current->link);

 head->link=new;
 new->link=current;

 /*head->link->data;
 head->link->link;*/

 printf("%d %d\n",head->link->data, head->link->link);
 printf("%d %d",new->link->data,new->link->link);
}

