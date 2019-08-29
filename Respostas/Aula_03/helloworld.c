#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[] ){

    printf("\n\t%s\n", *argv+strlen(argv[0])+1);
    /*argv é um ponteiro para ponteiro do tipo caracter, portanto, retorna uma cadeia de texto,
      sendo o valor correspondente ao endereço do primeiro elemento da cadeia.
      Com strlen obtenho o tamnho da primeira string que é o nome do programa e somo mais um,
      pois, a contagem começa a partir de zero, apontando, assim, para o primeiro elemento da
      cadeia de texto a ser impressa. O intuito em fazer dessa forma é praticar o uso de
      e consequências da escolha de certas estratégias com ponteiros.
     */

    return 0;
}