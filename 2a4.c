int main()
{
int a = 5, b = 5, c = 10,result;
result = (a == b) && (c > b);
printf("(a == b) && (c > b) is %d \n", result);
result = (a == b) || (c < b);
printf("(a == b) || (c < b) is %d \n", result);
result=(a==b)?a:b;
printf("Ternary Operator result is %d \n", result);
printf("Value of result before increment is: %d\n",result);
printf("Post Increment Operator result is %d \n",result++);
printf("Pre Increment Operator result is %d \n",++result);
printf("Value of result after increment is: %d\n",result);
printf("Value of result before decrement is: %d\n",result);
printf("Post decrement Operator result is %d \n", result--);
printf("Pre decrement Operator result is %d \n", --result);
printf("Value of result after decrement is: %d\n",result);
return 0;
}
