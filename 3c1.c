#include<stdio.h>
void main()
{
int i,cube,n;
printf("Enter n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
cube=cube+i*i*i;	
}
printf("\n Sum of cube series upto n is %d",cube);	
	getch();
}

