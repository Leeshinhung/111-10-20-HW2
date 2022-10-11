#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sal ,tot;
	while (1) {
		printf("Enter sales in dollars(-1 to end):\n");
		scanf("%f", &sal);
		if (sal == -1) {
			return 0;
		}
		tot = 200 + sal * 0.09;
		printf("Salary is:%f\n", tot);
		printf("\n");
	}
	return 0;
}