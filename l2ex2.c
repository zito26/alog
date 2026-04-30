#include <stdio.h>
void main(void)
{
    int Numero, Alg1, Alg2, Alg3, Alg4, Somatoria;
    printf("Insira um numero: ");
    scanf("%i", &Numero);
    Alg1 = Numero / 1000;
    Alg2 = (Numero / 100) % 10;
    Alg3 = (Numero % 100) / 10;
    Alg4 = Numero % 10;
    Somatoria = Alg1 + Alg2 + Alg3 + Alg4;
    printf("Somatoria dos algarismos:  %i", Somatoria);

}
