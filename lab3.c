//10.Даны два ненулевых числа. Найти сумму, разность, произведение и частное их квадратов.
#include <stdio.h>

int main() {
    double a = 5.0, b = 3.0; //double потому что дробные числа могут быть
    
    double sum = a*a + b*b;
    double diff = a*a - b*b;
    double mult = a*a * b*b;
    double div = (a*a) / (b*b);
    
    printf("Сумма квадратов: %.2f\n", sum);
    printf("Разность квадратов: %.2f\n", diff);
    printf("Произведение квадратов: %.2f\n", mult);
    printf("Частное квадратов: %.2f\n", div);
    
    return 0;
