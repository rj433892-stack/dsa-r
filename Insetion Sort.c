#include <stdio.h>
int main() 
{
int i,j,n,temp,min, a[10];
printf("\n***** Program for Insertion Sort *****");
printf("\n \n Number of element in an array n=:");
scanf("\n %d", &n);
printf("\n Element in an array: ");
for(i=0;i<n;i++)
{
scanf("\n %d", &a[i]);
}
//Display Original Array
printf("\n Original array is: ");
for(i=0;i<n;i++)
{
printf("\n %d", a[i]);
}
// Insertion sort main Code
for(i=0;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0 && (a[j]>temp))
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
//Display result
printf("\n \n Insertion sorted array is:");
for(i=0;i<n;i++)
{
printf("\n %d", a[i]);
}
return 0;
}