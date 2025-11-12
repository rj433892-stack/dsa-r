#include<stdio.h>
int main()
{
	int n,i,j,key,a[10];
	int low,high,m,temp=0;
	printf("Enter a element in array::");
	scanf("%d",&n);
	printf("Enter a number in array:: ");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search ::");
	scanf("\n %d",&key);
	printf("original array is ::");
	for(i=0;i<=n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	low=0;high=n-1;
	while(low<=high)
	{
		m=(low+high)/2;
		if(a[m]==key)
		{
			temp = 1;
			break;
		}
		else if(key<a[m])
		high = m-1;
		else
		low = m+1;
	}
	if(temp==1)
	printf("\n key = %d is present",key,i);
	else
	printf("\n key= %d element is not present ::",key);
	return 0;
	
}