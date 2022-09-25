#include <stdio.h>
int main1() {
	char arr[2] = { 's','b'};
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
	{
		printf("%c",&arr[i]);
		return 0;

	}


	

	


}