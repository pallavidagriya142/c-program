#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10
void push();
void pop();
void display();
int a,top,item,i,stack[max];
int s1;
void main()
{
clrscr();
s1:printf("Enter your choice \n1.push \n2.pop \n3.display \n4.exit");
scanf("%d",&a);
switch(a)
{
case 1:push();
	break;
case 2:pop();
	break;
case 3:display();
	break;
case 4:exit(0);
	break;
default: printf("wrong choice");
}
getch();
goto s1;
}
void push()
{
if(top==max-1)
{
printf("overflow");
}
else
{
printf("Enter the no");
scanf("%d",&item);
top++;
stack[top]=item;
}
}
void pop()
{
if(top==-1)
{
printf("underflow");
}
else
{
item=stack[top];
top=top-1;
printf("%d is deleted",item);
}
}
void display()
{
if(top==-1)
{
printf("stack is empty");
}
else
{
for(i=top;i>0;i--)
{
printf("\n%d",stack[i]);
}
}
}