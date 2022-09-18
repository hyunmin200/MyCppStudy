#include <iostream>

int main1(void) 
{
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	// 연달아 사용 가능
	std::cout << num << " " << 'A';
	// c처럼 형식 지정자가 필요가 없음
	std::cout << " " << 3.14 << std::endl;
	// cout은 consoleoutput의 줄임말이다.
	return 0;
}