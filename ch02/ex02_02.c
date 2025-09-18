#include <stdio.h>

void main() {
	int i;
	// 1차원 배열 초기화
	int score[3] = { 91, 86, 97 };
	char grade[3] = { 'A','B','A' };

	printf("\n *** 학년별 성적 현황 *** \n\n");

	for (i = 0; i < 3; i++) {
		printf("%3d학년 : 점수 = %d, 학점 = %c\n", i + 1, score[i], grade[i]);
	}

	getchar(); 
}