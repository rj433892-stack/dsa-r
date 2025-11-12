#include<stdio.h>
int main()
{
	int n,i,j,a[20],temp;
	printf("Enter a number of element in array::");
	scanf("%d",&n);
	printf("Enter a array = ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	{
		printf("Orignal array is = ");
	}
	for (i=0;i<n;i++)
    {
    	printf("\n %d ", a[i]);
    	
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
		}
}    
    printf("\n Sorted aaray using bubble sort is = ");
    for (i=0;i<n;i++)
    {
    	printf("\n %d",a[i]);
    	
	}
	return 0;
	
}
