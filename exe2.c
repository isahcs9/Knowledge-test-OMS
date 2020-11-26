#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ConcatEResolve(char *s, char *t, int k);

int main() {

    char s[99];
    char t[99];
    int k;


    do{
        printf("Informe a String inicial (entre 1 e 100 caracteres): ");
        scanf("%s",s);
        if (strlen(s) > 100 || strlen(s) < 1 ){
            printf("Numero de caracteres incorreto.\n");
        }
    } while (strlen(s) > 100 || strlen(s) < 1);

    do{
        printf("Informe a String desejada (entre 1 e 100 caracteres): ");
        scanf("%s",t);
        if (strlen(t) > 100 || strlen(t) < 1){
            printf("Numero de caracteres incorreto.\n");
        }
    } while (strlen(t) > 100 || strlen(t) < 1);

    /*deixado entre 0 e 100, porque, na minha opinião, 
    duas palavras iguais implicam em 0 manobras*/
    do {
        printf("Informe o numero de operacoes (entre 0 e 100): ");
        scanf("%d",&k);
        if (k > 100 || k < 0){
            printf("Numero incorreto.");
        }
    }while (k > 100 || k < 1);

    ConcatEResolve(s, t, k);

    return 0;
}

void ConcatEResolve(char *s, char *t, int k){
    int n = 0;
    int i = 0;

    while(i < strlen(s)){
        if (s[i] != t[i]){
            n++;
        }
        i++;
    } 

    if(strlen(s) > strlen(t)){
        i = strlen(t);
        while (i < strlen(s)){
            s[i] = t[i];    
        }
    }

    i = 0;
    while(i < strlen(t)){
        if (s[i] != t[i]){
            n++;
            s[i] = t[i];
        }
        i++;
    } 

    if (n == k){
        printf("SIM\n");
        //printf("%s",s);
    } else {
        printf("NAO\n");
        //printf("n = %d", n);
        //printf("%s",s);
    }
    
}


