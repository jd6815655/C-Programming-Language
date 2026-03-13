#include <stdio.h>

int main() {
	int a = 0, b = 0;
	
	printf("Enter first integer: ");
	if (scanf("%d", &a) != 1)
    {
		printf("That wasn't an integer.\n");
		return 1;
	}
	
	printf("Enter second integer: ");
	if (scanf("%d", &b) != 1)
    {
		printf("That wasn't an integer.\n");
		return 1;
	}
	
	int sum = a + b;
	printf("Sum: %d\n", sum);
	return 0;
}