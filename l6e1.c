#include <stdio.h>
void main(void)
{
float TotGastos, MedGastos, MatGastos[12];
int Cont;
for(Cont = 0; Cont <= 11; Cont++)
{
    printf("Digite o gasto mensal: ");
    scanf("%f", &MatGastos[Cont]);
}
TotGastos = 0;
for(Cont = 0; Cont <= 11; Cont++)
    TotGastos = TotGastos + MatGastos[Cont];
MedGastos = TotGastos / 12;
printf("Total gastos anual %.2f", TotGastos);
printf("\nMedia anual dos gastos %.2f", MedGastos);
}
