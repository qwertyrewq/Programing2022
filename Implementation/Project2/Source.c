#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include <stdbool.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a = 0;
	printf("��������� ������ �� 5 ������\n");
	while (a < 5) {
		printf("�������� %d ������ \n", 5 - a);
		Sleep(500);
		a++;
	}
	printf("������ ������������!");
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