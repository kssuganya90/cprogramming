#include<stdio.h>
int main()
{
char st_name[50];	
char st_regno[50];
float cgpa;
printf("Enter Student name");
scanf("%s",st_name);
printf("Enter Student regno");
scanf("%s",st_regno);
printf("Enter Student cgpa");
scanf("%f",&cgpa);
printf("Student Regno: %s \nStudent Name : %s \nStudent CGPA :%f",st_regno,st_name,cgpa);
return 0;
}

