#include<stdio.h>
struct self
{
 int a;
 char c;
 struct self *p;
};

int main()

{
 struct self v;
 v.a =10;
 v.c ='d';
 v.p =NULL;
 
 struct self x;
 x.a = 20;
 x.c = 's';
 x.p = NULL;
 
 struct self y;
 y.a =30;
 y.c ='z';
 y.p = NULL;

 v.p=&x;
 x.p=&y;

 printf("Block-1 %d %c",v.a,v.c);
 printf("\nBlock-2 %d %c",v.p->a,v.p->c);
 printf("\nBlock-3 %d %c",x.p->a,x.p->c);
};
