#include <stdio.h>

int main() {

    printf("Cadastro de Cartas\n \n");
    
    char estado[8], codigo_da_carta[70], nome_da_cidade[70];
    int populacao, numero_de_pontos_turisticos;
    float area, PIB;

    printf("Digite os dados da carta:\n\n");

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
     
    printf("\nCarta 1:\n");

   printf("\n Estado:%s\n Código:%s\n Nome da Cidade:%s\n População:%d\n Área:%f km²\n PIB:%f bilhões de reais\n Número de pontos turísticos:%d\n ",estado, codigo_da_carta, nome_da_cidade, populacao, area, PIB, numero_de_pontos_turisticos);
    
   printf("\n\nCarta registrada com sucesso!\n");
   printf("Digite os dados da próxima carta:\n");

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
    
   printf("\nCarta 2:\n");

   printf("\n Estado:%s\n Código:%s\n Nome da Cidade:%s\n População:%d\n Área:%f km²\n PIB:%f bilhões de reais\n Número de pontos turísticos:%d\n ",estado, codigo_da_carta, nome_da_cidade, populacao, area, PIB, numero_de_pontos_turisticos);
    printf( "\nCarta registrada com sucesso!\n");
   
   
return 0;
    
}
