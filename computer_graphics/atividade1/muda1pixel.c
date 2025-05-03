#include <stdio.h>

#define WIDTH 256
#define HEIGHT 256

typedef struct muda1pixel{
    int r,g,b;
} Muda1pixel;


//funcao que altera o valor de 1 pixel na imagem
void alteraPixel (Muda1pixel *img, int linha, int coluna, int novoValor){

    int novoValor=linha*coluna;



    printf("\n Alterando o valor de um pixel.\n Informe a posição do pixel. \nLinha: %d \n Coluna: %d");
    //scanf(&);


}


int main(){

    //define a altura e largura
    int width=256;
    int height=256;

    //padrao ppm
    //printf("P3\n %d %d\n 255\n", height, width);

    //alteraPixel();
    printf("\n Alterando o valor de um pixel.\n Informe a posicao do pixel. \nLinha: %d \n Coluna: %d");

    return 1;
}
