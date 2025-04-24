#include <stdio.h>
int main () {
   char coluna[10]={'a','b','c','d','e','f','g','h','i','j'};//caracteres responsaveis pelas colunas do jogo
   int navio1[3]={3,3,3};//primeiro navio
   int navio2[3]={3,3,3};//segundo navio

   int batalhanaval [10] [10] = {
   {0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0}
};//mapa da jogo batalha naval inicializado na variacel "batalhanaval", 2D 10*10
int validacao[6]={
batalhanaval [1][0] = navio1[0],//1/3 do navio
batalhanaval [1][1] = navio1[1],//1/3 do navio
batalhanaval [1][2] = navio1[2],//1/3 do navio
batalhanaval [2][1] = navio2[0],//1/3 do navio
batalhanaval [3][1] = navio2[1],//1/3 do navio
batalhanaval [4][1] = navio2[2],//1/3 do navio
};
printf("   ");//espaço
for(int r = 0; r < 10 ; r++ ){//repetição para os caracteres das colunas
  printf("%c  ", coluna[r]);//imprime os caracteres das colunas
    }
      printf("\n");//gera nova linha após a organização das colunas
        int n = 1;//declara variavel multiuso
      for(int b = 0; b < 10 ; b++){//imprime o tabuleiro e linhas 1-10
        if(b + n ==10){//caso o numero seja 10 essa condição usa "if" e descarta else, caso contrario else é executado(a diferença é um espaço a menos na linha 10, para que não desorganize toda a linha 10 do mapa)
          printf("%d ", n + b);//imprime o n(var multiuso) soma com b(usada como condição no loop, como aproveitamento)
}else{
            printf("%d  ", n + b);//executado para todos os casos que antecedem b + n = 10
}
   for(int c = 0; c < 10 ; c++){//estrutura de repetição interna que usa b em função de c, uma matriz, e imprime o tabuleiro
   
   printf("%d  ",batalhanaval[b][c]);//imprime o tabuleiro
   

   }
   printf("\n");//quebra o texto ao fim de cada execução completa do loop interno 
   }

   
} 