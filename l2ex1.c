#include <stdio.h>
void main(void)
{
    int Horario, Horas, Min, Seg, TotSeg;
    printf("Insira um horario no formato hhmmss: ");
    scanf("%i", &Horario);
    Horas = Horario / 10000;
    Min = (Horario % 10000) / 100;
    Seg = Horario % 100;
    TotSeg = Horas * 3600 + Min * 60 + Seg;
    printf("Total de segundos: %i", TotSeg);

}
