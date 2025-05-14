#include <stdio.h>

int main(){
    char estado[3];           
    char codigo[10];           
    char nome_cidade[100];     
    int populacao;             
    float area;                
    float pib;                 
    int pontos_turisticos;     
    float densidade_populacional; 
    float pib_per_capita;        

}

// Função para ler os dados de uma carta
{
    printf("Estado (ex: SP): ");
    scanf(" %2s", carta->estado);

    printf("Código da carta (ex: C123): ");
    scanf(" %9s", carta->codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->nome_cidade);

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em reais): ");
    scanf("%f", &carta->pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

// Função para calcular densidade populacional e PIB per capita
 calcular_indicadores(carta * carta); {
    if (carta->area != 0) {
        carta->densidade_populacional = carta->populacao / carta->area;
    } else {
        carta->densidade_populacional = 0;
    }

    if (carta->populacao != 0) {
        carta->pib_per_capita = carta->pib / carta->populacao;
    } else {
        carta->pib_per_capita = 0;
    }
}

// Função para comparar um atributo específico entre duas cartas
void comparar_atributo(Carta1, Carta2); {
    // Escolha do atributo para comparação: "populacao", "area", "pib", "densidade", "pib_per_capita"
    // Neste exemplo, vamos comparar a População
    char atributo[] = "populacao";

    printf("\nComparação de cartas (Atributo: %s):\n", atributo);

    if (strcmp(atributo, "populacao") == 0) {
        printf("Carta 1 - %s (%s): %d\n", c1.nome_cidade, c1.estado, c1.populacao);
        printf("Carta 2 - %s (%s): %d\n", c2.nome_cidade, c2.estado, c2.populacao);

        if (c1.populacao > c2.populacao) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", c1.nome_cidade);
        } else if (c1.populacao < c2.populacao) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", c2.nome_cidade);
        } else {
            printf("\nResultado: Empate!\n");
        }
    }
    // Adicionar outras comparações conforme necessário
}

int main() {
    carta1, carta2;

    printf("Digite os dados da Carta 1:\n");
    ler_carta(&carta1);
    calcular_indicadores(&carta1);

    printf("\nDigite os dados da Carta 2:\n");
    ler_carta(&carta2);
    calcular_indicadores(&carta2);

    comparar_atributo(carta1, carta2);

    return 0;
}
