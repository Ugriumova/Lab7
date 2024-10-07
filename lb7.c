#include <stdio.h>
#include <locale.h>
#include <math.h>
char main()
{
	
	setlocale(LC_ALL, "RUS");
	//задание1
	/*char c;
	printf("Введите символ '1' или 'a': ");
	scanf_s ("%c", c);
	switch (c)
	{
	case '1':
		printf("Введена цифра\n");
		break;
	case 'a':
		printf("Введена буква\n");
		break;
	default:
		printf("Неизвестный символ\n");
	}*/

	//задание 2(калькулятор)
	
	float x, y;
	char c1;
	printf("Введите число \n");
	scanf_s("%f%c%f", &x,&c1 , &y);
	
	
	switch (c1)
	{
	case '+':
		printf(" = %f", (x + y));
		break;
	case '-':
		printf(" = %f", (x - y));
		break;
	case '*':
		printf(" = %f", (x * y));
		break;
	case '/':
		printf(" = %f", (x / y));
		break;
	case '^':
		printf("= %f", pow(x,y));
		break;
	default:
		printf("Неизвестный символ\n");
	}
	return 0;

}