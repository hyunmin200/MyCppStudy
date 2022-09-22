#include <iostream>

using namespace std;
int main(void) 
{
	int num1 = 1020;
	int& num2 = num1; // 동일한 메모리 공간을 참조하게 됨

	num2 = 3047;
	cout << "VAL: " << num1 << endl;
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;

	return 0;
}