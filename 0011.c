#include<stdio.h>
//用指针修改常量
int main_001() {
	const int a = 15;
	int* p = &a;//先定义一个指针来取得a所存在的地址；
	*p = 100;//容易写成a=15，一定要理解用指针修改常量：修改的一定是*p；
	printf("%d\n", a);//打印出来a的值
	return 0;




}