#include "header2.h"
extern Student student;
void printStudent(Student student)
{
	printf("Student Details:\n");
	printf("ID\t:%d\n",student.id);
	printf("Name\t:%s\n",student.name);
	printf("Age\t:%d\n",student.age);
	return 0;
}
