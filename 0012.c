#include <stdio.h>

//const��˭���Ͳ����޸�˭��ֵ��
//*p����ָ����ڴ��ֵ
//p����ָ���ֵ
//��֮��p��˫ֵ

int main0012() {
	//�����޸�*p��ֵ
	//int a = 1;
	//int b = 2;
	//const int* p = &a;//�����޸�p���ֵ
	//p = 100;
	//printf("%d\n", p);

	//int* const p = &b;//�����޸�*p��p�ڴ��ֵ��
	//*p = 10;
	//printf("%d", *p);
	//return 0;

	
	//not linearly increasling

	//����ָ�������������ģ�

	int a = 1;
	int b = 2;
	//const ����ָ�����ͣ�const����ָ�����
	//�ټ�һ��const

	//�ƽ�const �޸�ֵ
	const int const* p = &a;
	int** p1 = &b;
	printf("%d\n",*p1);
	return 0;





	

}
