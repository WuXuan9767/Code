#include <stdio.h>
#include <math.h>
int main()
{
	float x, y;
	char op;
	printf("请输入算术表达式：");
	scanf("%lf%c%lf", &x, &op, &y);
	switch (op)
	{
	case '+':
		printf("结果的值为：%lf\n", x + y);
		break;
	case '-':
		printf("结果的值为：%lf\n", x - y);
		break;
	case '*':
		printf("结果的值为：%lf\n", x * y);
		break;
	case '/':
		if (y != 0) {
			printf("结果的值为：%0.3f\n", x / y);
			break;
		}
		else 
		{
			printf("Division by zero\n");
		}
	case '%':
		printf("结果的值为：%lf\n", fmod(x, y));
		break;
	default:
		printf("Invalid operator!\n");
	}
	return 0;
}