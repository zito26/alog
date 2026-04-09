#include <stdio.h>
void main(void)
{
float Num1, Num2, Result;
char Choice;
printf("Digite:\n\t<1> Media\n\t<2> Diferenca");
printf("\n\t<3> Produto\n\t<4> Divisao");
printf("\n\nEscolha: ");
scanf("%c", &Choice);
printf("Digite o primeiro numero: ");
scanf("%f", &Num1);
printf("Digite o segundo numero: ");
scanf("%f", &Num2);
if (Choice == '1')
 Result = (Num1 + Num2) / 2;
if (Choice == '2')
 Result = Num1 - Num2;
if (Choice == '3')
 Result = Num1 * Num2;
if (Choice == '4')
 Result = Num1 / Num2;
printf("Resultado: %f", Result);

}
