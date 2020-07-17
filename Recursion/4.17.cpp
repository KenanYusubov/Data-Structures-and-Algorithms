#include<iostream>
using namespace std;

// Combination formula

int factorial(int n) {
	if (n == 0)
		return 1;
	else
		return factorial(n - 1) * n;
}

int C(int n, int r) {
	int t1, t2, t3;

	t1 = factorial(n);
	t2 = factorial(r);
	t3 = factorial(n - r);

	return t1 / (t2 * t3);
}

int main() {
	cout << C(10, 3) << endl;
	return 0;
}