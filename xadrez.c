#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    const char cima[25] = "Uma casa acima";
    const char baixo[25] = "Uma casa abaixo";
    const char direita[25] = "Uma casa à direita";
    const char esquerda [25] = "Uma casa à esquerda";

   //Torre
   printf("Movimento Torre\n");
   int iTorre = 1;
   while(iTorre <=5){
      printf("%d - %s", iTorre, direita);
      printf("\n");
      iTorre++;
   }

   printf("########################\n");

   //Bispo
   printf("Movimento Bispo\n");
   for (int iBispo = 1; iBispo <= 5; iBispo++){
     
      printf("%d - %s\t%s", iBispo, cima, direita);
      printf("\n");
      
   }
   
   printf("########################\n");

   //Rainha
   printf("Movimento Rainha\n");
   int nRainha = 1;
   do{
      printf("%d - %s", nRainha, esquerda);
      printf("\n");
      nRainha++;
   }while (nRainha <=8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
