#include<stdio.h>
void main()
{
printf("Enter n");
int i,n;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
	if(i%5==0)
	{
	continue;
	}
	printf("%d\n",i);
	
}

	getch();
}
