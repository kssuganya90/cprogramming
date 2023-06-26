#include<stdio.h>
void main()
{
 printf("Enter character");
 char ch;
 ch=getchar();
 switch(ch)
 {
 	case 'a'||'e'||'o'||'i'||'u':
 		printf("%c is vowel ",ch);
 		break;
 	default:
 		printf("its a consonant or special character");
 		
 }
	getch();
}
