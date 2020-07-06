#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
typedef struct node NODE;
void main()
{
int item,data,c,ch;
NODE *start=NULL,*newnode,*temp;
//newnode=(NODE*)malloc(sizeof(NODE));
do{
printf("1.Insertion\n2.Deletion\n3.Exit\nEnter your choice:");
scanf("%d",&ch);
newnode=(NODE*)malloc(sizeof(NODE));
switch(ch)
{
case 1:{
printf("Enter the item to be inserted:");
scanf("%d",&item) ;
newnode->data=item;
if(start==NULL)
{
newnode->next=NULL;
start=newnode;
}
else
{
newnode->next=start;
start=newnode;
}
printf("elements in the list are:");
temp=start;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
} break;      }
case 2: {
if(start==NULL)
{printf("List is empty!!");}
else
{
temp=start;
start=temp->next ;
item=temp->data;
free(temp);
}
printf("Items in the list are:");
temp=start;
while(temp!=NULL)
{
printf("%d\t",temp->data) ;
temp=temp->next;
}
break;
}
case 3:{break;}
default:{printf("Wrong choice!!");}
}
printf("To continue press 1");
scanf("%d",&c);
}while(c==1)   ;
getch();
}