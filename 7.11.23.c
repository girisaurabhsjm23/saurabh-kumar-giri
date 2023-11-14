#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	float cgpa ;
};
main()
{
	struct student s1={"ABCD",44,9.5};
	
	printf("name=%s rolln0.=%d cgpa=%f \n",s1.name,s1.rollno,s1.cgpa);
}
