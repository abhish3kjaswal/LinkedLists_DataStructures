#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void append();
void deletefront();
void appendend();
void deleteend();
void appendchoice();
void deletechoice();
struct node
{
int data;
struct node* link;
};
struct node* root='\0';
void main()
{
int ch,n;
clrscr();
while(1)
{
printf("\nenter choice:");
printf("\n1 to add at front :\n");
printf("2 to print:\t");
printf("3 to exit:\t");
printf(" 4 delete from front :\n");
printf("5 add at last:\t");
printf("6 delete from last:\n");
printf("7 add at your choice:\t");
printf(" 8 delete on your choice:\t");
scanf("%d",&ch);
switch(ch){
	case 1: append();
		break;
	case 2:
		struct node* p;
		p=root;
		while(p->link!=NULL)
			{

				printf("\tfinal=>%d",p->data);
				p=p->link;
				//printf("\nroot +\n" );
			}
		printf("\tfinal=>%d",p->data);
		 break;
	 case 3: exit(1);
	 case 4: deletefront();
		 break;
	 case 5: appendend();
		break;
	 case 6: deleteend();
		break;
	 case 7: appendchoice();
		break;
	 case 8: deletechoice();
		break;

	 default: printf("invalid choice");
		}
}
//getch();
}
void append()
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter the data in node:");
scanf("%d",&temp->data);
//temp->link='\0';
if(root=='\0')
{
//printf("\nif\n");
temp->link=NULL;
root=temp;
//printf("->%d\n",root->data);
}
else
{
temp->link=root;
root=temp;
//printf("->%d\n",root->data);
}
printf("***** end  *******") ;
}
void deletefront()
{
if(root==NULL)
{
printf("**** EMPTY ****");
}
else
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
temp=root;
root=temp->link;
free(temp);
}
printf("\ndelete from front\n");
}
void appendend()
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data:");
scanf("%d",&temp->data);
if(root==NULL)
{
temp->link=root;
root=temp;
}
else
{
struct node* p;
p=root;
while(p->link!=NULL)
{
p=p->link;
}
p->link=temp;
temp->link=NULL;
}
}
void deleteend()
{
if(root==NULL)
{
printf("** empty ***");
}
else
{
struct node* temp;
struct node* p;
p=root;
temp=(struct node*)malloc(sizeof(struct node));
while(p->link!=NULL)
{
temp=p;
p=p->link;
}
temp->link=NULL;
free(p);
}
printf("\ndelete at end  \n ");
}
void appendchoice()
{
int i;
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter where you want to insert:");
scanf("%d",&i);
printf("\nenter data:");
scanf("%d",&temp->data);
if(root==NULL)
{
temp->link=root;
root=temp;
}
else{
struct node* p;
p=root;
int x=1;
while(x<i-1 && p->link!=NULL)
{
p=p->link;
x++;
}
temp->link=p->link;
p->link=temp;
}
}
void deletechoice()
{
int i,x=1,y=1;
if(root==NULL)
{
printf("**** empty **");
}
else{
struct node* p;
struct node* q;
p=root;
q=root;
printf("enter your choice:");
scanf("%d",&i);
while(x<i-1 && p->link!=NULL)
{
p=p->link;
x++;
}
while(y<i+1 && q->link!=NULL)
{
q=q->link;
y++;
}
p->link=q;
free(q);
}
}