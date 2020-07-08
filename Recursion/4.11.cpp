#include<iostream>
using namespace std;

// Sum of first n natural numbers

int sum(int n) {
	return n * (n + 1) / 2;
}

int sumWithRecursion(int n) {
	if (n == 0)
		return 0;
	else
		return sum(n - 1) + n;
}

int sumWithLoop(int n) {
	int i, sum = 0;
	for (i = 1; i <= 10; i++) {
		sum += i;
	}

	return sum;
}


int main() {
	printf("sum: %d", sum(10));
	printf("\nsum with recursion: %d", sum(10));
	printf("\nsum with loop: %d", sum(10));
	return 0;
}