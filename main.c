#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>

int main(){
    system("color f0");

    int opcao;
    int cadastroAluno;
    char aluno[5][20];
    char voltarMenu;
    float notas[5][4];
    int cont;
    int nota;


    printf("Aguarde o carregamento...\n");
    Sleep(500);
    system("cls");
    while(1){
        void cadastro(){
                system("cls");
                printf("========== Bem vindo ao sistema ========== \n");

                printf("\n1 Cadastrar aluno\n");
                printf("\n2 Editar notas\n");
                printf("\n3 Consultar notas\n");
                printf("\n4 Sair \n\n");
                printf("Digite o numero da opcao: ");

                scanf("%i", &opcao);
        }

        void voltarTela(){
            printf("Deseja voltar para a tela inical? S/N");
            scanf("%s", &voltarMenu);

            if (voltarMenu == "S" || voltarMenu == "s"){
                printf("voltando...");
                sleep(1);
                system("cls");
                cadastro();
            }else{
                printf("Fechando sistema...");
                exit(0);
            }
        }

        cadastro();

        switch(opcao) {
            case 1:
                for(cont = 0; cont < 5; cont++){
                    system("cls");
                    printf("====================[Cadastro Aluno]====================\n\n");
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
                printf("Em contrucao... \n");
                voltarTela();
                break;
            case 3:
                system("cls");
                printf("Em construcao...\n\n");
                voltarTela();
                break;
            case 4:
                printf("saindo...");
                sleep(1);
                exit(0);
                break;
            default:
                printf("numero digitado incorretamente.\n");
                printf("Digite corretamente.");
                sleep(1);
                system("cls");
                cadastro();
        }
    }
    return 0;

}
