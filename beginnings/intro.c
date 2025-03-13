#include <stdio.h>
#include <float.h>

int main() {
	char op;
	double a, b, res;

	printf("Enter an operator (+, -, *, /): ");
	// %c denotes that scan f is accepting a character. &op has the & sign before the variable to denote the 
	//actaul address and not  just the value. C generally copies the value of a variable when you pass to a 
	//function but using the & gives the address so that the original variable can be changed
	scanf(" %c", &op);

	printf("enter two operands: ");
	scanf("%lf %lf", &a, &b);

	switch(op) {
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case '*':
		res = a * b;
		break;
	case '/':
		res = a / b;
		break;
	default:
		printf("Error! Incorrect Operator Value\n");
		res = -DBL_MAX;
	}
	if(res!=-DBL_MAX)
	printf("%.2lf", res);
	
	return 0;
}

//clang -Wall intro.c -o helloWorld 
