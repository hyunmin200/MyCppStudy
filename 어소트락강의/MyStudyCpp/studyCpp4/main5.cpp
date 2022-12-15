#include <stdio.h>
#include "func.h"

// 변수의 종류
// 1. 지역변수
// 2. 전역변수
// 3. 정적 변수(static)
// 4. 외부변수(extern)

// 메모리 영역
// 1. 스택영역
// 2. 데이터 영역
// 3. 읽기 전용(코드, ROM)
// 4. 힙 영역

// 전역변수
int g_i = 0; //Data 영역

// Data 영역 특징
// 프로그램 시작 시 생성
// 프로그램 종료 시 해제

#include "common.h"

void Test() {
	static int i = 0;

	int a = 0;
}

int main() {
	g_iStatic = 100;
	g_iExtern = 500;

	Add(0, 0);
	return 0;
}