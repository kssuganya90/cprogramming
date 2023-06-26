#include <stdio.h>
#include <math.h>
int main()
{
int nArray[50],wArray[50],nelem,sq,i,j,t;
printf("\nEnter the number of elements in an array : ");
scanf("%d",&nelem);
printf("\nEnter %d elements\n",nelem);
for(i=0;i<nelem;i++)
  scanf("%d",&nArray[i]);
// Sorting an array
for(i=0;i<nelem;i++)
  for(j=i+1;j<nelem;j++)
     if(nArray[i] > nArray[j])
     {
 t = nArray[i];
 nArray[i] = nArray[j];
 nArray[j] = t;
     }
//Calculate the weight
    for(i=0; i<nelem; i++)
 {
     wArray[i] = 0;
    // sq =(int) sqrt(nArray[i]);
     if(percube(nArray[i]))
  wArray[i] = wArray[i] + 5;

     if(nArray[i]%4==0 && nArray[i]%6==0)
  wArray[i] = wArray[i] + 4;

     if(prime(nArray[i]))
  wArray[i] = wArray[i] + 3;

 }

 for(i=0; i<nelem; i++)
    printf("<%d,%d>", nArray[i],wArray[i]);
return 0;

}

int prime(int num)
{
 int flag=1,i;
 for(i=2;i<=num/2;i++)
   if(num%i==0)
   {
     flag=0;
     break;
   }
  return flag;
}
int percube(int num)
{
   int i,flag=0;
   for(i=2;i<=num/2;i++)
     if((i*i*i)==num)
     {
  flag=1;
  break;
     }
 return flag;
}
