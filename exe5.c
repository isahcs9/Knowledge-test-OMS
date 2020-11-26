#include <stdio.h>

int main() {
    char s[200];
    int n = 0;

    printf("Escreva uma string: ");
    scanf("%s", &s);

    while(s[n] != '\0'){
        n++;
    }

    printf("A string tem %d caracteres.", n);

    return 0;
}
