#include<stdio.h>
#include<string.h>
void reverse(char *str);
int main()
{
    char str[50];
    printf("Enter a string\n");
    scanf("%s",str);
    printf( "Input string: %s\n",str);
    reverse(str);
    printf("Output string:%s\n",str);
    return 0;
}
void reverse(char *str)
{
    int r = strlen(str) - 1, f= 0;
    char t;
    while (f < r)
    {
	if(isalnum(str[f])!=0 && isalnum(str[r])!=0)
		{
		t=str[r];
		str[r]=str[f];
		str[f]=t;
		f++;
		r--;
		}
	else if(isalnum(str[f])!=0 && isalnum(str[r])==0)
		{	r--;		}

	else if(isalnum(str[f])==0 && isalnum(str[r])!=0)
		{	f++;		}
	else
		{
		f++;
r--;
		}

    }
}

