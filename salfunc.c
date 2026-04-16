#include <stdio.h>
void main(void)
{
float SalFunc, ValAumento, SalFuncReaj;
printf("Digite o salario: ");
scanf("%f", &SalFunc);
if (SalFunc <=1300)
    ValAumento = SalFunc * 0.15;
if (SalFunc >1300 && SalFunc <=1600)
    ValAumento = SalFunc * 0.10;
if (SalFunc > 1600 && SalFunc <= 1900)
    ValAumento = SalFunc * 0.05;
if (SalFunc > 1900)
    ValAumento = 0;
SalFuncReaj = SalFunc + ValAumento;
printf("Valor aumento: %.2f", ValAumento);
printf("\nSalario reajustado: %.2f", SalFuncReaj);
}
