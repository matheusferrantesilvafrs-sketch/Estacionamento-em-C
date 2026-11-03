/*Sistema de Estacionamento
- Registrar entrada
- Pesquisar veículo pela placa
- Controlar vagas ocupadas e disponiveis
- Calcular permanência e valor
- Ordenar veículos
- Representar setores/vagas por matriz

Regras que o Líder deixou para o projeto:
- O estacionamento terá no máximo 30 vagas*/

#include <stdio.h>

struct Carro{
    int ano;
    int modelo;
}

int main(void){

    int vagas[6][5];
    int opcoes;
    printf("|Bem-vindo ao estacionamento!|\nO que você deseja?\n");

    do{
        scanf("%d", &opcoes);
        switch(opcoes){
            case 1:
                printf("\nRegistrar veiculos foi escolhido\n");
                break;

            case 2:
                printf("\nProcurar veiculo\n");
                break;

            case 3:
                printf("\nControle de vagas\n");
                break;

            case 4:
                printf("\nPagar e ir embora\n");
                break;

            case 5:
                printf("\nSair");
                break;

            default:
                printf("\nEssa função não existe\n");
                break;
        }
    }while(opcoes != 5);
        
    return 0;
}
