#include <iostream>

int main1(void) 
{
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	// ���޾� ��� ����
	std::cout << num << " " << 'A';
	// có�� ���� �����ڰ� �ʿ䰡 ����
	std::cout << " " << 3.14 << std::endl;
	// cout�� consoleoutput�� ���Ӹ��̴�.
	return 0;
}