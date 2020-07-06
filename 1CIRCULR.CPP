#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void addbeg();
void print1();
void deletebeg();
void addend();
void deleteend();
struct node
{
int data;
struct node* link;
};
struct node* root;
void main()
{
clrscr();
int ch;
while(1)
{
printf("\n1 to add element at begining:\t");
printf("2 to print elements:\t");
printf("3 to exit:\t");
printf("4 to delete at begining:\t");
printf("5 to add element at end:\t");
printf("6 to delete element at end:\t");
printf("\n *** ENTER CHOICE *** :");

scanf("%d",&ch);
switch(ch){
		case 1:	addbeg();
			break;
		case 2:	print1();
			break;
		case 3:	exit(1);

		case 4: deletebeg();
			break;

		case 5:	addend();
			break;
		case 6:	deleteend();
			break;

		default: printf(" +++ INVALID OPTION +++");

	     }
}
}
void addbeg()
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("\n Enter data :");
scanf("%d",&temp->data);
if(root==NULL)
{
root=temp;
temp->link=root;
}
else
{
struct node* p;
p=root;
while(p->link!=root)
{
p=p->link;
}
temp->link=root;
root=temp;
p->link=root;
}
}
void print1()
{
struct node* p;
p=root;
printf("elements:\n");
while(p->link!=root)
{
printf("\t-> %d",p->data);
p=p->link;
}
printf("\t-> %d",p->data);
}
void deletebeg()
{
	if(root==NULL)
	{
		printf(" /////*** EMPTY  ///****");
	}
	else
	{
		struct node* p;
		p=root;
		while(p->link!=root)
			{
				p=p->link;
			}
		root=root->link;
		p->link=root;

		printf("\n deleted from begining");

		}
}
void addend()
{

struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data:");
scanf("%d",&temp->data);
if(root==NULL)
{
root=temp;
temp->link=root;
}
else
{
struct node* p;
p=root;
while(p->link!=root)
{
p=p->link;
}
temp->link=root;
p->link=temp;
}
}
void deleteend()
{
printf("*** deletion at end ***");
if(root==NULL)
{
printf("****empty****");
}
else
{
struct node * p;
struct node* temp;
p=root;
while(p->link!=root)
{
temp=p;
p=p->link;
}
temp->link=root;
free(p);
}
}