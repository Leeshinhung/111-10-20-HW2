#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float pri, r, ld, tot;
	while (1) {
		printf("Enter loan principal(-1 to end):\n");
		scanf("%f", &pri);
		if (pri == -1) {
			return 0;
		}
		printf("Enter interest rate:\n");
		scanf("%f", &r);
		printf("Enter terms of the loan in days:\n");
		scanf("%f", &ld);
		tot = pri * r*ld / 365;
		printf("The interest charge is %f\n", tot);

		printf("\n");
	}
	return 0;
}