#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {

    int opcao;
    char nomeAluno[5][50] = {""};
    float notaAluno[5][4] = {0.0};
    char retornarMenu;

    while (1) {
        system("cls");
        printf("==========={Bem vindo ao sistema!}============ \n\n");
        printf("\n1 Cadastrar nota de aluno");
        printf("\n2 Consultar nota");
        printf("\n2 Editar nota");
        printf("\n4 Sair\n\n");
        printf("==============================================\n\n");
        printf("Digite a opcao desejada: ");
        scanf("%i", &opcao);
        fflush(stdin);

        if (opcao == 1) {
            system("cls");
            printf("==============={Cadastro de aluno!}=============== \n\n");

            for (int i = 0; i < 1; i++) {
                printf("Insira o nome do aluno %d: ", i+1);
                scanf("%s", nomeAluno[i]);
                printf("\n");

                for (int nota = 0; nota < 4; nota++) {
                    printf("Qual a %i nota de %s? ", nota + 1, nomeAluno[i]);
                    scanf("%f", &notaAluno[i][nota]);
                }
            }
        } else if (opcao == 2) {
            system("cls");
            printf("==============={Consulta de notas!}=============== \n\n");
            for (int i = 0; i < 5; i++) {
                if (strlen(nomeAluno[i]) == 0) {
                    continue;
                }
                printf("Aluno: %s\n", nomeAluno[i]);
                for (int nota = 0; nota < 4; nota++) {
                    printf("%i nota: %.2f\n", nota + 1, notaAluno[i][nota]);
                }
                float media = (notaAluno[i][0] + notaAluno[i][1] + notaAluno[i][2] + notaAluno[i][3]) / 4.0;
                printf("\nA media sera: %.2f \n", media);
                if (media < 6 && media >= 5) {
                    printf("\nRecuperacao.\n");
                } else if (media >= 6) {
                    printf("\nAprovado!\n");
                } else {
                    printf("\nReprovado.\n");
                }
                printf("================================================\n");
            }

            printf("Deseja retornar? S/N \n");
            scanf(" %c", &retornarMenu);
            if (retornarMenu == 'S' || retornarMenu == 's') {
                printf("voltando...");
                Sleep(500);
                continue;
            } else if (retornarMenu == 'N' || retornarMenu == 'n') {
                exit(1);
            } else {
                printf("\nSelecione uma opcao valida.\n\n");
                printf("Deseja retornar? S/N \n");
                scanf(" %c", &retornarMenu);
                if (retornarMenu != 'S' && retornarMenu != 'N' && retornarMenu != 's' && retornarMenu != 'n') {
                    printf("Opcao invalida, fechando o programa...");
                    Sleep(500);
                    exit(1);
                }
            }
        }else if (opcao == 3) {
            system("cls");
            printf("==============={Editar notas!}=============== \n\n");
            printf("Deseja alterar a nota de qual aluno?: ");
            scanf("%s", nomeAluno);
            for (int i = 0; i < 1; i++){
            printf("\nInsira as novas notas para o aluno %s", nomeAluno[i]);
                for (int nota = 0; nota < 4; nota++) {
                    printf("\nQual a %i nota de %s? ", nota + 1, nomeAluno[i]);
                    scanf("%f", &notaAluno[i][nota]);
                }
            }
        }else if (opcao == 4) {
            break;
        } else {
            printf("Opcao invalida! Tente novamente.\n");
            scanf("%*s");
        }
    }
    return 0;
}
