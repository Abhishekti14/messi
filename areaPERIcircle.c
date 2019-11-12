#include<stdio.h>
#define PI 3.14
int main()
{
float radius,area,peri;
printf("Enter the radius of circle\n");
scanf("%f",&radius);
area=PI*radius*radius;
peri=2*PI*radius;
printf("Area of the circle=%f\n",area);
printf("Perimeter of the circle=%f\n",peri);
return 0;
}
