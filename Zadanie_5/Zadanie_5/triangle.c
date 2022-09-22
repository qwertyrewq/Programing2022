#include<stdio.h>
#include<math.h>
#include<locale.h>
void main() {
	setlocale(LC_ALL, "rus");
	int A, B, C;
	scanf_s("%d %d %d", &A, &B, &C);
	if (A == B && B == C && C == A) {
		printf("Треугольник равносторонний");
	}
	else if (A == B || B == C || C == A) {
		printf("Треугольник равнобедренный");
	}
	else if (A != B && B != C && C != A) {
		printf("Треугольник произвольный");
	}
	else if (A + B < C || B + C < A || A + C < B) {
		printf("Треугольник не существует");
	}
	else {
		printf("Треугольник прямоугольный");
	}
	return;
}