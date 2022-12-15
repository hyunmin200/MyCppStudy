#include "func.h"
#include <stdio.h>
#include "common.h"

int Add(int a, int b) {
	printf("g_iStatic 의 값은 : %d", g_iStatic);
	printf("g_iExtern 의 값은 : %d", g_iExtern);
	return a + b;
}

int Sbu(int a, int b) {
	return a - b;
}

int Mul(int a, int b){
	return a * b;
}