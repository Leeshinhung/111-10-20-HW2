#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 1;i <= 5;i++) {
		for (int j = 1;j <= (6-i);j++) {
			printf(" ");
		}
		for (int k = 1;k <= (i*2-1);k++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1;i <= 4;i++) {
		for (int j = 1;j <= i+1;j++) {
			printf(" ");
		}
		for (int k = 1;k <= (i * (-2) +9);k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}