#include<stdio.h>
void main()
{
int i,sum,n;
i=0,sum=0;
printf("Enter n");
scanf("%d",&n);
do
{
sum=sum+i;
i++;
}while(i<=n);
printf("\n Sum of first n natural nos is %d",sum);
getch();
}

