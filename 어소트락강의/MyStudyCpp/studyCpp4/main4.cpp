#include <stdio.h>


typedef struct _tagMyST {
	int a;
	float f;
}MYST;

typedef int INT;

typedef struct _tagBig {
	MYST k;
	int i;
	char c;
}BiG;



int main() {
	// 구조체
	MYST t;
	t.a = 10;
	t.f = 10.231f;

	int iSize = sizeof(MYST);
	return 0;
}