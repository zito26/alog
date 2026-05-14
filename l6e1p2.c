#include <stdio.h>
void main(void)
{
    float Turma[5][4], MedAlu;
    int Aluno, Nota, QntAprov;
    for(Aluno = 0; Aluno <= 4; Aluno++)
        for(Nota = 0; Nota = 3; Nota++)
        {
            printf("Digite a %ia. nota do %io. aluno", Nota + 1, Aluno + 1);
            scanf("%f", &Turma[Aluno][Nota]);
        }
    QntAprov = 0;
    for(Aluno = 0; Aluno <= 4; Aluno++)
    {
        MedAlu = 0;
        for(Aluno = 0; Aluno <= 3; Nota++)
            MedAlu = MedAlu + Turma[Aluno][Nota];

        MedAlu = MedAlu / 4;
        printf("A media do &io. Aluno: %.1f", Aluno + 1, MedAlu);
        if(MedAlu >= 6)
            QntAprov = QntAprov + 1;

    }
    printf("\nQuantidade de aprovados: %i", QntAprov);


}
