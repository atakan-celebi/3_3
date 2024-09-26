#include <stdio.h>

int main(void) {
    int a;
    char nome[10];
    printf("inserisci il nome");
    scanf("%s", &nome);
    printf("inserisci eta'");
    scanf("%d", &a);
    if (a >= 18) {
        printf("%s e' maggiorenne", nome);
    }
    else {
        printf("%s e' minorenne", nome);
    }

}

