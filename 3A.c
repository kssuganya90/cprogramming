#include<stdio.h>
int main()
{
int N,A,digit,cube,sum=0;
printf("Enter a Number\n");
scanf("%d",&N);
A=N;
while(N!=0)
{
digit=N%10;
cube=(digit*digit*digit);
sum=sum+cube;
N=N/10;
}
if ( sum==A)
printf("%d is Armstrong Number",A );
else
printf("%d is not an Armstrong Number",A );
return 0;
}
