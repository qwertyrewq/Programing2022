#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include <stdbool.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a = 0;
	printf("Остановка работы на 5 секунд\n");
	while (a < 5) {
		printf("Осталось %d секунд \n", 5 - a);
		Sleep(500);
		a++;
	}
	printf("Работа возобновлена!");
	system("cls");

	bool x = true;
	int z = 0;
	while (x) {
		scanf_s("%d", &x);
		if (x == 1)
			z = false;
		break;
	}


	return 0;
}