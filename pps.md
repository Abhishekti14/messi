![LCO](https://www.gndec.ac.in/logo.png)

#            MARKDOWN SHEET
---
**NAME**-Abhishek Tiwari

**CLASS**-CSE-A1

**ROLL NO**-1915005

---
1.**PROGRAM FOR_HELLO WORLD_**
```c

#include<stdio.h>
int main()
{
puts("Hello World\n");
return 0;
}

```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/yup.png)

---

2.**_PROGRAM FOR ADDRESS_**
```c
#include<stdio.h>
int main()
{
puts("My address:");
puts("B-20,IAL Colony,DISTT.Sangrur,Punjab,India");
return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/abhi.png)

---
3.**_PROGRAM FOR SUM OF TWO NUMBERS_**
```c
#include<stdio.h>
int main()
{
int a, b, sum;
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
sum=a+b;
printf("sum=%d\n",sum);
return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/abhis.png)
___
4.**_PROGRAM FOR CELSIUS TO FAHRENHEIT_**
```c
#include<stdio.h>

int main()
{
 float fahr, cel;
 printf("Enter the temperature in celsius: ");
 scanf("%f", &cel);

 fahr = (1.8 * cel) + 32.0; //temperature conversion formula
 printf("\nTemperature in Fahrenheit: %.2f F\n", fahr);

 return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/abhish.png)
___
5.**_PROGRAM FOR AREA OF CIRCLE AND PERIMETER OF CIRCLE_**
```c
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
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/abhishe.png)
___
6.**_PROGRAM FOR SWAP TWO NUMBERS_**
```c
#include <stdio.h>
int main()
{
int x, y, t;
printf("Enter two integers\n");
scanf("%d%d", &x, &y);
printf("Before Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);
t = x;
x = y;
y = t;
printf("After Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);
return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/abhishek.png)
___
7.**_PROGRAM FOR ODD,EVEN_**
```c
#include <stdio.h>
int main()
{
int number;
printf("Enter an integer: ");
scanf("%d", &number);
if(number % 2 == 0)
printf("%d is even.", number);
else
printf("%d is odd.", number);
return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/abhishekt.png)
___
8.**_PROGRAM FOR FACTORIAL_**
```c
#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}       
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/abhishekti.png)
___
9.**_PROGRAM FOR REVERSE NUMBER_**
```c
    #include <stdio.h>
    int main()
    {
        int n, reversedNumber = 0, remainder;
        printf("Enter an integer: ");
        scanf("%d", &n);
        while(n != 0)
        {
            remainder = n%10;
            reversedNumber = reversedNumber*10 + remainder;
            n /= 10;
        }
        printf("Reversed Number = %d", reversedNumber);
        return 0;
    }
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/abhishektiw.png)
___
10.**_PROGRAM FOR FIZZBUZZ_**
```c
#include <stdio.h> 
  
int main(void) 
{ 
    int i; 
    for (i=1; i<=100; i++) 
{ 
        if (i%15 == 0)         
            printf ("FizzBuzz\t");     
        else if ((i%3) == 0)     
            printf("Fizz\t");                   
        else if ((i%5) == 0)                        
            printf("Buzz\t");                  
      
        else             
            printf("%d\t", i);                  
  
    } 
  
    return 0; 
} 
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/abhishektiwa.png)
___
11.**_PROGRAM FOR SWITCHCASE WEEKDAYS_**
```c
#include <stdio.h>

int main()
{

    int week;
    
    /* Input week number from user */
    printf("Enter week number(1-7): ");
    scanf("%d", &week);
    
    switch(week)
    {
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
        case 7: 
            printf("Sunday");
            break;
        default: 
            printf("Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/abhishektiwar.png)
___
12.**_PROGRAM FOR CALCULATOR_**
```c
# include <stdio.h>
int main() {
    char operator;
    double firstNumber,secondNumber;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);
    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
            break;
        default:
            printf("Error! operator is not correct");
    }

   return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/abhishektiwari.png)
___
13.**_PROGRAM FOR LEAP YEAR_**
```c

#include<stdio.h>
int main()
{
 int year;
 printf("Enter a year:");
 scanf("%d",&year);
 if (year%4==0)
{
 if(year%100==0)
{
 if(year%400==0)
 printf("%d is a leap year.",year);
else
 printf("%d is not a leap year.",year);
}
else
 printf("%d is a leap year.",year);
}
else
 printf("%d is not a leap year.",year);
 return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/ab.png)
___
14.**_PROGRAM FOR PRIME NUMBER_**
```c
#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n == 1) 
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else 
    {
        if (flag == 0)
          printf("%d is a prime number.", n);
        else
          printf("%d is not a prime number.", n);
    }
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/abh.png)
___
15.**_PROGRAM FOR PALLINDROME_**
```c
#include <stdio.h>
    int main()
    {
        int n, reversedInteger = 0, remainder, originalInteger;
        printf("Enter an integer: ");
        scanf("%d", &n);
        originalInteger = n;
        while( n!=0 )
        {
            remainder = n%10;
            reversedInteger = reversedInteger*10 + remainder;
            n /= 10;
        }
        if (originalInteger == reversedInteger)
            printf("%d is a palindrome.", originalInteger);
        else
            printf("%d is not a palindrome.", originalInteger);
        
        return 0;
    }
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/a.png)
___
16.**_PROGRAM FOR FIBONACCI SERIES_**
```c
#include <stdio.h>
int main()
{
    int prev=0;
    int curr=1;
    int n;
    int next,a;
    printf("Enter the number of terms\n");
  scanf("%d", &n);

  printf("First %d terms of Fibonacci series are:\n",n);

  for (a = 0; a < n; a++)
  {
    if (a <= 1)
      next = a;
    else
    {
      next = prev + curr;
      prev = curr;
      curr = next;
    }
    printf("%d\n", next);
  }

  return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/B.png)
___
17.**_PROGRAM FOR ARRAY-1D_**
```c
#include <stdio.h>  
  
void  main()  
{  
    int arr[10]; 
    int i;  
       printf("\n\nRead and Print elements of an array:\n");
       printf("-----------------------------------------\n");	
  
    printf("Input 10 elements in the array :\n");  
    for(i=0; i<10; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nElements in array are: ");  
    for(i=0; i<10; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\n");	
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/12.png)
___
18.**_PROGRAM FOR ARRAY-2D_**
```c
#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int disp[2][3];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}

```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/11.png)
___
19.**_PROGRAM FOR ADDICTION OF 2 MATRICES_**
```c
#include <stdio.h>
 
int main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
   
   printf("Sum of entered matrices:-\n");
   
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
 
   return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/10.png)
___
20.**_PROGRAM FOR TRANSPOSE OF MATRICES_**
```c
#include <stdio.h>
 
int main()
{
  int m, n, c, d, matrix[10][10], transpose[10][10];
 
  printf("Enter the number of rows and columns of a matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of the matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &matrix[c][d]);
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      transpose[d][c] = matrix[c][d];
 
  printf("Transpose of the matrix:\n");
 
  for (c = 0; c < n; c++) {
    for (d = 0; d < m; d++)
      printf("%d\t", transpose[c][d]);
    printf("\n");
  }

  return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/9.png)
___
21.**_PROGRAM FOR SUBTRACTION OF MATRICES_**
```c
#include <stdio.h>
 
int main()
{
   int m, n, c, d, first[10][10], second[10][10], difference[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
     for (d = 0 ; d < n; d++)
       scanf("%d", &first[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++)
     for (d = 0; d < n; d++)
         scanf("%d", &second[c][d]);
 
   printf("Difference of entered matrices:-\n");
 
   for (c = 0; c < m; c++) {
     for (d = 0; d < n; d++) {
       difference[c][d] = first[c][d] - second[c][d];
       printf("%d\t",difference[c][d]);
     }
     printf("\n");
   }
 
   return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/8.png)
___
22.**_PROGRAM FOR MULTIPLICATION OF MATRICES_**
```c
#include <stdio.h>
 
int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The matrices can't be multiplied with each other.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/7.png)
___
23.**_PROGRAM FOR FIND SQUARE OF NUMBERS_**
```c
#include <stdio.h>

double square(double num)
{
    return (num * num);
}
int main()
{
    int num;
    double n;
	printf("\n\n Function : find square of any number :\n");
	printf("------------------------------------------------\n");	
     
    printf("Input any number for square : ");
    scanf("%d", &num);
    n = square(num);
    printf("The square of %d is : %.2f\n", num, n); 
    return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/6.png)
___

24.**_PROGRAM FOR SWAPPING=CALL BY VALUE_**
```c
#include <stdio.h>
 
 
void swap(int, int);
 
int main()
{
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(x, y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}
 
void swap(int a, int b)
{
   int temp;
 
   temp = b;
   b = a;
   a = temp;
    printf("Values of a and b is %d  %d\n",a,b);
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/5.png)
___
25.**_PROGRAM FOR SWAPPING=CALL BY REFERENCE_**
```c
    #include <stdio.h>
    void swap(int *n1, int *n2);
    int main()
    {
        int num1, num2;
printf("Enter the num1 and num2");
scanf("%d%d",&num1,&num2);
        swap( &num1, &num2);
        printf("num1 = %d\n", num1);
        printf("num2 = %d", num2);
        return 0;
    }
    void swap(int* n1, int* n2)
    {
        int temp;
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/4.png)
___
26.**_PROGRAM FOR FACTORIAL USING RECURSION_**
```c
#include <stdio.h>
long int multiplyNumbers(int n);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n)
{
    if (n >= 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/3.png)
___
27.**_PROGRAM FOR FIBONACCI USING RECURSION_**
```c
#include <stdio.h>
int main()
{
  int n, first = 0, second = 1, next, c;

  printf("Enter the number of terms\n");
  scanf("%d", &n);

  printf("First %d terms of Fibonacci series are:\n", n);

  for (c = 0; c < n; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  }

  return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/2.png)
___
28.**_PROGRAM FOR STRUCTURE_**
```c
#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];
int main()
{
    int i;
    printf("Enter information of students:\n");
    for(i=0; i<10; ++i)
    {
        s[i].roll = i+1;
        printf("\nFor roll number%d,\n",s[i].roll);
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        printf("\n");
    }
    printf("Displaying Information:\n\n");
    for(i=0; i<10; ++i)
    {
        printf("\nRoll number: %d\n",i+1);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: %.1f",s[i].marks);
        printf("\n");
    }
    return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/1.png)
![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/0.png)
___
29.**_PROGRAM FOR POINTER_**
```c
#include<stdio.h>
int main()
{
int a,*p;
a=10;
p=&a;
printf("%d\n",p);
printf("%d\n",*p);
printf("%d\n",&p);
return 0;
}
```
**OUTPUT**

![LCO](https://raw.githubusercontent.com/Abhishekti14/messi/master/20.png)
































































