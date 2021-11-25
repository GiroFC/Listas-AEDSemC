#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

////////////////////////////////EX02//////////////////////////////////
void exercicio02(){
    typedef struct{
        char *nomecompania;
        char *area;
        float valorA;
        float valorAnterior;
        float variacao;
    } bolsavalores;

    bolsavalores empresa;
    printf("\nDigite o nome da compania: ");
    scanf(" %[^\n]s", empresa.nomecompania);
    printf("\nDigite area de atuação da compania: ");
    scanf(" %[^\n]s", empresa.area);
    printf("\nDigite o valor atual da ação em reais: ");
    scanf("%f", empresa.valorA);
    printf("\nDigite o valor antigo da ação em reais: ");
    scanf("%f", empresa.valorAnterior);
    empresa.variacao = ((int)empresa.valorA - (int)empresa.valorAnterior) % 100;
    printf("\nA variação foi de %f%", empresa.variacao);
}

////////////////////////////////EX03//////////////////////////////////

void exercicio03(){
    typedef struct{
        int x;
        int y;
        int z;
    } ponto2d;

    ponto2d ponto_inicial, ponto_final;


    printf("\ndigite a cordenada (x,y) do primeiro ponto: ");
    scanf("%i %i", ponto_inicial.x, ponto_inicial.y);
    printf("\nAgora digite a cordenada do segundo ponto: ");
    scanf("%i %i", ponto_final.x, ponto_final.y);

    int distancia = sqrt(ponto_inicial.x - ponto_inicial.y) + (ponto_final.x - ponto_final.y);

    printf("\n A distancia entres os pontos eh: %i", distancia);
}

////////////////////////////////EX04//////////////////////////////////

void exercicio04(){
    typedef struct{
        char *nome;
        char *genero;
        int numIntegrantes;
        int posicao;
    } bandainf;

    bandainf bandasFav[5];

    for(int i = 0; i < 5; i++){
        printf("\nDigite o nome da %i banda: \n", i+1);
        scanf(" %[^\n]s", bandasFav[i].nome);
        fflush(stdin);
        printf("Digite o genero da %i banda: \n", i+1);
        scanf(" %[^\n]s", bandasFav[i].genero);
        fflush(stdin);
        printf("Digite o numero de integrantes da %i banda: ", i+1);
        scanf(" %i", bandasFav[i].numIntegrantes);
        fflush(stdin);
        printf("Digite a posicao no seu ranking de favoritos da %i banda: ", i+1);
        scanf(" %i", bandasFav[i].posicao);
        fflush(stdin);
    }

    for(int i = 0; i < 5; i++){
        printf("\n %s", bandasFav[i].nome);
        printf("\n %s", bandasFav[i].genero);
        printf("\n %i", bandasFav[i].numIntegrantes);
        printf("\n %i", bandasFav[i].posicao);
    }
}

////////////////////////////////EX06//////////////////////////////////

void exercicio06(){
    typedef struct{
        int matricula;
        char *nome;
        float nota1;
        float nota2;
        float nota3;
    }alunos;

    alunos turma[5];

    for(int i = 0; i < 5; i++){
        printf("\nDigite a matricula do aluno %i: ", i+1);
        scanf("%i", turma[i].matricula);
        printf("\nDigite o nome do aluno %i: ", i+1);
        gets(turma[i].nome);
        printf("\nDigite a nota 1 do aluno %i: ", i+1);
        scanf("%f", turma[i].nota1);
        printf("\nDigite a nota 2 do aluno %i: ", i+1);
        scanf("%f", turma[i].nota2);
        printf("\nDigite a nota 3 do aluno %i: ", i+1);
        scanf("%f", turma[i].nota3);
    }

    int maior = 0;
    int media = 0;
    int mediaA = 0;
    for(int i = 0; i < 5; i++){
        if(turma[i].nota1 > turma[maior].nota1){
            maior = i;
        }
    }

    printf("\n\n O aluno com a maior nota da primeira prova foi o aluno %i - %s", maior, turma[maior].nome);

    for(int i = 0; i < 5; i++){
        if(((turma[i].nota1 + turma[i].nota2 + turma[i].nota3)/3) > ((turma[media].nota1 + turma[media].nota2 + turma[media].nota3)/3)){
            mediaA = i;
            media++;
        }
    }

    printf("\n\n O aluno com a maior media foi o aluno %i - %s", mediaA, turma[mediaA].nome);
}

////////////////////////////////MAIN//////////////////////////////////

int main(void)
{
    system("cls");
    int atividades;
    printf("----------------------------------------\n");
    printf("\t*LISTA DE ATIVIDADES 10*\n");
    printf("\t*Aluno: Igor Franco*\n");
    printf("----------------------------------------\n");
    printf("Digite o numero do ex que deseja ver:\n");
    scanf("%d", &atividades);
    switch (atividades)
    {
    case 2:
        exercicio02();
        break;
    case 3:
        exercicio03();
        break;
    case 4:
        exercicio04();
        break;
    case 6:
        exercicio06();
        break;
    default:
        printf("----------------------------------------\n");
        printf("ALTERNATIVA NAO VALIDA!!!\n");
        printf("----------------------------------------\n");
        break;
    }
    return 0;
}