#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void addbeg();
void print();
struct node{
int data;
struct node* prev;
struct node* link;
};
struct node* root;
void main()
{
clrscr();
int ch;
while(1){

printf("enter choice 1 to add 2 to print 3 to exit:");
scanf("%d",&ch);
switch(ch){
	case 1: addbeg();
		break;
	case 2: print();
		break;
	case 3: exit(0);
		break;
	default: printf9"invalid"
}
}
}
void addbeg(){
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data :");
scanf("%d",&temp->data);
if(root==NULL){
temp->prev=temp;
temp->link=temp;
root=temp;
}
else{
temp->link=root;
temp->prev=root->link;
root->prev=temp;
root=temp;
}
}
void print()
{
struct node* p;
p=root;
while(p->link!=root)
{
printf("-> %d",p->data);
p=p->link;
}
printf("-> %d",p->data);
}