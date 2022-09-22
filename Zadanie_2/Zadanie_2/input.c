#include<stdio.h>
#include<locale.h>
#include<math.h>
void main() {
	setlocale(LC_ALL, "rus");
	int x, y, z;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);
	if (x != y && y != z && z != x) {
		if (x > y && x > z) {
			z = z + x;
			printf("%d", z);
		}
		else if (y > x && y > z) {
			z = z + y;
			printf("%d", z);
		}
		else {
			z = pow(z, 2);
			printf("%d", z);
		}
	}
	else {
		if (x == y && y == z && z == x) {
			printf("Все переменные равны");
		} else if (x==y || y==z || z==x) {
			printf("%d %d %d - Переменные равны",x==y,y==z,z==x);
		}

		}
	return;
	}