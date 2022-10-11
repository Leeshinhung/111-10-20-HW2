#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float t, r, ld, tot;
	while (1) {
		printf("Enter # of hours worked(-1 to end):\n");
		scanf("%f", &t);
		if (t == -1) {
			return 0;
		}
		printf("Enter hourly rate of the worker($00.00):\n");
		scanf("%f", &r);
		if (t <= 40)
			tot = t * r;
		else
			tot = 40 * r + (t - 40)*1.5*r;
		printf("The interest charge is %f\n", tot);

		printf("\n");
	}
	return 0;
}