#include "header1.h"
Student getStudent()
{
	extern  Student student;
	printf("Enter student id, name, and age\n");
        scanf("%d %s %d",&student.id,student.name,&student.age);
	return student;
}
