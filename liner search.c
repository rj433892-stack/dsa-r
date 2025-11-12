#include<stdio.h>
int main()
{
	int n,i,temp=0;
	int a[5]={10,20,30,40,50};
	printf("Enter the number = ");
	scanf("%d", &n);
	for(i=0;i<5;i++)
	{
		if(a[i] == n)
		{
			printf("Number is present");
			temp = 1;
			break;
		}
	}
	if(temp == 0)
	{
		printf("Number is not present\n");
}
}