#include <stdio.h>
//again
int main0012_01() {
	int a = 1;
	int b = 2;
	const int const* p = &a;
	int **p1 = &b;
	printf("%d\n",*p );//´òÓ¡µÄÊÇ*p
	return 0;
}