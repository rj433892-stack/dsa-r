#include <stdio.h>
int main() {
 int i, j, space, rows;
 
 printf("Enter number of rows: ");
 scanf("%d", &rows);
 for(i = 1; i <= rows; i++) {
 // print spaces before characters
 for(space = 1; space <= rows - i; space++) {
 printf(" ");
 }
 // print increasing alphabets
 for(j = 0; j < i; j++) {
 printf("%c ", 'A' + j);
 }
 // print decreasing alphabets
 for(j = i - 2; j >= 0; j--) {
 printf("%c ", 'A' + j);
 }
 printf("\n");
 }
 return 0;
}