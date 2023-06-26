#include <stdio.h>
int main () 
{
char *names[5] = {"Zara Ali","Hina Ali","Nuha Ali","Sara Ali","Sameer Ali"};
int i = 0;
for ( i = 0; i < 5; i++) {
printf("Value of names[%d] = %s\n", i, *(names+i ));
}
return 0;
}
