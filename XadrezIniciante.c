#include <stdio.h>

int main() {
   int casabispo;
   int casarainha;
   
   
   // Torre cinco casas para a direita for
    printf("Torre - 5 casas para a dirteita (For):\n");
    for (int i = 1; i <= 5; i++){
    printf("Casa %d: direita \n", i); }

            printf("\n");   // pula linha
   
// Bispo 5 casas na diagonal superior direita While
   printf("Bispo - 5 casas na diagonal superior direita (while)\n");
            casabispo = 1;
   while (casabispo <= 5){
    printf("casa %d: cima, direita\n", casabispo);
            casabispo ++;}

            printf("\n");   // pula linha

// Rainha8 casas para a esquerda do - while 
    printf("Rainha - 8 casas para a esquerda (do while)\n");
    casarainha = 1;
    do
    {
        printf("casa %d: esquerda\n", casarainha);
        casarainha++;
    } while (casarainha <= 8);
    
    


    return 0;
}
 // FIM programa ok testado