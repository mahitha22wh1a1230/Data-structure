#include<stdio.h>
#define MAX_SIZE 5
int stack[MAX_SIZE];
int top=-1;

int isEmpty()
{
 return top==-1;
}
int isFull()
{
 return top==MAX_SIZE-1;
}
int peek()
{
 if (isEmpty())
     printf("The stack is Empty\n");
 else
     return stack[top];
}
int push(int value)
{
 if(isFull())
    printf("The stack is full\n");
 else
    return stack[++top]=value;
}
int pop()
{
 if(isEmpty())
    printf("The stack is empty\n");
 else
    return stack[top--];
}
int display_stack()
{
 int i;
 if(isEmpty())
    printf("The stack is Empty\n");
 else
    for(i=top;i>=0;i--)
 {
  printf("%d\n",stack[i]);
 }
}
int main()
{
 push(10);
 push(20);
 push(30);
 push(40);
 printf("Elements before pop operation\n");
 display_stack();
 printf("Peek value:%d",peek());
 printf("\nPopped Element:%d",pop());
 printf("\nPeek value:%d",peek());
 printf("\nPopped Element:%d",pop());
 printf("\nElements after pop operation\n");
 display_stack();
 if(isEmpty())
    printf("The stack is empty");
 else
    printf("The stack is not empty");
}


/* Elements before pop operation
40
30
20
10
Peek value:40
Popped Element:40
Peek value:30
Popped Element:30
Elements after pop operation
20
10
The stack is not empty */
