#include<stdio.h>
#include<string.h>

#define MAX_STUDENTS 10
#define NUM_SUBJECTS 3
struct student{
	int roll_no;
	char name[50];
	char program[30];
	char course[30];
	int subject_marks[NUM_SUBJECTS];
	int total_marks;
	float average_marks;
};
int main()
{
	struct student students[MAX_STUDENTS];
	int num_students=0;
	int i,j;
	printf("Enter the number of student (max %d):",MAX_STUDENTS);
	scanf("%d",&num_students);
	
	if(num_students>MAX_STUDENTS||num_students<=0)
	{
		printf("Invaild number of students.\n");
		return 1;
	}
	for (i = 0; i < num_students; i++) 
{
    printf("\nEnter details for Student %d:\n", i + 1);
    
    printf("Roll No: ");
    scanf("%d", &students[i].roll_no);
    
    printf("Name: ");
    scanf("%s", students[i].name); 
    
    printf("Program: ");
    scanf("%s", students[i].program);
    
    printf("Course: ");
    scanf("%s", students[i].course);
    students[i].total_marks = 0;
    printf("Enter marks for %d subjects:\n", NUM_SUBJECTS);
    for (j = 0; j < NUM_SUBJECTS; j++) 
 {
    printf("Subject %d marks: ", j + 1);
    scanf("%d", &students[i].subject_marks[j]);
    students[i].total_marks += students[i].subject_marks[j];
 }
    students[i].average_marks = (float)students[i].total_marks / NUM_SUBJECTS;
 }

    printf("\n--- Student Database ---\n");
    printf("Roll No.\tName\t\tProgram\t\tCourse\t\tSub1\tSub2\tSub3\tTotal\tAverage\n");
    printf("--------\t----\t\t-------\t\t------\t\t----\t----\t----\t-----\t-------\n");
    
	for (i = 0; i < num_students; i++) 
{
    printf("%-8d\t%-15s\t%-15s\t%-15s",
        students[i].roll_no,
        students[i].name,
        students[i].program,
        students[i].course);
        
 for (j = 0; j < NUM_SUBJECTS; j++) {
    printf("\t%d", students[i].subject_marks[j]);
 }
    printf("\t%d\t%.2f\n", students[i].total_marks, students[i].average_marks);
 }
 return 0;
}
	
