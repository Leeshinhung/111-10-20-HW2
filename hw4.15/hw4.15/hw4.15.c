#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float r=1.1,t;
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 14;j++) {
			t = r*r;
		}
		t = t * 5000-5000;
		printf("%f", t);
		r += 0.005;
		printf("\n");
	}
	return 0;
}