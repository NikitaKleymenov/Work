//10. Дана матрица размера M  × N. 
//Найти номера строки и столбца для элемента матрицы, 
//наиболее близкого к среднему значению всех ее элементов.
#include <stdio.h>

int main() {
    int M = 2, N = 3;
    int matrica[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int summa = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            summa = summa + matrica[i][j];
        }
    }
    
    float srednee = (float)summa / (M * N);
    printf("Среднее значение: %.2f\n", srednee);
    int blizh_i = 0, blizh_j = 0; 
    float min_raznica = 1000000;
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            // Разница между элементом и средним (по модулю)
            float raznica = matrica[i][j] - srednee;
            if (raznica < 0) raznica = -raznica;  // сам собсна модуль
            
            // Если нашли элемент ближе к среднему
            if (raznica < min_raznica) {
                min_raznica = raznica;
                blizh_i = i;
                blizh_j = j;
            }
        }
    }
    printf("Ближайший элемент: %d\n", matrica[blizh_i][blizh_j]);
    printf("Строка: %d, Столбец: %d\n", blizh_i + 1, blizh_j + 1);
    
    return 0;
}
