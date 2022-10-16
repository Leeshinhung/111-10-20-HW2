#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 1;i <= 10;i++) {
		for (int j = 0;j < i;j++) 
			printf("*");
		printf("\n");
	}
	printf("\n");
	for (int i = 10;i >= 1;i--) {
		for (int j = 0;j < i;j++) 
			printf("*");
		printf("\n");
	}
	printf("\n");
	for (int i = 0;i <= 10;i++) {
		for (int j = 0;j < i;j++) 
			printf(" ");
		for (int k = 0;k < 10 - i;k++) 
			printf("*");
		printf("\n");
	}
	printf("\n");
	for (int i = 10;i >= 1;i--) {
		for (int j = 0;j < i-1;j++) 
			printf(" ");
		for (int k = 0;k < 11 - i;k++) 
			printf("*");
		printf("\n");
	}
	return 0;
}