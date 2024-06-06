#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    int opcao;
    char nomeAluno[5][50];
    float notaAluno[4][5]
    char retornarMenu;

    while (1) {
        system("cls");
        printf("==========={Bem vindo ao sistema!}============ \n\n");
        printf("\n1 Cadastrar nota de aluno");
        printf("\n2 Consultar nota");
        printf("\n3 Sair\n\n");
        printf("==============================================\n\n");
        printf("Digite a opcao desejada: ");
        scanf("%i", &opcao);
        fflush(stdin);

        if (opcao == 1) {
            system("cls");
            printf("==============={Cadastro de aluno!}=============== \n\n");

            printf("Insira o nome do aluno: ");
            scanf("%s", nomeAluno);
            printf("\n");

            for (int nota = 0; nota < 4; nota++) {
                printf("Qual a %i nota de %s? ", nota + 1, nomeAluno);
                scanf("%f", &notaAluno[nota]);
            }
        } else if (opcao == 2) {
            system("cls");
            printf("==============={Consulta de notas!}=============== \n\n");
            for (int i = 0; i < ++i) {
                printf("Aluno: %s\n", nomeAluno[i]);
                for (int nota = 0; nota < 4; nota++) {
                    printf("%i nota: %.2f\n", nota + 1, notaAluno[nota]);
                }
            }


            float media = (notaAluno[0] + notaAluno[1] + notaAluno[2] + notaAluno[3]) / 4.0;
            printf("A media sera: %.2f \n", media);
            printf("================================================\n");

            printf("Deseja retornar? S/N \n");
            scanf(" %c", &retornarMenu);
            if (retornarMenu == 'S' || retornarMenu == 's') {
                printf("Voltando...");
            }else{
                exit(1);
            }
        } else if (opcao == 3) {
            break;
        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }
    }
    return 0;
}
