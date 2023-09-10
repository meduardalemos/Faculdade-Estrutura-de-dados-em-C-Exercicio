#include <stdio.h>
#include <conio.h>

int main() {
    struct ficha_aluno
    {
        char nome[50];
        char disciplina[30];
        float nota_prova1;
        float nota_prova2;
    };

    struct ficha_aluno aluno;

    printf("Cadastro de aluno:\n");
    printf("Nome do aluno: ");
    fflush(stdin);
    fgets(aluno.nome, 40, stdin);

    printf("Disciplina: ");
    fflush(stdin);
    fgets(aluno.disciplina, 40, stdin);

    printf("Informe a primeira nota do aluno: ");
    scanf("%f", &aluno.nota_prova1);
    printf("Informe a segunda nota do aluno: ");
    scanf("%f", &aluno.nota_prova2);

    printf("\n\nLendo os dados inseridos...\n");
    printf("Nome............: %s", aluno.nome);
    printf("Disciplina......: %s", aluno.disciplina);
    printf("Nota da prova 01: %.2f\n", aluno.nota_prova1);
    printf("Nota da prova 02: %.2f\n", aluno.nota_prova2);

    getch();
    return(0);   
    
}