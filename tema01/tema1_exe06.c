#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int codigo;
    char nome[200];
    Data dt_nasc;
} Aluno;

Aluno aluno;

int main(void) {
    setlocale(LC_ALL, "portuguese");
    aluno.codigo = 0;
    strcpy(aluno.nome, "NULL");
    aluno.dt_nasc.dia = 0;
    aluno.dt_nasc.mes = 0;
    aluno.dt_nasc.ano = 0;

    printf("\n O codigo do aluno eh: %d ", aluno.codigo);
    printf("\n O nome do aluno eh: %s ", aluno.nome);
    printf("\n A data de nascimento do aluno eh %d/%d/%d \n\n", aluno.dt_nasc.dia, aluno.dt_nasc.mes, aluno.dt_nasc.ano);

    printf(" Digite o codigo do aluno: ");
    scanf("%d", &aluno.codigo);
    getchar();
    printf(" Digite o nome do aluno: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    printf(" Digite o dia do nascimento do aluno: ");
    scanf("%d", &aluno.dt_nasc.dia);
    printf(" Digite o mes do nascimento do aluno: ");
    scanf("%d", &aluno.dt_nasc.mes);
    printf(" Digite o ano do nascimento do aluno: ");
    scanf("%d", &aluno.dt_nasc.ano);

    printf("\n O codigo do aluno eh: %d ", aluno.codigo);
    printf("\n O nome do aluno eh: %s ", aluno.nome);
    printf("\n A data de nascimento do aluno eh %d/%d/%d \n\n", aluno.dt_nasc.dia, aluno.dt_nasc.mes, aluno.dt_nasc.ano);

    return(0);
}