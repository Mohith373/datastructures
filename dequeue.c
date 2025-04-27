#include<stdio.h>
#include<conio.h>
#define MAX 5
int dq[MAX],f=-1,r=-1;
void display()
{
int i;
if(f==-1&&r==-1)
printf("queue is empty\n");
else
{
printf("queue:\n");
for(i=f;i<=r;i++)
printf("\t%d",dq[i]);
}
}
void insert_rear()
{
int value;
if(r==MAX-1)
printf("queue is full at rear\n");
else
{
printf("element to be inserted is:\n");
scanf("%d",&value);
dq[++r]=value;
if(f==-1)
f++;
}
}
void delete_rear()
{
if(r==-1)
printf("queue is empty at rear\n");
else
{
printf("elemente deleted is %d\n",dq[r]);
r--;
}
}

void insert_front()
{
int value;
if(f==-1&&r==MAX-1)
printf("queue is full at front\n");
else if(f==0||f==-1)
printf("not possible to insert element at front\n");
else
{
printf("element to be inserted:\n");
scanf("%d",&value);
f--;
dq[f]=value;
}
}
void delete_front()
{
if(f==-1 && r==-1)
printf("queue is empty at front\n");
else
{
printf("deleted element is %d\n",dq[f]);
f++;
}
}
void main()
{
int ch;
while(1)
{
printf("\n1.insert at front\n2.delete at front\n3.insert at rear\n4.delete at rear\n5.display\n");
printf("\nEnter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:insert_front();break;
case 2:delete_front();break;
case 3:insert_rear();break;
case 4:delete_rear();break;
case 5:display();break;
default: printf("Enter wrong choice");

}
} }