//again   again
int main0012_03() {
	int a=1;
	int b=2;
	const int* const p = &a;
	int** p0 = &p;
	** p0 = &b;
	printf("%d\n", *p);
	return 0;
}