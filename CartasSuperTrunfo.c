#include <stdio.h>

int main() {
    printf("Cadastro de Cartas\n \n");
    
    char estado[8], codigo_da_carta[70], nome_da_cidade[70];
    int populacao, numero_de_pontos_turisticos;
    float area, PIB;

    printf("Carta 1:\n \n");
     
    printf("Digite o Estado:");
    scanf("%s", estado);

    printf("Digite o código da carta:");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da Cidade:");
    scanf("%s",nome_da_cidade);
 
    printf("Digite o número de habitantes da Cidade:");
    scanf("%d", populacao);
    
    printf("Digite a área da Cidade em km²:");
    scanf("%f", area);

     



    
return 0;
    
}
