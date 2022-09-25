#include <stdio.h>

//const离谁近就不能修改谁的值；
//*p代表指针的内存的值
//p代表指针的值
//总之。p有双值

int main0012() {
	//可以修改*p的值
	//int a = 1;
	//int b = 2;
	//const int* p = &a;//可以修改p存的值
	//p = 100;
	//printf("%d\n", p);

	//int* const p = &b;//可以修改*p（p内存的值）
	//*p = 10;
	//printf("%d", *p);
	//return 0;

	
	//not linearly increasling

	//二级指针是用来降级的，

	int a = 1;
	int b = 2;
	//const 修饰指针类型；const修饰指针变量
	//再加一个const

	//破解const 修改值
	const int const* p = &a;
	int** p1 = &b;
	printf("%d\n",*p1);
	return 0;





	

}
