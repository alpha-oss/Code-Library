//Assignment 1
#include <stdio.h>
int main()
{
    int test = 5;
    printf("Number = %d \n", test);
     
    float number1 = 13.5;
    double number2 = 12.4;

    printf("number1 = %f \n", number1);
    printf("number2 = %lf \n", number2);
    
     char chr = 'a';    
    printf("character = %c \n", chr);
    
    int testint;
    printf("Enter an integer: ");
    scanf("%d", &testint);  
    printf("Number = %d \n",testint);
    
    float num1;
    double num2;

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    printf("num1 = %f \n", num1);
    printf("num2 = %lf \n", num2);

    char a;
    printf("Enter a character: ");
    scanf(" %c", &a);     
    printf("You entered %c.\n",a);  
    printf("ASCII value is %d.", a);  
    
    return 0;
}
