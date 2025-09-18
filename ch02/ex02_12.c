#include <stdio.h>
#include <string.h>

struct employee {
	char name[10];
	int year;
	int pay;
};

void main() {
	int i;
	struct employee Lee[4] = {
		{ "김민호", 2022, 4200 },
		{ "박한울", 2023, 3300 },
		{ "이상민", 2023, 3500 },
		{ "이상민", 2024, 2900 }
	};

	for (i = 0; i < 4; i++) {
		printf("\n 이름 : %s", Lee[i].name);
		printf("\n 입사 : %d", Lee[i].year);
		printf("\n 급여 : %d \n", Lee[i].pay);
	}
	getchar();
}