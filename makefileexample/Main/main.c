#include "mainheader.h"
Student student_data;
int main()
{
	printf("Welcome!!\n");
	//printf("Enter student id, name, and age\n");
	//scanf("%d %s %d",&Student.id,Student.name,&Student.age);
	student_data =getStudent();
	printStudent(student_data);
	return 0;
}
