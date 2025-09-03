#include <stdio.h>
#include <windows.h>
#include <io.h>
#include <fcntl.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char c, c_array[100];
    int i, i_array[100];
    short s, s_array[100];
    float f, f_array[100];
    long l, l_array[100];

    printf("\n char c 크기 = %d \t: char c_array크기 = %4d", sizeof(c), sizeof(c_array));
    printf("\n int c 크기 = %d \t: char i_array크기 = %4d", sizeof(i), sizeof(i_array));
    printf("\n short c 크기 = %d \t: short s_array크기 = %4d", sizeof(s), sizeof(s_array));
    printf("\n float c 크기 = %4d \t: char f_array크기 = %4d", sizeof(f), sizeof(f_array));
    printf("\n long c 크기 = %4d \t: l_array 크기 = %4d", sizeof(l), sizeof(l_array));



}

