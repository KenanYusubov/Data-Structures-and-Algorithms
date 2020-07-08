#include<iostream>
using namespace std;

/// Tree Recursion
void fun(int n) {
	if (n > 0) {
		printf("%d", n);
		fun(n - 1);
		fun(n - 1);
	}
}


int main() {
	fun(3);
	return 0;
}