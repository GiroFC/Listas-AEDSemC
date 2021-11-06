#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

////////////////////////////////EX01//////////////////////////////////

void exercicio01(){
    int matriz01[10][10];
    printf("\nDigite 100 para encaixarmos na matriz 10 x 10");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("\nDigite um numero: ");
            scanf("%i", &matriz01[i][j]);

        }
    }
printf("\nnumeros da diagonal principal\n");
    for(int i = 0; i < 10; i++){
        printf("\n%i", matriz01[i][i]);
    }
}

////////////////////////////////EX02//////////////////////////////////

void exercicio02(){
    int matriz02[10][10];
    printf("\nDigite 100 para encaixarmos na matriz 10 x 10");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("\nDigite um numero: ");
            scanf("%i", &matriz02[i][j]);

        }
    }
printf("\nnumeros fora da diagonal principal\n");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(j != i){
                printf("\n%i", matriz02[i][j]);
            } else;

        }
    }

}

////////////////////////////////EX03//////////////////////////////////

void exercicio03(){
int matriz03[10][10];
    printf("\nDigite 100 para encaixarmos na matriz 10 x 10");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("\nDigite um numero: ");
            scanf("%i", &matriz03[i][j]);

        }
    }
printf("\nnumeros fora da diagonal principal\n");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
                printf("\n%i", matriz03[i][j+1]);
        }
    }
}

////////////////////////////////EX04//////////////////////////////////

void exercicio04(){
int matriz04[10][10], somamatriz[10][10];
    printf("\nDigite 100 para encaixarmos na matriz 10 x 10");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("\nDigite um numero: ");
            scanf("%i", &matriz04[i][j]);

        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            somamatriz[i][j] = i + j;

        }
    }
   
printf("\nnumeros fora da diagonal principal\n");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
                printf("\n%i", somamatriz[i][j+1]);
        }
    }
}

////////////////////////////////EX05//////////////////////////////////

void exercicio05(){
    int matriz05[10][10];
    printf("\nDigite 100 para encaixarmos na matriz 10 x 10");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("\nDigite um numero: ");
            scanf("%i", &matriz05[i][j]);

        }
    }
printf("\nnumeros fora da diagonal principal\n");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
                printf("\n%i", matriz05[i][j-1]);
        }
    }
}

////////////////////////////////EX06//////////////////////////////////

void exercicio06(){
    int matriz06[10][10], somamatriz[10][10];
    printf("\nDigite 100 para encaixarmos na matriz 10 x 10");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("\nDigite um numero: ");
            scanf("%i", &matriz06[i][j]);

        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            somamatriz[i][j] = i * j;
        }
    }
   
printf("\nnumeros fora da diagonal principal\n");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
                printf("\n%i", somamatriz[i][j-1]);
        }
    }
}

////////////////////////////////EX07//////////////////////////////////

void exercicio07(){
    int vetor07[12];
    srand(time(NULL));
    for(int i = 0; i < 12; i++){
        vetor07[i] = rand() % 10;
    }

    int x, y, t1, t2;
    printf("\n\nDigite dois numeros de 0 a 11: ");
    scanf("%i %i", &x, &y);

    t1 = vetor07[x];
    t2 = vetor07[y];

    printf("\nA soma dos numeros e: %i", t1 + t2);
}

////////////////////////////////EX08//////////////////////////////////

void exercicio08(){
    int vetor08[10];

    for(int i = 0, j = 1; i < 10; i++, j+=2){
        vetor08[i] = j;
    }
    printf("\n\n Os numeros do vetor sao: ");
    for(int i = 0; i < 10; i++){
        printf("\n %i ", vetor08[i]);
    }
}

////////////////////////////////EX09//////////////////////////////////

void exercicio09(){
    int vetor09[16], salvar[8], result[16];
    srand(time(NULL));
    for(int i = 0; i < 16; i++){
        vetor09[i] = rand() % 10;
    }

    for(int i = 0, j = 15; i < 8; i++, j--){
        salvar[i] = vetor09[j];
    }

    for(int i = 0; i < 16; i++){
        if(i < 8){
            result[i] = salvar[i];
        } else if (i >= 8){
            result[i] = vetor09[i-8];
        }
    }

    for(int i = 0; i < 16; i++){
        printf("\n %i", result[i]);
    }
}

////////////////////////////////EX10//////////////////////////////////

void exercicio10(){
    int vetor10[20];
    printf("\nDigite 20 numeros para preencher o vetor: ");
    for(int i = 0; i < 20; i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &vetor10[i]);
    }

    int x;
    prinf("\nAgora digite um numero inteiro x, para sabermos quantas vezes ele aparece no vetor: ");
    scanf("%i", &x);

    for(int i = 0; i < 20; i++){
        if(vetor10[i] == x){
            printf("\nO numero procurado esta na posicao %i", i);
        } else{
            printf("\nO numero procurado nao esta na posicao %i", i); 
        }
    }
}

////////////////////////////////EX11//////////////////////////////////

void exercicio11(){
    int vetor11[40];
    printf("\nDigite 40 numeros para preencher o vetor: ");
    for(int i = 0; i < 40; i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &vetor11[i]);
    }

int contadorpar = 0, contadorimpar = 0;
    for(int i = 0; i < 40; i++){
        if(vetor11[i]%2 == 0){
            contadorpar += 1;
        } else if (vetor11[i]%2 != 0){
            contadorimpar += 1;
        }
    }

    print("\n exitem %i numeros pares e %i numeros impares", contadorpar, contadorimpar);
}

////////////////////////////////EX12//////////////////////////////////

void exercicio12(){
    int vetor12[40];
    printf("\nDigite 40 numeros para preencher o vetor: ");
    for(int i = 0; i < 40; i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &vetor12[i]);
    }

    for(int i = 0; i < 40; i++){
        if(vetor12[i] < 0){
            vetor12[i] == 0;
        }
    }
}

////////////////////////////////EX13//////////////////////////////////

void exercicio13(){
    int vetor13[20];
    printf("\nDigite 20 numeros para preencher o vetor: ");
    for(int i = 0; i < 20; i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &vetor13[i]);
    }

int vetorpar[20], vetorimpar[20];
    for(int i = 0, j = 0, x = 0; i < 20; i++){
        if(vetor13[i]%2 == 0){
            vetorpar[j] == vetor13[i];
            j++;
        } else if (vetor13[i]%2 != 0){
            vetorimpar[x] == vetor13[i];
            x++;
        }
    }
}

////////////////////////////////EX14//////////////////////////////////

void exercicio14(){
int matriz14[3][3], matrizinversa14[3][3];
    printf("\nDigite 12 numeros para preencher o vetor: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o numero: ");
            scanf("%i", &matriz14[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matrizinversa14[i][j] == matriz14[j][i];
        }
    }
}

////////////////////////////////MAIN//////////////////////////////////


int main (void){
system("cls");
int atividades;
printf("----------------------------------------\n");
printf("\t*LISTA DE ATIVIDADES 07*\n");
printf("\t*Aluno: Igor Franco*\n");
printf("----------------------------------------\n");
printf("Digite o numero do ex que deseja ver:\n");
scanf("%d",&atividades);
switch (atividades)
{
    case 1:
    exercicio01();
    break;
    case 2:
    exercicio02();
    break;
    case 3:
    exercicio03();
    break;
    case 4:
    exercicio04();
    break;
    case 5:
    exercicio05();
    break;
    case 6:
    exercicio06();
    break;
    case 7:
    exercicio07();
    break;
    case 8:
    exercicio08();
    break;
    case 9:
    exercicio09();
    break;
    case 10:
    exercicio10();
    break;
    case 11:
    exercicio11();
    break;
    case 12:
    exercicio12();
    break;
    case 13:
    exercicio13();
    break;
    case 14:
    exercicio14();
    break;
    default:
        printf("----------------------------------------\n");
        printf("ALTERNATIVA NAO VALIDA!!!\n");
        printf("----------------------------------------\n");
    break;
}
    return 0;
}