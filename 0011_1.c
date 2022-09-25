#include<stdio.h>
//如何修改const int的值 第二次总结
int main002() {
	const int a = 10;//定义a的值
	int* p = &a;//没有写出来的原因是没有总体上理解先取指针的思路
    *p = 100;//定义*p的值；
	printf("%d\n", a);//完美避雷
	return 0;



}