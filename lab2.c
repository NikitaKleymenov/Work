#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = "hello world world";
    char s0[100] = "world";
    
    printf("Было: ");
    printf(s);
    printf("\n");
    
    char *p;
    while (p = strstr(s, s0)) {
        strcpy(p, p + 5);
    }
    
    printf("Стало: ");
    printf(s);
    
    return 0;
}
