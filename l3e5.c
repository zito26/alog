#include <stdio.h>
void main(void)
{
float SalFunc, SalFuncReaj;
printf("Digite o salario do funcionario: ");
scanf("%f", &SalFunc);
if (SalFunc <= 3000)
    SalFuncReaj = SalFunc * 0.35 + SalFunc;
else
    SalFuncReaj = SalFunc * 0.15 + SalFunc;
printf("Salario reajustado: %.2f", SalFuncReaj);
}
