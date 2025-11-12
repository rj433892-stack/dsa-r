#include <stdio.h>
int main() 
{
int i,j,n,temp,min, a[10];
printf("\n***** Program for Selection Sort *****");
printf("\n \n Number of element in an array n=:");
scanf("\n %d", &n);
printf("\n Element in an array: ");
for(i=0;i<n;i++)
{
scanf("\n %d", &a[i]);
}

printf("\n Original array is:");
for(i=0;i<n;i++)
 {
printf("\n %d", a[i]);
}

for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
min=j;
}
temp=a[min];
a[min]=a[i];
a[i]=temp;
}

printf("\n \n Selection sorted array is:");
for(i=0;i<n;i++)
{printf("\n %d", a[i]);
}
return 0;
}