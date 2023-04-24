#include <stdio.h>

int main(){
    int INDICE = 13, SOMA = 0, K = 0;

    while(K < INDICE){
        K = K + 1;
        SOMA = SOMA + K;
    }

    printf("\n %d \n\n ", SOMA);            //RESULTADO = 91

    return 0;
}