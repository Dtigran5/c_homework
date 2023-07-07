#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	char opcode = '+';

	printf("\tWelcome to the Calculator program \n");
	printf("Please enter the first number: ");
	scanf("%d", &a);
	printf("Please enter the second number: ");
	scanf("%d", &b);

	printf("Please enter the operation code (+, -, *, /): ");
	scanf(" %c", &opcode);

	if (opcode == '+') {
		printf("Result = %d \n", a+b);
	} else if (opcode == '-') {
		printf("Result = %d \n", a-b);
	} else if (opcode == '*') {
		printf("Result = %d \n", a*b);
	} else if (opcode == '/') {
		if (b != 0) {
			printf("Result = %d \n", a/b);
		} else {
			printf("Cannot divide by zero \n");
		}
	}
	printf("Thanks for using the Calculator! \n");
}
