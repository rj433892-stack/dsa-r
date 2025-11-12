#include<stdio.h>
int main()
{
	int i,j;
	int rows = 5;
	printf("Right angled triangle with a number \n \n");
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}