#include  <stdio.h>

int main(){
    printf("*********************************************\n");
    printf( "** Bem vindo ao nosso jogo de adivinhação **\n");
    printf("*********************************************\n");

int numerosecreto = 42;
int chute = 10;

printf("qual o seu chute?");
scanf("%d ", & chute);
printf("seu chute foi %d ",chute);

if(chute == numerosecreto){
    printf("parabens voce acertou \n");
  printf("voce e um bom jogador, jogue de novo\n");
} else{
   printf ("voce errou\n");
   printf ("nao desanime\n");
}

}
