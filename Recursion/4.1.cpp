#include<iostream>
using namespace std;


void fun1(int n) {
	if (n > 0) {
		printf("%d ", n);
	    fun1(n - 1);
	}
}

void fun2(int n) {
	if (n > 0) {
		fun2(n - 1);
		printf("%d ", n);
	}
}

int main() {
	printf("Calling fun1:\n");
	fun1(3);
	printf("\nCalling fun2:\n");
	fun2(3);
	return 0;
}