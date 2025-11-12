#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 

typedef struct node {
 int data; 
 struct node *next; 
 }node;
 
 node *create();
 void disp (node*);
 int search(node*);
 node* insert(node*);
 node* del(node*);
 
int main()
{
 struct node *first=NULL;
int i,n,x,ch,p;
 do
 {
printf("\n ** Select SLL Operation ****");
            printf("\n 1.Create \n 2.Display \n 3.Search \n 4.Insert \n 5.Delete \n 6.Exit ");
            
        printf("\n Enter your Choice:=");
        scanf("%d", &ch);
switch(ch)
{
case 1: first=create();
break;
case 2: disp(first);
break;
case 3: search(first);
break;
case 4: first=insert(first);
break;
case 5: first=del(first);
break;
   }
}
 while(ch!=6);
}
node *create()
{
node *first, *temp, *ptr;
int i,x,n;
first=NULL;
printf("\n Number of items:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n enter data=");
scanf("\n %d",&x);
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=x;
ptr->next=NULL;
if(first==NULL)
{
first=ptr;
}
else
{
temp->next=ptr;
}
 temp=ptr;
}
return(first);
}
//display linked list
void disp(node *temp)
{
while(temp!=NULL)
 {
printf(" %d->", temp->data);
temp=temp->next;
 }
printf("NULL");
 }
// search element in List
 int search(node *temp)
{
int x, index=0;
printf("\n Enter number to search=");
scanf("%d", &x);
while(temp!=NULL && temp->data!=x)
{
temp=temp->next;
index++;
}
if(temp==NULL)
printf("\n %d is not found",x);
else
printf("\n %d is found at location %d", x,index);
 }
 
// Insert element in List
node *insert(node *first)
{
node *temp,*ptr;
temp=first;
int x,pos, i=1;
printf("\n Enter position to insert=");
scanf("%d" ,&pos);
printf("\n Enter data to insert=");
scanf("%d", &x);
while(i<pos &&temp!=NULL )
{
 temp=temp->next;
i++;
}
if (temp != NULL)
{
ptr=(node*)malloc(sizeof(node));
ptr->data=x;
ptr->next=NULL;
if(pos==0)
{
ptr->next=first;
first=ptr;
}
else
{
ptr->next=temp->next;
temp->next=ptr;
 }
 }
 else
printf("\n Invalid Position");
return(first);
}
//Delete element in list
node *del(node *first)
{
node *temp,*prev;
temp=first;
int pos, i=0;
printf("\n Enter node number to delete=");
scanf("%d" ,&pos);
 while(i<pos &&temp!=NULL )
{
 prev=temp;
temp=temp->next;
i++;
}
if (temp != NULL)
{
if(pos==0)
{
first=first->next;
free(temp);
}
else
{
prev->next=temp->next;
free(temp);
}
}
else
printf("\n Invalid Position");
return(first);
}