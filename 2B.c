#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if((num%2)==0)
       goto E1;
	else
	   goto E2;
	E1:
		printf("Number is even");
		exit(0);
	E2:
		printf("Number is odd");
	return 0;
}
