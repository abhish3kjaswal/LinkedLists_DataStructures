#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void addbeg();
void print();
void delbeg();
void addend();
void delend();
void addi();
void deli();
struct node{
int data;
struct node * prev;
struct node * link;
};
struct node * root;
void main()
{
clrscr();
int ch;
while(1){
printf("\nEnter choice:\n");
printf("1 to add at begining\t");
printf("2 to print the linked list\t");
printf("3 to exit\t");
printf("4 to delete from beg\t");
printf("5 to add at end \t");
printf("6 to delete at end \t");
printf("7 to add at  \t");
printf("8 to delete at \t:");
scanf("%d",&ch);
	switch(ch){
		case 1: addbeg();
			break;
		case 2: print();
			break;
		case 3: exit(0);
			 break;
		case 4: delbeg();
			break;
		case 5: addend();
			break;
		case 6: delend();
			break;
		case 7: addi();
			break;
		case 8: deli();
			break;
		default: printf("wrong choice");
		}
	}
}
void addbeg()
{
struct node * temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("\n Enter the data:");
scanf("%d",&temp->data);
	if(root==NULL){
			temp->prev=NULL;
			temp->link=NULL;
			root=temp;
			}
	else{
	      temp->link=root;
	      temp->prev=NULL;
	      root->prev=temp;
	      root=temp;
		}
printf("\n element added at begining");
}
void print(){

	struct node* p;
	p=root;
	while(p->link!=NULL){
				printf(" ->%d",p->data);
				p=p->link;
			     }
	printf(" ->%d",p->data);
}
void delbeg()
{
	if(root==NULL){
				printf("\n ****** empty ***** \n");
			}
	else{
		struct node* p;
		p=root;
		root=root->link;
		root->prev=NULL;
		free(p);
	      }
printf("\element deleted from beg");
}
void addend()
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("\nEnter data:");
scanf("%d",&temp->data);
	if(root==NULL){
		temp->prev=NULL;
		temp->link=NULL;
		root=temp;
	  }
	else{
		struct node* p;
		p=root;
		while(p->link!=NULL){
			p=p->link;
		}
		temp->prev=p;
		temp->link=NULL;
		p->link=temp;

	}
printf("\n element added at end");
}
void delend()
{
if(root==NULL)
{
	printf("\n *** empty **** \n");
}
else{
    struct node* p;
    struct node* q;
    p=root;
    while(p->link!=NULL)
    {
    q=p;
    p=p->link;
    }
    q->link=NULL;
    free(p);
}
printf("\nelement deleted at end");
}
void addi()
{
int i;
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("\n enter data :");
scanf("%d",&temp->data);
printf("\n enter position:");
scanf("%d",&i);
if(root==NULL)
	{
		temp->prev=NULL;
		temp->link=NULL;
		root=temp;
	}
else{
struct node* p;
struct node* q;
p=root;
int x=0;
while(p->link!=NULL && x<i-1){
 q=p;
 p=p->link;
 x++;
}
q->link=temp;
p->prev=temp;
temp->link=p;
temp->prev=q;

}

}
void deli()
{
if(root==NULL)
{
printf("\n **** empty ***");
}
else{

	int i;
	printf("\n enter position:");
	scanf("%d",&i);
	struct node* p;
	struct node* q;
	struct node* r;
	p=root;
	int x=0;
	while(p->link!=NULL && x<i-1)
	{
		q=p;
		p=p->link;
		x++;
	}
	r=p->link;
	q->link=r;
	r->prev=q;
	free(p);

}
	  printf("\n *** deleted at specific position***");
}
