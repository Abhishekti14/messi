#include<stdio.h> 
int main()
{
int num,n, i,table;
printf("Enter a number");
scanf("%d",&num);
printf("Enter the number upto which you wanna see the table\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
table=0;
table=num*i;
printf("%d*%d=%d\n",num,i,table);
}
return 0;
}

