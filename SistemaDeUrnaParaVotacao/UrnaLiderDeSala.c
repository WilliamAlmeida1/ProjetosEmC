#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int candidatos[5] = {0,0,0,0,0}, pessoas, voto, contador = 1, vencedor;
    printf("Digite a quantidade de pessoas que irão votar: ");
    scanf("%d", &pessoas);
    while(contador <= pessoas){
        printf("Candidatos:\n\n1 - Ailson Salviano\n2 - Danis Daniel\n3 - Kamille Paulino\n4 - Nulo\n\nDigite o numero que corresponde ao seu voto: ");
        scanf("%d", &voto);
        switch(voto){
    case 1:
        candidatos[0]++;
        break;
    case 2:
        candidatos[1]++;
        break;
    case 3:
        candidatos[2]++;
        break;
    case 4:
        candidatos[3]++;
        break;
    default:
        printf("DIGITOU UM NUMERO INVALIDO!! \n\n");
        candidatos[3]++;
        break;
        }
        contador++;
    }
    printf("Quantidade de pessoas que votaram: [%d]\n", pessoas);
    printf("Quantidade de pessoas que votaram no Ailson Salviano: [%d]\n", candidatos[0]);
    printf("Quantidade de pessoas que votaram na Kamille Paulino: [%d]\n", candidatos[1]);
    printf("Quantidade de pessoas que votaram no Danis Daniel: [%d]\n", candidatos[2]);
    printf("Quantidade de pessoas que votaram NULO ou INVALIDO: [%d]\n", candidatos[3]);
        if(candidatos[0] > candidatos[1] && candidatos[0] > candidatos[2]){
        printf("Ganhador da votação: Ailson Salviano\n");
    }else if(candidatos[1] > candidatos[0] && candidatos[1] > candidatos[2]){
        printf("Ganhador da votação: Danis Daniel\n");
    }else if(candidatos[2] > candidatos[0] && candidatos[2] > candidatos[1]){
        printf("Ganhador da votação: Kamille Paulino\n");
    }else{
        printf("Houve um empate entre candidatos!\n");
    }
}
