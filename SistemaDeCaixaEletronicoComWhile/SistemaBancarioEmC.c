#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float saldo = 0, tran = 0;//variaveis para saldo e valor da transação
    int operacao = 0, sair = 0;//variavel que guarda o tipo de transação e a outra que guarda uma condição para continuar rodando
    printf("Seja bem vindo ao caixa bancário Will!\n\n");
    while(sair == 0){
        printf("-OPÇÕES-\n(1) Consultar seu saldo\n(2) Depositar\n(3) Realizar um saque\n(4) Sair do sistema\n\nDigite o numero que corresponde à operação que você deseja realizar: ");
        scanf("%d", &operacao);
        switch(operacao){
        case 1:
            printf("Seu saldo é: %.2f reais\n\n", saldo);
            break;
        case 2:
            printf("Digite o valor a ser depositado: ");
            scanf("%f", &tran);
            saldo = saldo + tran;
            printf("Depósito concluído! Novo saldo: %.2f\n\n", saldo);
            break;
        case 3:
            printf("Digite o valor a ser sacado: ");
            scanf("%f", &tran);
            if(tran<=saldo){
                saldo = saldo - tran;
            }else{
                printf("Saldo insuficiente para realizar o saque!!!\n\n");
            }
            printf("Saque concluído! Novo saldo: %.2f\n\n", saldo);
            break;
        case 4:
            printf("Saindo do sistema!!!\n\n");
            sair = 1;
            break;
        default:
            printf("Você digitou um número invalido!!!\n\n");
            break;
        }
    }

}
