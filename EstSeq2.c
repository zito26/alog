#include <stdio.h>
void main(void)
{
float Num1, Num2, Num3, Media;
printf("Digite o 1o. numero: ");
scanf("%f", &Num1);
printf("Digite o 2o. numero: ");
scanf("%f", &Num2);
printf("Digite o 3o. numero: ");
scanf("%f", &Num3);
Media = (Num1 + Num2 + Num3)/3;
printf("Media dos numeros %f", Media);
}
