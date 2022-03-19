#include <stdio.h>
/*
   INCORRETO -> ALGUMAS SEQUENCIAS DÃO O NUMERO ERRADO
*/
int main() {
    int n;
    int max;
    int min;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j > i) {
               min = i; 
            }
            else {
                max = j; //Numero em falta
            }
        }
    }
    printf("%d", max);
}
