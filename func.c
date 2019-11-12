#include<stdio.h>
int function(int a, int b); /*function declaration*/
int main()
{
int x,y;
int sum;
sum = function(x,y);
printf("%d\n",sum);
 /*function calling*/
return 0;
}
int functon(int a, int b) /*function definition */
{
scanf("%d",&a);
scanf("%d",&b);
int c;
c= a+b;
return c;
}
