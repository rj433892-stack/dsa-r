#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int disp();
int dequeue();
int enqueue();
int isEmpty();
int isFull();

int queue[SIZE];
int front = -1;
int rear = -1;

int main()
{
	int ch;
	while(1)
	{
		printf("\n ******Select Queue Operation *******");
		printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit");
		
		printf("\n Enter your choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:disp();
			break;
			case 4:exit(0);
			break;
		}
	}
	return 0;
}
int isEmpty(){
	if(front==-1)
	return 1;
	else
	return 0;
}
int isFull()
{
	if(rear==SIZE-1)
	return 1;
	else
	return 0;
}
int enqueue(){
	int item;
	if(isFull())
	{
		printf("Queue is full! insertion not possible.\n");
	}
	else{
		if(front==-1)
		{
			front = 0;
		}
		printf("Enter element in Queue");
		scanf("%d",&item);
		rear++;
		queue[rear]= item;
		printf("%d enqueued to queue.\n",item);
	}
}
int dequeue ()
{
	int deleted_value;
	if(isEmpty())
	{
		printf("queue is empty ! deletion not possible.\n");
	}
	else
	{
		deleted_value = queue[front];
		front++;
		if(front>rear){
		front = -1;
		rear = -1;
	}
	printf(" %d dequeued from queue.\n",deleted_value);
}
}
int disp()
{
	int i;
	if (front==-1)
	printf("Queue is Empty!\n");
	else{
		printf("Queue element:");
		for(i=front;i<=rear;i++){
			printf("%d",queue[i]);
		}
		printf("\n");
	}
}