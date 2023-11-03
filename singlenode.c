#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *p;
};

int main()

{
 struct node *head =NULL;
 {
  head=(struct node*)malloc(sizeof(struct node));
 }
 head->data = 40;
 head->p =NULL;
 printf("%d",head->data);
}
