#include<stdio.h>
//Sum of array elements by passing to a function 
int sumofarray(int *arr,int n);
int sumofarray(int* arr,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
	sum=sum+arr[i];	
	}
return sum;	
}
int main()
{
	int n,i,s;
	int a[10];
	printf("Enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	s=sumofarray(&a,n);
	printf("Sum of array is %d",s);
	return 0;	
}
