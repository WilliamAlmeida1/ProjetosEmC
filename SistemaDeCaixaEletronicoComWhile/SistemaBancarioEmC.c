#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float saldo = 0, tran = 0;//variaveis para saldo e valor da transa��o
    int operacao = 0, sair = 0;//variavel que guarda o tipo de transa��o e a outra que guarda uma condi��o para continuar rodando
    printf("Seja bem vindo ao caixa banc�rio Will!\n\n");
    while(sair == 0){
        printf("-OP��ES-\n(1) Consultar seu saldo\n(2) Depositar\n(3) Realizar um saque\n(4) Sair do sistema\n\nDigite o numero que corresponde � opera��o que voc� deseja realizar: ");
        scanf("%d", &operacao);
        switch(operacao){
        case 1:
            printf("Seu saldo �: %.2f reais\n\n", saldo);
            break;
        case 2:
            printf("Digite o valor a ser depositado: ");
            scanf("%f", &tran);
            saldo = saldo + tran;
            printf("Dep�sito conclu�do! Novo saldo: %.2f\n\n", saldo);
            break;
        case 3:
            printf("Digite o valor a ser sacado: ");
            scanf("%f", &tran);
            if(tran<=saldo){
                saldo = saldo - tran;
            }else{
                printf("Saldo insuficiente para realizar o saque!!!\n\n");
            }
            printf("Saque conclu�do! Novo saldo: %.2f\n\n", saldo);
            break;
        case 4:
            printf("Saindo do sistema!!!\n\n");
            sair = 1;
            break;
        default:
            printf("Voc� digitou um n�mero invalido!!!\n\n");
            break;
        }
    }

}
