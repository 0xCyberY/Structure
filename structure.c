#include <stdio.h>
struct student
{
   char name[100];
   int roll;
   char dept[100];
   float marks;
   char grade;
}s[10];
int main()
   {
   int r,i,n;
   printf("Enter the number of the students:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	printf("Enter studnet's Name, Rollnumber, Department, Marks, Grade :\n");
	scanf("%s%d%s%f %c", s[i].name, &s[i].roll, s[i].dept, &s[i].marks, &s[i].grade);
   }
   printf("\nStudent details are \n");
   printf("\nName\tRollno\tDept\tMarks\t\tGrade\n");
   for(i=0;i<n;i++)
   {
	printf("%s\t%d\t%s\t%f\t\t%c\n", s[i].name, s[i].roll, s[i].dept, s[i].marks, s[i].grade);
   }
   printf("\nEnter student Rollnumber:\n");
   scanf("%d", &r);
   for(i=0;i<n;i++)
   {
	if(r==s[i].roll)
	{
	   printf("\nName\tRollno\tDept\tMarks\t\tGrade\n");
	   printf("%s\t%d\t%s\t%f\t\t%c\n", s[i].name, s[i].roll, s[i].dept, s[i].marks, s[i].grade);
	}
   }
return 0;
}
