#include<stdio.h>
#include<stdlib.h>

# define SIZE 10

int disp();
int pop();
int push();
int isEmpty();
int isFull();

int stack[SIZE];
int top = -1;

int main()
{
	int ch;
	while(1)
	{
		printf("\n ******* Select Stack Operation******");
		printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit");
		
		printf("\n Enter your Choice =");
		scanf("%d",&ch);
		switch(ch)
		{
		 case 1:push();
		 break;
		 case 2:pop();
		 break;
		 case 3:disp();
		 break;
		 case 4:exit(0);
		 break;
		}
	}
	return 0;
}
	 int isEmpty()
	 {
	 	if(top==-1)
	 	return 1;
	 	else
	 	return 0;
	 }
	 
	 int isFull()
	 {
	 	if(top == SIZE-1)
	 	return 1;
	 	else
	 	return 0;
	 }
	 
	 int push(){
	 	int item;
	 	if(isFull()){
		 printf("Stack is full! cannot push");
	 }
	 else
	 {
	 	printf("Enter element in stack =");
	 	scanf("%d",&item);
	 	top++;
	 	stack[top]=item;
	 }
}
	 int pop()
	 {
	 	int popped_item;
	 	if(isEmpty()){
	 		printf("Stack Underflow!cannot pop from empty stack.\n");
	 		
		 }
		 else{
		 	popped_item=stack[top];
		 	top--;
		 	printf("Popped element is %d",popped_item);
		 }
	 }
	 int disp()
	 {
	 	int i;
	 	if(isEmpty()){
	 		printf("Stack is empty.\n");
	 		
		 }
		 else
		 {
		 	printf("Element in stack:");
		 	for(i=top;i>=0;i--)
		 	{
		 		printf("%d",stack[i]);
			 }
			 printf("\n");
		 }
	 }

