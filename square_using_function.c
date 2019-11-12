 #include<stdio.h>

int square(int); // function prototype declaration.

void main()
{
     int number, answer;
    
     printf("Enter your number:");
     scanf("%d", &number);
    
     answer = square(number);  //Call function.
    
     printf("Square of %d is %d.", number, answer);
}

int square(int n)
{
     //function logic is written here..
     return(n*n); //This will return answer to main function.
}
