#include<iostream>
using namespace std;

// Factorial 

int pow(int m, int n) {
	if (n == 0)
		return 1;
	else
		return pow(m, n - 1) * m;
}

int main() {
	printf("%d", pow(2,3));
	return 0;
}