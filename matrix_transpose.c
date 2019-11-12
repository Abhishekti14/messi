#include<stdio.h>
void main()
{ 
int a[10][10], b[10][10];
int m,n,i,j;
printf("Enter size of matrix A as m, n:");
scanf("%d%d",&m,&n);
printf("\n Enter elements of matrix A row wise\n",m ,n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
b[j][i]=a[i][j];
}
}
printf("\n\nTranspose of matrix is:\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d",b[i][j]);
}
}
}
