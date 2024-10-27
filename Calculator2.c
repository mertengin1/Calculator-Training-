#include <stdio.h>
#include <math.h>

int main()
{
    char operator;
    double num1, num2, radius, circumference, area, result;
    const double PI = 3.14159;
    float temp;

    printf("\n Please enter the action you want to perform ");
    printf("\n For mathematical operations: (+ - * /)");
    printf("\n For area and circumference of a circle: (A)");
    printf("\n For temperature conversion: (F) for Fahrenheit or (C) for Celsius");
    printf("\n For square root: (S)");
    printf("\n For power of a number: (P)\n");

    scanf(" %c", &operator);

    if (operator== 'C')
    {
        printf("Enter the Celsius value: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\n Temperature in Fahrenheit: %.1f\n", temp);
    }
    else if (operator== 'F')
    {
        printf("Enter the Fahrenheit value: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("\n Temperature in Celsius: %.1f\n", temp);
    }
    else if (operator== 'A')
    {
        printf("\n Enter the radius of the circle: ");
        scanf("%lf", &radius);
        circumference = 2 * PI * radius;
        area = PI * radius * radius;
        printf("\n Circumference of the circle: %.2lf", circumference);
        printf("\n Area of the circle: %.2lf\n", area);
    }
    else if (operator== '+')
    {
        printf("Enter the first number: ");
        scanf("%lf", &num1);
        printf("Enter the second number: ");
        scanf("%lf", &num2);
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    }
    else if (operator== '-')
    {
        printf("Enter the first number: ");
        scanf("%lf", &num1);
        printf("Enter the second number: ");
        scanf("%lf", &num2);
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    }
    else if (operator== '*')
    {
        printf("Enter the first number: ");
        scanf("%lf", &num1);
        printf("Enter the second number: ");
        scanf("%lf", &num2);
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    }
    else if (operator== '/')
    {
        printf("Enter the first number: ");
        scanf("%lf", &num1);
        printf("Enter the second number: ");
        scanf("%lf", &num2);

        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
    }
    else if (operator== 'S')
    {
        printf("Enter the number: ");
        scanf("%lf", &num1);
        if (num1 < 0)
        {
            printf("Error: Square root of a negative number is not defined in real numbers.\n");
        }
        else
        {
            result = sqrt(num1);
            printf("Result: %.2lf\n", result);
        }
    }
    else if (operator== 'P')
    {
        printf("Enter the base number: ");
        scanf("%lf", &num1);
        printf("Enter the exponent: ");
        scanf("%lf", &num2);
        result = pow(num1, num2);
        printf("Result: %.2lf\n", result);
    }
    else
    {
        printf("\n'%c' is not a valid operator.\n", operator);
    }

    return 0;
}
