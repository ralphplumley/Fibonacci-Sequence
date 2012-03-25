#include <stdio.h>

int fibonacci(int);

int main() {
	
	int n;
	
	printf("How many numbers into the Fibonacci sequence would you like to see? (ex: 17)\n");	
	scanf("%d", &n);
	
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", fibonacci(i));
	}
	printf("\n");
	return 0;
}

int fibonacci(int num) {
	if ((num == 0) || (num ==1)) {
		return num;
	} else {
		return fibonacci(num - 1) + fibonacci(num - 2);
	}
}