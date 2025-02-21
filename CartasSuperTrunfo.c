#include <stdio.h>

int main() {

    printf("Cadastro de Cartas\n \n");
    
    char estado[8], codigo_da_carta[70], nome_da_cidade[70];
    int populacao, numero_de_pontos_turisticos;
    float area, PIB;

    printf("Digite os dados da carta:\n\n")

    printf("Digite o Estado:");
    scanf("%s", &estado);

    printf("Digite o código da carta:");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da Cidade:");
    scanf("%s",&nome_da_cidade);
 
    printf("Digite o número de habitantes da Cidade:");
    scanf("%d", &populacao);

    printf("Digite a área da Cidade em km²:");
    scanf("%f", &area);

    printf("Digite o PIB da Cidade:");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos da Cidade:");
    scanf("%d", &numero_de_pontos_turisticos);

   printf("Estado:%s,  Código:%s, Nome da Cidade:%s, População:%d, Área:%f, PIB:%f, Número de pontos turísticos:%d ", estado, codigo_da_carta, nome_da_cidade, populacao, area, PIB, numero_de_pontos_turisticos);
    
return 0;
    
}
