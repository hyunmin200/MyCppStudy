#include <stdio.h>

int Add(int a, int b){
	return a + b;
}

int main2() {
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


	// �ܼ�
	// printf
	printf("abcdef %d \n", 10);
	printf("abcdef %f \n", 3.14f);

	for (int i = 0; i < 10; ++i) {
		printf("Output i : %d \n", i);
	}

	// scanf
	int iInput = 0;
	scanf("%d", &iInput);


	// �Լ�
	// �Լ��� ����ϴ� �޸� ����
	// ���� �޸� ����

	return 0;
}

// ����Ű
// ������ ���� �ּ�					: Ctrl + k, c
// ������ ���� �ּ� ����			: Ctrl + K, u
// ���ϴ� ������ �巡�׸� �ϱ�		: Alt Drag

// �����
// ����� ���� : F5
// ���� �ߴ������� �ڵ� ���� : F5 �� �� �� ������
// �𺡱� �ߴ��� ���� �� ���� : F9
// ����� ��, ���� ����			: F10
// ����� ��, ���� ����(�t�� ����) : F11
// ����� ��, ����� �����ϱ� : Shift + F5