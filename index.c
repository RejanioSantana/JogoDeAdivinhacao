#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Criação das variáveis.
    srand(time(NULL));
    int numeroAleatorio = rand() % 100 + 1;
    int numeroUsuario;
    int tentativa = 0;

    //aprensentação do jogo.
    printf("\n\n\nBem-vindo ao jogo de Adivinhha!\n\nTente adivinhar...");

    while (1)
    {
        tentativa++;
        printf("Digite um número de 1 a 100: ");
        scanf("%d",&numeroUsuario);

        //verificação se o jogador ganhou.
        if (numeroUsuario == numeroAleatorio)
        {   
            printf("\nParabêns você acertou!\n");
            printf("Numero de tentativas: %d\n\n", tentativa);
            break;
        }

        //dica para o jogador.
        if (numeroUsuario > numeroAleatorio)
        {
            printf("\n\nO numero é menor que %d\n\n",numeroUsuario);
        }else{
            printf("\n\nO numero é maior que %d\n\n",numeroUsuario);
        }
        
        continue;
         
    }
    
    return 0;
}