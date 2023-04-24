#include <stdio.h>
#include <math.h>

int main(){
    int anterior = 0, atual = 1, posterior = 1;
    int quant_num, contador, num, cont_num = 0;

    printf("Digite a quantidade de números desejados na sequência de fibonacci:\n");
    scanf("%d", &quant_num);
    printf("Digite o número que você quer saber se pertence à sequência de números selecionado anteriormente: \n");
    scanf("%d", &num);
    printf("\n --------------- Sequência de Fibonacci ------------ \n");
    printf("%d\n", anterior);

    while(contador <= quant_num){
        posterior = atual + anterior;
        anterior = atual;
        atual = posterior;

        printf("%d\n", anterior);

        if(posterior == num){
            ++cont_num;
        }

        ++contador;
    }

    if(cont_num == 0){
        printf("\n O número %d não faz parte da sequência de fibonacci!\n", num);
    }
    else{
        printf("\n O número %d faz parte da sequência de fibonacci!\n", num);
    }

    return 0;
}