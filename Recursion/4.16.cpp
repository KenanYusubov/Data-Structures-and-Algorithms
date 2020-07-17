#include<iostream>
using namespace std;

// Fibanocci (excessive recursion - call itself multiple times for the same value)

int fib(int n) {
	if (n <= 1) return n;
    return fib(n - 2) + fib(n - 1);
}

// Memoziation
int F[10];

int Mfib(int n) {
	if (n <= 1) {
		F[n] = n;
		return n;
	}

	if (F[n - 2] == -1) F[n - 2] = Mfib(n - 2);
	if (F[n - 1] == -1) F[n - 1] = Mfib(n - 1);
	return F[n - 2] + F[n - 1];
}

int main() {
	cout << "excessive version: " << fib(6) << endl;

	for (int i = 0; i < 10; i++) F[i] = - 1;
	cout << "memoization version: " << Mfib(6) << endl;
	return 0;
}