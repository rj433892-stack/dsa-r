#include<stdio.h>
int main()
{
	int n,i,j,key,a[10];
	int temp = 0;
	printf("Enter a element in an array ::");
	scanf("%d",&n);
	printf("Enter a number in array::");
	for(i=0;i<=n;i++)
	{
		scanf("\t %d",&a[i]);
	}
	printf("\n Enter the element to search in array ::");
	scanf("%d",&key);
	
	printf("Original array is:");
	for(i=0;i<=n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	for(i=0;i<=n;i++)
	{
		if(a[i]==key)
		{
			temp = 1;
			break;
		}
		else
		temp = 0;
	}
	if(temp==1)
		printf("\n \n %d Element is present",key,i);
		else
		printf("\n \n %d element is not present",key);
		return 0;
}