#include <iostream>

int main(void) {
	char name[100];
	char phone[100];

	std::cout << "�̸�: ";
	std::cin >> name;

	std::cout << "��ȭ��ȣ: ";
	std::cin >> phone;

	std::cout << name << " " << phone;
	return 0;
}