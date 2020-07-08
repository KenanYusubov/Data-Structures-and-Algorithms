#include<iostream>
using namespace std;

/// Simple Recursive Function
int fun(int n) {
	if (n > 0) {
		return fun(n - 1) + n;
	}
	return 0;
}

/// Recursive Function with static variable (Same for global
int fun2(int n) {
	static int x = 0;
	if (n > 0) {
		x++;
		return fun2(n - 1) + x;
	}
	return 0;
}


int main() {
	printf("%d", fun(3));
	printf("%d", fun2(3));
	printf("%d", fun(3));
	return 0;
}