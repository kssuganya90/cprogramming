#include<stdio.h>
int main()
{
float height[20];
int n,i,count=0;
float avg=0.0,sum=0.0;

printf("Enter the number of persons");
scanf("%d",&n);
printf("Enter their heights in centimetres");
for(i=0;i<n;i++)
scanf("%d",&height[i]);

for(i=0;i<n;i++)
sum=sum+height[i];
avg=sum/n;

for(i=0;i<n;i++)
{
	if(avg>=height[i])
	count++;
}

printf("Number of person who are of average height is %d",count);

	return 0;
}
