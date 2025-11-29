//10. Даны два целых числа: A, B. Проверить истинность высказывания: «Ровно одно из чисел A и B нечетное».
#include <stdio.h>

int main() {
    int A = 5;
    int B = 8;
    
    if ((A % 2) != (B % 2))
        printf("ДА\n");
    else
        printf("НЕТ\n");
    
    return 0;
}
