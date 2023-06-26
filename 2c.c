#include<stdio.h>
void main()
{
 int a,b;
 printf("Enter 2 nos");
 scanf("%d%d",&a,&b);
 printf("Enter +/-/*//\n");
 char c;
 c=getche();
 switch(c)
 {
 	case '+':
 		printf("addition is %d",a+b);
 		break;
 	case '-':
 		printf("subtraction is %d",a-b);
 		break;
	case '*':
 		printf("multiplication is %d",a*b);
 		break;
	case '/':
 		printf("division is %d",a/b);
 		break; 
 	default:
 		printf("Entered wrong operation");
 		
 }
	getch();
}
