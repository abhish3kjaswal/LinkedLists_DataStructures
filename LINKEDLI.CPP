#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
 int data;
 struct node *next;
 };
 typedef struct node NODE;
 void main()
 {
 clrscr();
  int i,pos,item,c;
  NODE *start=NULL,*temp,*newnode;
 // newnode=(NODE*)malloc(sizeof(NODE));
  do{
  printf("ENTER THE ELEMENT TO BE INSERTED:");
  scanf("%d",&item);
  printf("enter the position");
  scanf("%d",&pos);
  newnode=(NODE*)malloc(sizeof(NODE));
  newnode->data=item;

  if(start==NULL)
  {
   newnode->next=NULL;
    start=newnode;
   temp=start;
    printf(" %d",temp->data);
    }
    else{
     temp=start;
     while(i<pos-1 && temp!=NULL)
     {
      temp=temp->next;
      i++;
      }
      newnode->next=temp->next;
      temp->next=newnode;
   // newnode->next=start;
   // start=newnode;

    temp=start;
    while(temp->next!=NULL)
    {

     printf(" %d",temp->data);
     temp=temp->next;
     }   }
     printf("press 1 to continue");
     scanf("%d",&c); }
     while(c==1);
     getch();
     }
