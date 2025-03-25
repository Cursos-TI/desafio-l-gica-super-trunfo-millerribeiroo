#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1, estado2;
    char carta1[5], carta2[5];
    char cidade1[20], cidade2[20]; 
    unsigned long int pop1, pop2;
    float area1, area2;
    long int pib1, pib2;
    int pontos1, pontos2;
    float densi1, densi2;
    float pibpercap1, pibpercap2;

    // Desafio Super Trunfo - Cidades
    // Menu inicial:
    // Exibe um menu para o usuário com as opções de jogar, ver as regras ou sair do jogo.

    int opcao;
    printf("Bem-vindo ao Super Trunfo - Cidades!\n\n");
    printf("Escolha uma opção:\n\n");
    printf("1 - Jogar\n");
    printf("2 - Ver as regras\n");
    printf("3 - Sair\n");
    printf("Opção: ");
    scanf(" %d", &opcao);

    // Implementação do menu:
    // Estruturas de decisão para verificar a opção escolhida pelo usuário.
    // Utilize o comando switch para verificar a opção escolhida e chame as funções correspondentes.
    // Caso o usuário escolha uma opção inválida, exiba uma mensagem de erro.

    switch (opcao) {
        case 1:
            printf("\nVamos jogar!\n\n\n");
            break;
        case 2:
            printf("Regras do jogo:\n\n");
            printf("OBJETIVO: \n");
            printf("O Super Trunfo é um jogo de cartas em que cada carta possui atributos numéricos;\n");
            printf("O objetivo é comparar os atributos das cartas. O jogador que marcar 2 pontos vence.\n\n");
            printf("COMO JOGAR:\n");
            printf("Cada jogador registra sua carta de cidade;\n");
            printf("Depois cada jogador deverá escolher 2 atributos em sua carta para comparar;\n");
            printf("O maior valor de atributo ganha, com excessão do atributo 'Densidade Populacional', neste o menor valor é o vencedor;\n");
            printf("Cada atributo vencedor marca um ponto.\n\n");
            printf("FIM DE JOGO:\n");
            printf("Ganha o jogador que efetuar 2 pontos na rodada.\n");
            printf("Em caso de empate, os atributos escolhidos serão somados e o maior valor vence.\n");
            printf("Se a soma dos atributos for empate, então fim de jogo. Essa rodada não teve vencedores. \n\n\n");
            break;
        case 3:
            printf("Até a próxima!\n\n\n");
            return 0;
        default:
            printf("Opção inválida. Tente novamente.\n\n\n");
            break;
    }

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("Insira as informações das 2 cartas que irão competir.\nComeçando pela carta 1:\n");
    printf("Qual a letra do estado?\n"); // Pede ao usuário a letra do estado
    scanf(" %c", &estado1); // A

    printf("Qual o código da carta?\n"); // Pede ao usuário o código da carta
    scanf(" %s", carta1); // 01

    printf("Qual o nome da cidade?\n"); // Pede ao usuário o nome da cidade
    scanf(" %s", cidade1); // SaoPaulo

    printf("Qual a população da cidade?\n"); // Pede ao usuário a população da cidade
    scanf(" %lu", &pop1); // 11451000

    printf("Qual a área da cidade?\n"); // Pede ao usuário a área da cidade
    scanf(" %f", &area1); // 1521

    printf("Qual o PIB da cidade?\n"); // Pede ao usuário o PIB da cidade
    scanf(" %ld", &pib1); // 828.980.607.731 (sem pontos)

    printf("Qual o número de pontos turísticos da cidade?\n"); // Pede ao usuário o número de pontos turísticos da cidade
    scanf(" %d", &pontos1); // 36

    // Repetindo o processo para a carta 2:
    printf("\nAgora, vamos inserir a carta 2:\n");
    printf("Qual a letra do estado?\n");
    scanf(" %c", &estado2); // B

    printf("Qual o código da carta?\n");
    scanf(" %s", carta2); // 01

    printf("Qual o nome da cidade?\n");
    scanf(" %s", cidade2); // RioDeJaneiro

    printf("Qual a população da cidade?\n");
    scanf(" %ld", &pop2); // 6747815

    printf("Qual a área da cidade?\n");
    scanf(" %f", &area2); // 1221

    printf("Qual o PIB da cidade?\n");
    scanf(" %ld", &pib2); // 449.989.000.000 (sem pontos)

    printf("Qual o número de pontos turísticos da cidade?\n");
    scanf(" %d", &pontos2); // 28 */

    //Manipulação de variáveis:
    densi1 = pop1 / area1;
    densi2 = pop2 / area2;
    pibpercap1 = pib1 / pop1;
    pibpercap2 = pib2 / pop2;

    // Calculando o Super Poder:
    // Somando todos os atributos numericos (População, Área, PIB, Pontos Turísticos,
    //PIB per capita e o inverso da Densidade Populacional - quanto menor a densidade, maior o poder)
    // Armazene o Super Poder como Float

    float superpoder1 = (pop1 + area1 + pib1 + pontos1 + pibpercap1) / densi1;
    float superpoder2 = (pop2 + area2 + pib2 + pontos2 + pibpercap2) / densi2;

    // Comparação de Cartas e Exibição de Resultados:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    int atributo;
    // Pede ao usuário que escolha o atributo a ser comparado
    printf("Qual atributo deseja comparar?\nDigite apenas o número correspondente:\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    scanf(" %d", &atributo);

    // Comparando População:
    switch (atributo) {
        case 1:
            if (pop1 > pop2) {
                printf("São Paulo (SP): %lu habitantes\n", pop1);
                printf("Rio de Janeiro (RJ): %lu habitantes\n", pop2);
                printf("São Paulo venceu!\n");
            } else if (pop1 == pop2){
                printf("São Paulo (SP): %lu habitantes. \n", pop1);
                printf("Rio de Janeiro (RJ): %lu habitantes.  \n", pop2);
                printf("Empate!\n");
            }else {
                printf("São Paulo (SP): %lu habitantes\n", pop1);
                printf("Rio de Janeiro (RJ): %lu habitantes\n", pop2);
                printf("Rio de Janeiro venceu!\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("São Paulo (SP): %.2f km² de área. \n", area1);
                printf("Rio de Janeiro (RJ): %.2f km² de área. \n", area2);
                printf("São Paulo venceu!\n");
            } else if (area1 == area2){
                printf("São Paulo (SP): %.2f km² de área. \n", area1);
                printf("Rio de Janeiro (RJ): %.2f km² de área.  \n", area2);
                printf("Empate!\n");
            }else {
                printf("São Paulo (SP): %.2f km² de área. \n", area1);
                printf("Rio de Janeiro (RJ): %.2f km² de área. \n", area2);
                printf("Rio de Janeiro venceu!\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("São Paulo (SP): PIB de R$%ld\n", pib1);
                printf("Rio de Janeiro (RJ): PIB de R$%ld\n", pib2);
                printf("São Paulo venceu!\n");
            } else if (pib1 == pib2){
                printf("São Paulo (SP): PIB de R$%ld\n", pib1);
                printf("Rio de Janeiro (RJ): PIB de R$%ld\n", pib2);
                printf("Empate!\n");
            }else {
                printf("São Paulo (SP): PIB de R$%ld\n", pib1);
                printf("Rio de Janeiro (RJ): PIB de R$%ld\n", pib2);
                printf("Rio de Janeiro venceu!\n");
            }
            break;
        case 4:
            if (pontos1 > pontos2) {
                printf("São Paulo (SP): %d pontos turísticos. \n", pontos1);
                printf("Rio de Janeiro (RJ): %d pontos turísticos. \n", pontos2);
                printf("São Paulo venceu!\n");
            } else if (pontos1 == pontos2){
                printf("São Paulo (SP): %d pontos turísticos. \n", pontos1);
                printf("Rio de Janeiro (RJ): %d pontos turísticos.  \n", pontos2);
                printf("Empate!\n");
            }else {
                printf("São Paulo (SP): %d pontos turísticos\n", pontos1);
                printf("Rio de Janeiro (RJ): %d pontos turísticos\n", pontos2);
                printf("Rio de Janeiro venceu!\n");
            }
            break;
        case 5:
            if (densi1 < densi2) { // Lógica inversa para densidade populacional
                printf("São Paulo (SP): %.2f hab/km². \n", densi1);
                printf("Rio de Janeiro (RJ): %.2f hab/km². \n", densi2);
                printf("São Paulo venceu!\n");
            } else if (densi1 == densi2) {
                printf("São Paulo (SP): %.2f hab/km². \n", densi1);
                printf("Rio de Janeiro (RJ): %.2f hab/km².  \n", densi2);
                printf("Empate!\n");
            }else {
                printf("São Paulo (SP): %.2f hab/km²\n", densi1);
                printf("Rio de Janeiro (RJ): %.2f hab/km²\n", densi2);
                printf("Rio de Janeiro venceu!\n");
            }
            break;
        case 6:
            if (pibpercap1 > pibpercap2) {
                printf("São Paulo (SP): PIB per capta de R$%.2f. \n", pibpercap1);
                printf("Rio de Janeiro (RJ): PIB per capta de R$%.2f. \n", pibpercap2);
                printf("São Paulo venceu!\n");
            } else if (pibpercap1 == pibpercap2){
                printf("São Paulo (SP): PIB per capta de R$%.2f. \n", pibpercap1);
                printf("Rio de Janeiro (RJ): PIB per capta de R$%.2f. \n", pibpercap2);
                printf("Empate!\n");
            }else {
                printf("São Paulo (SP): PIB per capta de R$%.2f\n", pibpercap1);
                printf("Rio de Janeiro (RJ): PIB per capta de R$%.2f\n", pibpercap2);
                printf("Rio de Janeiro venceu!\n");
            }
            break;
        case 7:
            if (superpoder1 > superpoder2) {
                printf("São Paulo (SP): %.2f pontos de superpoder. \n", superpoder1);
                printf("Rio de Janeiro (RJ): %.2f pontos de superpoder. \n", superpoder2);
                printf("São Paulo venceu!\n");
            } else if (superpoder1 == superpoder2){
                printf("São Paulo (SP): %.2f pontos de superpoder. \n", superpoder1);
                printf("Rio de Janeiro (RJ): %.2f pontos de superpoder.  \n", superpoder2);
                printf("Empate!\n");
            }else {
                printf("São Paulo (SP): %.2f pontos de superpoder. \n", superpoder1);
                printf("Rio de Janeiro (RJ): %.2f pontos de superpoder.  \n", superpoder2);
                printf("Rio de Janeiro venceu!\n");
            }
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }


    return 0;
}