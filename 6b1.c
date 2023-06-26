#include<stdio.h>
void sort(int *,int);
int main()
{
int a[20],N,i;
printf("Enter the no. of elements\n");
scanf("%d",&N);
printf("Enter the Elements one by one\n");
for(i=0;i<N;i++)
	scanf("%d",&a[i]);
sort(a,N);

printf("\n Sorted Order\n");
for(i=0;i<N;i++)
	printf("%d\t",a[i]);
getch();
}

void sort(int *x,int n)
{
int t,i,j;
for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-1;j++)
		{
		if(*(x+j) > *(x+(j+1)))
			{
			t=*(x+j);
			*(x+j) =*(x+(j+1));
			*(x+(j+1))=t;
			}
		}
	}
}

