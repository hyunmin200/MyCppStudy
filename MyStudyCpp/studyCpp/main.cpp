#include <iostream>

#define HUNGRY   0x001
#define THIRSTY  0x002
#define TIRED    0x004
#define FIRE	 0x008

#define COLD	 0x010
#define POISON   0x020
#define COLD1	 0x040
#define POISON1  0x080

#define COLD2	 0x100
#define POISON2  0x200
#define COLD3	 0x400
#define POISON3  0x800

// 1.������
// 2.��������

// �ּ�
// ���� ��Ȱ, �ڵ�� �νĵ��� �ʴ´�.


//��������
int global = 0;


int Add(int left, int right){
	return left + right;
}

//�Լ�
int main() {
	// �ڷ���  (ũ�� ����, byte) Data Type
	// ������ : char(1), short(2), int(4), long(4), long long(8)
	// �Ǽ��� : float(4), double(8)
	// int : �ڷ���(Ű����)
	// i : ������(���� �̸�) 

	// 1 ����Ʈ�� ����� ǥ��
	// 256���� -> 0 ~ 255
	int i = 0;
	//char c = 0;
	unsigned char c = 0; // �����
	c = 255;

	// 1 ����Ʈ�� ���, ���� �Ѵ� ǥ��
	// -128 ~ 0 ~ 127
	char c1 = 0; // �տ� signed�� ������ �� ��
	c1 = -1;
	//���⿡ 255�� �ִ´ٸ� -1�̶�� �ν��� ��
	c1 = 255;
	
	// ���� ���� ã��(2�� ������)
	// �����Ǵ� ����� ��ȣ�� ���� ��, 1�� ���Ѵ�

	int a = 4 + (int)4.0;

	// ����ǥ�� ��İ� �Ǽ� ǥ�� ����� �ٸ���
	// �Ǽ� ǥ������� ���е��� �����Ѵ�.
	// ���� double(8) �ڷ����� float(4) ���� �� �Ʒ��� �Ҽ������� ��Ȯ�ϰ� ǥ���� �����ϴ�

	// ������ ��������, �Ǽ��� �Ǽ����� �����ϵ�, �� ǥ������� �� �����ڰ� ����� ��� ��������� ��ȯ����
	float f = 10.2415f + (float)20; // �̷������� ����� ����ȯ �ϱ�!

	// �Ǽ��� ����� ���� ��� �Ҽ��� �ڿ� f �� ���ø� float �ڷ�������, f �� ������ ������ double �ڷ������� �����Ѵ�.
	// 0.1f; 0.1;

	// ������
	// ���� ������, =
	
	// ��� ������
	// +, -, *, /, %(��ⷯ��, ������)
	// ++, -- (���� ������)
	// �� �ܰ� ���� �Ǵ� ����
	int data = 10 + 10;
	// data = data + 20;
	data += 20; // �Ȱ��� ���� ��

	// data = 10 / 3;
	// float sd = 10.f / 3.f;
	data = (int)(10.f / 3.f);


	data = 0;
	++data;// ����(��ġ)
	data++;// ����(��ġ)

	data = 0;
	
	a = 10;
	// data = a++; // data�� 10�� ��
	data = ++a; // data�� 11�� ��

	// ���� �����ڷ� ����ϴ� ���, ������ �켱������ ���� �������� �и���.

	data = 0;
	data--;
	data--;

	// �� ������
	// !(��), &&(and), ||(or)
	// ��(ture)�� ����(false)
	// ��   : 0�� �ƴ� ��� ��, 1
	// ���� : 0
	bool truefalse = true;

	bool IsTrue = 100;

	IsTrue = true;
	IsTrue = !IsTrue;

	int iTrue = 0;
	iTrue = !iTrue;

	iTrue = 0 && 200;
	iTrue = 0 || 0;

	// �� ������
	// ==, !=
	// ��, ����


	// ����
	// if, else
	data = 0;
	if (0 && 200)
	{
		data = 100;
	}

	if (data == 100) 
	{
		
	}
	/*else if ()
	{

	}
	else if () 
	{

	}*/
	else 
	{

	}
	// switch case
	switch (10)
	{
	case 10:
		break;
	case 20:
		break;
	default:
		break;
	}

	int iTest = 10;
	if (iTest == 10) 
	{

	}
	else if (iTest == 20) 
	{

	}
	else 
	{

	}
	// ���� ������
	// :?

	iTest == 20 ? iTest = 100 : iTest == 200;
	
	if (iTest == 20) 
	{
		iTest = 100;
	}
	else
	{
		iTest = 200;
	}

	// ��Ʈ ������
	// ����Ʈ <<, >>
	unsigned char byte = 10;
	byte <<= 3; // �� 2 ^ n ����̰�
	byte <<= 2; // �� 2 ^ n ���� ���̴�

	// ��Ʈ ��(&), ��(|), xor(^), ����(~)
	// & �Ѵ� 1�� ��� 1
	// | ���� �ϳ��� 1 �̸� 1
	// ^ ������ 0, �ٸ��� 1
	// ~ 1�� 0����, 0�� 1��
	
	unsigned int iStatus = 0;

	// �����߰�
	iStatus |= HUNGRY;
	iStatus |= THIRSTY;

	// ���� Ȯ��
	if (iStatus & THIRSTY) {

	}

	// Ư�� �ڸ� ��Ʈ ����
	iStatus &= ~THIRSTY; 

	// ����
	// 1. ��������
	// 2. ��������
	// 3. ��������
	// 4. �ܺκ���


	// ��������
	int iName = 0;
	// ��ȣ �ȿ� ����� ����(�Լ�, ����)
	{
		//������ ��Ģ
		int iName = 100;

		iName;
	}


	// �Լ�
	data = Add(10, 20);






	return 0;
}