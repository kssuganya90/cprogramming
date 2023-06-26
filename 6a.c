#include<stdio.h>
//call by value
void swap(int a,int b);
void swap(int a,int b)
{
	int t=a;
	a=b;
	b=t;
	printf("\nAfter swapping x and y is %d and %d",a,b);
	
}
int main()
{
	int x,y;
	printf("Enter 2 values");
	scanf("%d%d",&x,&y);
	printf("Before swapping x and y is %d and %d",x,y);
	swap(x,y);
	return 0;	
}
