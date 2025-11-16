//10. Дана строка. Вывести строку, содержащую те же символы, но расположенные в обратном порядке.
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcd";
    int len = strlen(str);
    
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    
    return 0;
}