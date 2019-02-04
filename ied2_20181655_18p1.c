#include <stdio.h>
void plus(float, float);
void minus(float, float);
void multi(float, float);
void div(float, float);
void main(void)
{
	float num1, num2;
	char op;
	printf("(+, -, *, /)\n");
	printf("Please enter the formula. (ex : 12.3 + 5.5)\n");
	scanf("%f %c %f", &num1, &op, &num2);
	switch (op)
	{
	case '+':
		plus(num1, num2);
		break;
	case '-':
		minus(num1, num2);
		break;
	case '*':
		multi(num1, num2);
		break;
	case '/':
		switch ((int)num2)
		{
		case 0 : 
			printf("Division by zero\n");
			break;
		default :
			div(num1, num2);
			break;
		}
		break;
	default:
		printf("Invalid operator : %c\n", op);
	}
}
void plus(float a, float b)
{
	printf("%.2f + %.2f = %.2f\n", a, b, a + b);
}
void minus(float a, float b)
{
	printf("%.2f - %.2f = %.2f\n", a, b, a - b);
}
void multi(float a, float b)
{
	printf("%.2f * %.2f = %.2f\n", a, b, a * b);
}
void div(float a, float b)
{

		printf("%.2f / %.2f = %.2f\n", a, b, a / b);

}