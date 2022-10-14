#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,h;
	float m;
	printf("manager press 1,hourly workers press 2,\ncommission workers press 3,pieceworkers press 4:");
	scanf("%d", &num);
	switch (num) {
	case 1:
		printf("How much is your weekly salary:");
		scanf("%f", &m);
		printf("weekly salary:%f",m);

		break;
	case 2:
		printf("How long do you work in the week:");
		scanf("%d", &h);
		printf("How much is your hourly salary");
		scanf("%f", &m);
		if (h > 40) {
			m = 40 * m + (h - 40)*m*1.5;
			printf("weekly salary:%f", m);
		}
		else {
			m = h * m;
			printf("weekly salary:%f", m);
		}
		break;
	case 3:
		printf("How much is the gross weekly sales:");
		scanf("%f",&m);
		m = 250 + 0.0057*m;
		printf("weekly salary:%f", m);
		break;
	case 4:
		printf("How much money for each of the items to produce:");
		scanf("%f", &m);
		printf("How many products are made?");
		scanf("%f", &h);
		m = h * m;
		printf("weekly salary:%f", m);
		break;
	}
	return 0;
}