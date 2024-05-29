#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    system("color f0");

    int opcao;
    int cadastroAluno;
    char aluno[5][20];
    float notas[5][4];
    int cont;
    int nota;

    printf("Aguarde o carregamento...\n");
    Sleep(500);
    system("cls");

    void cadastro(){
        printf("========== Bem vindo ao sistema ========== \n");
        printf("\n1 Cadastrar aluno\n");
        printf("\n2 Editar notas\n");
        printf("\n3 Consultar notas\n");
        printf("\n4 Sair \n\n");
        scanf("%i", &opcao);
    }

    cadastro();

    switch(opcao) {
        case 1:
            for(cont = 0; cont < 5; cont++){
                system("cls");
                printf("Insira o nome do aluno: ");
                scanf("%s", &aluno[cont]);
                for(nota = 0; nota < 4; nota++){
                    printf("Qual a nota do aluno?");
                    scanf("%f", &notas[cont][nota]);
                }
            }
        break;
        case 2:
            system("cls");
            printf("Em contrução...");
    }

    return 0;
}
