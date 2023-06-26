#include<stdio.h>
void main()
{
int i,sum,n;
i=0,sum=0;
printf("Enter n");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("\n Sum of first n natural nos is %d",sum);
getch();
}

