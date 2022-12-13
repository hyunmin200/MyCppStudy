#include <stdio.h>

//함수
// Factorial
int Factorial(int _iNum)
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{
		iValue *= (j + 2);
	}

	Factorial(10);

	return iValue;
}

// 재귀함수
// 가독성, 구현의 용이
// 단점, 속도가 느리다.

// 재귀함수 팩토리얼
int Factorial_Re(int _iNum) {
	if (_iNum == 1) {
		return 1;
	}
	return _iNum * Factorial_Re(_iNum - 1);
}

// 피보나치 수열
// 1 1 2 3 5 8 13 21 34 55 .....

int Fibonacci(int _iNum) 
{
	if (_iNum == 1 || _iNum == 2) 
	{
		return 1;
	}

	int iPrev1 = 1;
	int iPrev2 = 1;
	int iValue = 0;

	for (int j = 0; j < _iNum; ++j) {
		iValue = iPrev1 + iPrev2;
		iPrev1 = iPrev2;
		iPrev2 = iValue;
	}

	return iValue;
}

int Fibonacci_Re(int _iNum) {
	if (_iNum == 1 || _iNum == 2)
	{
		return 1;
	}

	return Fibonacci_Re(_iNum-1) + Fibonacci_Re(_iNum - 2);
}

int main() {

	int iValue = Factorial_Re(4);
	//printf("%d", iValue);
	
	iValue = Fibonacci(10);
	iValue = Fibonacci_Re(10);
	printf("%d", iValue);

	// 배열
	int iArray[10] = { };



	// 포인터


	return 0;
}