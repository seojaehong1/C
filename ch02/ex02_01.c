#include <stdio.h>

int main() {
    char c, c_array[100];
    int i, i_array[100];
    short s, s_array[100];
    float f, f_array[100];
    long l, l_array[100];

    printf("\n char c 크기 = %d \t: char c_array 크기 = %4d", (int)sizeof(c), (int)sizeof(c_array));
    printf("\n int i 크기 = %d \t: int i_array 크기 = %4d", (int)sizeof(i), (int)sizeof(i_array));
    printf("\n short s 크기 = %d \t: short s_array 크기 = %4d", (int)sizeof(s), (int)sizeof(s_array));
    printf("\n float f 크기 = %d \t: float f_array 크기 = %4d", (int)sizeof(f), (int)sizeof(f_array));
    printf("\n long l 크기 = %d \t: long l_array 크기 = %4d", (int)sizeof(l), (int)sizeof(l_array));

    getchar();
    return 0;
}
