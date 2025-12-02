#pragma once

int main(void) {
	int a, b;
	printf("Enter A: ");
	scanf("%d", &a);
	printf("Enter B: ");
	scanf("%d", &b);
	printf("A + B = %d\n", a + b);
	printf("A - B = %d\n", a - b);
	printf("A * B = %d\n", a * b);
	printf("A / B = %d\n", a / b);
	printf("A %% B = %d\n", a % b);

	return 0;
}
