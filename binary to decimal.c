#include<stdio.h>
int main()
{
	int i,decimal;
	printf("Enter a decimal number::");
	scanf("%d", &decimal);
	int binary[32];
	int quotient,top=-1;
	for(quotient=decimal;quotient>0;quotient/=2)
	{
		top++;
		binary[top]=quotient%2;
	}
	printf("Result Binary equivalent::");
	for(i=top;i>=0;i--)
	{
		printf("%d",binary[i]);
	}
	printf("\n");
}