//директивы
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
float main()
{   
	//добавление локализации
	setlocale(LC_ALL, "RUS");

	//объявление переменных
	float mm, dd, Z;

	//ввод данных с клавиатуры
	puts("Введите дату");
	scanf_s("%f%f", &dd, &mm);

	//тернарная операция для проверки знака зодиака
	Z = (dd >= 22 && mm == 12) || (dd <= 20 && mm == 1) ? printf("Козерог") : printf("");
	Z = (dd >= 21 && mm == 3) || (dd <= 19 && mm == 4) ? printf("Овен") : printf("");
	Z = (dd >= 20 && mm == 4) || (dd <= 20 && mm == 5) ? printf("Телец") : printf("");
	Z = (dd >= 21 && mm == 5) || (dd <= 21 && mm == 6) ? printf("Близнецы") : printf("");
	Z = (dd >= 22 && mm == 6) || (dd <= 22 && mm == 7) ? printf("Рак") : printf("");
	Z = (dd >= 23 && mm == 7) || (dd <= 22 && mm == 8) ? printf("Лев") : printf("");
	Z = (dd >= 23 && mm == 8) || (dd <= 22 && mm == 9) ? printf("Дева") : printf("");
	Z = (dd >= 23 && mm == 9) || (dd <= 23 && mm == 10) ? printf("Весы") : printf("");
	Z = (dd >= 24 && mm == 10) || (dd <= 22 && mm == 11) ? printf("Скорпион") : printf("");
	Z = (dd >= 23 && mm == 11) || (dd <= 21 && mm == 12) ? printf("Стрелец") : printf("");
	Z = (dd >= 21 && mm == 1) || (dd <= 18 && mm == 2) ? printf("Водолей") : printf("");
	Z = (dd >= 19 && mm == 2) || (dd <= 20 && mm == 3) ? printf("Рыбы") : printf("");

	return 0;
}