#pragma once
typedef struct { // 희소 행렬을 표현하기 위한 구조체 term 정의
	int row;
	int col;
	int value;
} term;

void smTranspose(term a[], term b[]);