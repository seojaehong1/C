#include <stdio.h>
#include <string.h>

int main() {
    int i, j, k;
    char student[2][3][20];

    for (i = 0; i < 2; i++) {
        printf("\n학생 %d의 이름 : ", i + 1);
        fgets(student[i][0], 20, stdin);
        student[i][0][strcspn(student[i][0], "\n")] = '\0';  // 개행 제거

        printf("\n학생 %d의 학과 : ", i + 1);
        fgets(student[i][1], 20, stdin);
        student[i][1][strcspn(student[i][1], "\n")] = '\0';

        printf("\n학생 %d의 학번 : ", i + 1);
        fgets(student[i][2], 20, stdin);
        student[i][2][strcspn(student[i][2], "\n")] = '\0';
    }

    for (i = 0; i < 2; i++) {
        printf("\n\n학생 %d", i + 1);
        for (j = 0; j < 3; j++) {
            printf("\n\t%s", student[i][j]);
        }
    }

    return 0;
}
