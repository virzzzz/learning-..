#include<stdio.h>
//����޸�const int��ֵ �ڶ����ܽ�
int main002() {
	const int a = 10;//����a��ֵ
	int* p = &a;//û��д������ԭ����û�������������ȡָ���˼·
    *p = 100;//����*p��ֵ��
	printf("%d\n", a);//��������
	return 0;



}