#include <iostream>
#include <stdio.h>

int Add(int a, int b){
	return a + b;
}

int main() {
	int iData = Add(100, 200);
	
	// �ݺ���
	/*for (//�ݺ��� �ʱ�ȭ ;//�ݺ��� ���� üũ ;//�ݺ��� ���� ) {

	}*/
	
	for (int i = 0; i < 2; ++i) 
	{
		printf("Output Test\n");
	}

	int i = 0;
	while (i < 2) {
		printf("Output Test\n");

		i++;
	}

	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		printf("Output Test\n");
	}

	return 0;
}