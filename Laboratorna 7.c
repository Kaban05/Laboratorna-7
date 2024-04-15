//1.
#include <stdio.h>
int main() {
	int a = 8;
	int b = 7;
	int c = a + 5 * b;

	printf("c = %d\n", c);
	return 0;
}

//2.
#include <stdio.h>

int main() {
	int a = 8;
	int b = ++a;

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return 0;
}

//3.
#include <stdio.h>
int main() {
	int a = 8;
	int b = a++;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}

//4.
#define _CRT_SECURE_NO_WARNINGS
#define PRAISE "О, яке чудове ім'я!"

#include <stdio.h>
#include <Windows.h>
#include <string.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char name[50];

	printf("Як Вас звати?\n");
	scanf("%s", name);

	printf("Привіт, %s. %s\n", name, PRAISE);
	printf("Ваше ім'я складається з %d літер і ", strlen(name));
	printf("займає %d комірок пам'яті.\n", sizeof(name));
	printf("Вітальна фраза складається з %d літер", strlen(PRAISE));
	printf(" і займає %d комірок пам'яті.\n", sizeof(PRAISE));

	return 0;
}

//5.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
void main() {

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	float x = 1.4, y = 2.0; int z;

	z = x / 2 * 7 + y / 4 - 1; printf("z=%d\n", --z);
}

//6. 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
void main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int x = 2, z;
	float y;

	z = 0.5 * (y = 2.3 * x) + x++ / 3 * y;
	printf("z=%d\n", z);
}

//7. 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
void main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int x, y = 3;
	float z;

	z = 1.1 * (x = ++y / 2.) + 0.3 * x;
	printf("z=%4.1f\n", z);
}
