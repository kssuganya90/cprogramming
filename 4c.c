#include<stdio.h>
int main()
{
float m[20][30];
int n,i,j,count=0;

printf("Enter the number of persons");
scanf("%d",&n);
printf("Enter their heights(in cm)");
for(i=0;i<n;i++)
{
scanf("%f",&m[i][0]);
m[i][0]/=100;
}
printf("Enter their weights(in kg)");

for(i=0;i<n;i++)
{
scanf("%f",&m[i][1]);	
}

for(i=0;i<n;i++)
{
	m[i][2]=m[i][1]/(m[i][0]*m[i][0]);
}

for(i=0;i<n;i++)
{
for(j=0;j<3;j++)
{
	printf("\t%f",m[i][j]);
}
printf("\n");
}
	return 0;
}
