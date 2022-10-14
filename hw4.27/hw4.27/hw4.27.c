#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int c=250000;
	for (int i = 1;i < 500;i++) {
		for (int j = 1;j < i;j++) {
			if (c == (i*i + j * j)) {
				c = sqrt(c);
				printf("%d %d %d\n", i, j, c);
				c = pow(c, 2);
			}
		}
	}
	return 0;
}