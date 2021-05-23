#include<stdio.h>

int main() {
	printf("%d\n", (5 > 2) && (3 == 2));
	printf("%d\n", (5 > 2) || (3 == 2));
	printf("%d\n", !(3 == 2));
	printf("%d\n", 3 && 4);
	printf("%d\n", 0.0 && 4);
	printf("%d\n", 1 && 1);
	printf("%d\n", (3 > 4) || !(4 == 1));
	printf("%d\n", 0.3 || 0.2);
	printf("%d\n", 1 || 0);

	
	int a = 5, b = 10, c = 15, d = 20;
	printf("%d\n", a % 4 + b + d / b);
	

	int a = 5, b = 10, c = 15, d = 20;
	printf("%d\n", d - a + c % 8);

	int a = 5, b = 10, c = 15, d = 20;
	printf("%d\n", (b != 10) && (c >= d));

}