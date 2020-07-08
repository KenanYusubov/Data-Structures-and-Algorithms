#include<iostream>
using namespace std;

void funA(int n);
void funB(int n);

/// Indirect Recursion
void funA(int n) {
	if (n > 0) {
		printf(" A-%d", n);
		funB(n - 1);
	}
}

void funB(int n) {
	if (n > 1) {
		printf(" B-%d", n);
		funA(n - 1);
	}
}


int main() {
	funA(3);
	return 0;
}