#include <iostream>

// 주석
// 설명 역활, 코드로 인식되지 않는다.

int main() {
	// 자료형  (크기 단위, byte) Data Type
	// 정수형 : char(1), short(2), int(4), long(4), long long(8)
	// 실수형 : float(4), double(8)
	// int : 자료형(키워드)
	// i : 변수명(변수 이름) 

	// 1 바이트로 양수만 표현
	// 256가지 -> 0 ~ 255
	int i = 0;
	//char c = 0;
	unsigned char c = 0; // 양수만
	c = 255;

	// 1 바이트로 양수, 음수 둘다 표현
	// -128 ~ 0 ~ 127
	char c1 = 0; // 앞에 signed가 생략된 것 임
	c1 = -1;
	//여기에 255를 넣는다면 -1이라고 인식이 됨
	c1 = 255;
	
	// 음의 정수 찾기(2의 보수법)
	// 대응되는 양수의 부호를 반전 후, 1을 더한다

	int a = 4 + (int)4.0;

	// 정수표현 방식과 실수 표현 방식은 다르다
	// 실수 표현방식은 정밀도에 의존한다.
	// 따라서 double(8) 자료형이 float(4) 보다 더 아래의 소수점까지 정확하게 표현이 가능하다

	// 정수는 정수끼리, 실수는 실수끼리 연산하되, 두 표현방식의 피 연산자가 연산될 경우 명식적으로 변환하자
	float f = 10.2415f + (float)20; // 이런식으로 명시적 형변환 하기!

	// 실수를 상수로 적을 경우 소수점 뒤에 f 를 부팅면 float 자료형으로, f 를 붙이지 않으면 double 자료형으로 간주한다.
	// 0.1f; 0.1;

	// 연산자
	// 대입 연산자, =
	
	// 산술 연산자
	// +, -, *, /, %(모듈러스, 나머지)
	// ++, -- (증감 연산자)
	// 한 단계 증가 또는 감소
	int data = 10 + 10;
	// data = data + 20;
	data += 20; // 똑같은 내용 ↑

	// data = 10 / 3;
	// float sd = 10.f / 3.f;
	data = (int)(10.f / 3.f);


	data = 0;
	++data;// 전위(전치)
	data++;// 후위(후치)

	data = 0;
	
	a = 10;
	// data = a++; // data에 10이 들어감
	data = ++a; // data에 11이 들어감

	// 후위 연산자로 사용하는 경우, 연산자 우선순위가 가장 나중으로 밀린다.

	data = 0;
	data--;
	data--;

	// 논리 연산자
	// !(역), &&(and), ||(or)
	// 참(ture)과 거짓(false)
	// 참   : 0이 아닌 모든 값, 1
	// 거짓 : 0
	bool truefalse = true;

	bool IsTrue = 100;

	IsTrue = true;
	IsTrue = !IsTrue;

	int iTrue = 0;
	iTrue = !iTrue;

	iTrue = 0 && 200;
	iTrue = 0 || 0;

	// 구문
	// if, else
	// switch case

	// 삼항 연산자
	// :?
	
	return 0;
}