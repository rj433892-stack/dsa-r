#include<stdio.h>
int main()
 {
 int i, j, space, rows;
 
 // number of rows
 printf("Enter number of rows: ");
 scanf("%d", &rows);
 
 for(i = 1; i <= rows; i++) {
 // print spaces before stars
 for(space = 1; space <= rows - i; space++) {
 printf(" ");
 }
 // print stars with space between
 for(j = 1; j <= i; j++) {
 printf("* ");
 }
 printf("\n");
 }
 
 return 0;
}