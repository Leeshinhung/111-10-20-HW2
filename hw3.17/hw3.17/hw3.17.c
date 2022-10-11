#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int acc;
	float beg, chg, cre, lim, blnc;
	while (1) {
		printf("Enter account number(-1 to end):\n");
		scanf("%d", &acc);
		if (acc == -1) {
			return 0;
		}
		printf("Enter beginning charges:\n");
		scanf("%f", &beg);
		printf("Enter total charges:\n");
		scanf("%f", &chg);
		printf("Enter total credits:\n");
		scanf("%f", &cre);
		printf("Enter total limit:\n");
		scanf("%f", &lim);
		blnc = beg + chg - cre;
		if (lim < blnc) {
			printf("Account:%d\n", acc);
			printf("Credit limit:%f\n", cre);
			printf("Balance:%f\n", blnc);
			printf("Credit limit Exceeded.\n");
		}
		printf("\n");
	}
	return 0;
}