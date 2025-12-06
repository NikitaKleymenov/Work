//10. Робот может перемещаться в четырех направлениях («С» — север, «З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, − 1 — поворот направо. 
//Дан символ C — исходное направление робота и целое число N — посланная ему команда. Вывести направление робота после выполнения полученной команды.
#include <stdio.h>

int main() {
    char naprav = 'N';  // N - север, W - запад, S - юг, E - восток
    int komanda = 1; // "0" - идти дальше, "1" - налево, "-1" - направо
    
    if (komanda == 0) {
    
    }
    else if (komanda == 1) {
        if (naprav == 'N') naprav = 'W';
        else if (naprav == 'W') naprav = 'S';
        else if (naprav == 'S') naprav = 'E';
        else if (naprav == 'E') naprav = 'N';
    }
    else if (komanda == -1) {
        if (naprav == 'N') naprav = 'E';
        else if (naprav == 'E') naprav = 'S';
        else if (naprav == 'S') naprav = 'W';
        else if (naprav == 'W') naprav = 'N';
    }
    
    if (naprav == 'N') printf("Север\n");
    else if (naprav == 'W') printf("Запад\n");
    else if (naprav == 'S') printf("Юг\n");
    else if (naprav == 'E') printf("Восток\n");
    
    return 0;
}
