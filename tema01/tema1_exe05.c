#include <stdio.h>
#include <stdlib.h>

typedef struct departamento {
    int cod;
    char descricao[30];
} Departamento;

typedef struct cargo {
    int cod;
    char descricao[30];
} Cargo;

typedef struct funcionario{
    int cod;
    char nome[30];
    float salario;
    Departamento dpto;
    Cargo crg;
} Funcionario;

int main(void){
    Funcionario funcionario1;

    funcionario1.cod = 12345678;
    funcionario1.salario = 2500;
    funcionario1.dpto.cod = 120;
    funcionario1.crg.cod = 55;

    printf("Salario funcionario 1: %.2f\n", funcionario1.salario);
    printf("Codigo do departamento do funcionario 1: %d", funcionario1.dpto.cod);
}