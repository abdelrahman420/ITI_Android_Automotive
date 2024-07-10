#include <stdio.h>
#include "../include/app.h"

int main()
{  
    char operator;
    int num1, num2, output;   

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter first operand: ");
    scanf("%d", &num1);

    printf("Enter second operand: ");
    scanf("%d", &num2);

    output = Calc(num1, num2, operator);
    printf("The output is %d\n", output);
	return 0;
}

