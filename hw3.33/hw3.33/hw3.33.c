#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 12;j++) {
			if (i == 1 && (j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8 || j == 9 || j == 10 )) {
				printf(" ");
				
			}
			else
			{
				printf("*");
			}
			
		}
		printf("\n");
	}
	return 0;
}