#include <stdio.h>

//用二级指针来修改含有const
int main() {
	int a = 1;
	int b = 2;
	const int const* p = &a;
	int **pp= &p;
	*pp = &b;
	printf("%d\n", *p);

	return 0;
}
//AC

	