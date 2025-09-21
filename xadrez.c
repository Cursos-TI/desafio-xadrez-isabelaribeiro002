/*
  Desafio: Movimentando as Peças do Xadrez (nível novato)

  Peças e laços:
  - Torre  -> FOR       -> 5 casas para a Direita
  - Bispo  -> WHILE     -> 5 casas na diagonal "Cima Direita"
  - Rainha -> DO-WHILE  -> 8 casas para a Esquerda

  Saída (uma por linha), exatamente como pedido:
    "Direita"
    "Cima Direita"
    "Esquerda"
*/

#include <stdio.h>

int main() {
    int passosTorre = 5;   // quantidade de casas da Torre para frente
    int passosBispo = 5;   // quantidade de casas do Bispo para direita
    int passosRainha = 8;  // quantidade de casas da Rainha para esquerda

        // TORRE — FOR: 5 casas para a Direita
          
        printf("Movimentando a Torre: \n"); //Título
        
        for (int i = 1; i <= passosTorre; i++)  //Começa na primeira casa, então vai repetindo enquanto i fou menor ou igual a 5

        {
            printf("Direita\n"); //Imprime a direção que a torre está se movendo

        }
        
          //Movimento do bispo usando while (se movendo na diagonal, seja pra cima ou direita)
    
          printf("Movimentando o Bispo: \n"); //Título

         int i = 1; //Começa na primeira casa
        while (i <= passosBispo) //Vai repetir enquanto i for menos ou igual a 5
        {
        printf("Cima Direita\n"); //Movimento do bispo a cada repetição, como pedido nas regras

        i++; //Somando +1 a cada movimento
        }
    
     //Movimento da rainha usando do-while
        printf("Movimentando a Rainha\n"); //Título

        i = 1; //Começa na primeira casa
         do
     {
       printf("Esquerda\n"); //Movimento da rainha a cada repetição, como pedido nas regras
       
       i++; //Somando +1 a cada movimento
     
    } while (i <= passosRainha);
     
        return 0;

}
