#include<stdio.h>
int main()
{
	int a,b,result;
	char opr;
		printf("Enter an operator(+,-,*,/,%)");
	scanf("%c",&opr);

	printf("Enter number1 and number2");
	scanf("%d %d",&a,&b);
	switch(opr)
	{
		case '+':
			result=a+b;
			printf("Sum of %d and %d is :%d",a,b,result);
			break;
		case '-':
			result=a-b;
			printf("Subtraction of %d and %d is :%d",a,b,result);
			break;
		case '*':
			result=a*b;
			printf("Multiplication of %d and %d is :%d",a,b,result);
			break;
		case '/':
			result=a/b;
			printf("Division of %d and %d is :%d",a,b,result);
			break;
		case '%':
			result=a%b;
			printf("Multiplication of %d and %d is :%d",a,b,result);
			break;
		default:
			printf("Enter valid operators");
			break;
	}
	return 0;
}
	
