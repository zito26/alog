#include <stdio.h>
void main(void)
{
char Sexo;
float Altura, PesoIdeal;
printf("Digite <M> Masculino ou <F> Feminino: ");
scanf("%c", &Sexo);
printf("Insira sua altura: ");
scanf("%f", &Altura);
if (Sexo == 'M' || Sexo == 'm')
    PesoIdeal = (72.7 * Altura) - 58;
if (Sexo == 'F' || Sexo == 'f')
   PesoIdeal = (62.1 * Altura) - 44.7;
printf("Seu Peso Ideal: %.2f", PesoIdeal);

}
