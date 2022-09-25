#include <stdio.h>
//again
int main0012_02() {
	int a = 1;
	int b = 2;
	const int const* p = &a;
	int** p1 = &b;
	printf("%d\n", *p1);
	return 0;
}