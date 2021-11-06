#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

////////////////////////////////EX01//////////////////////////////////

void exercicio01(){
    int tam = 10;
    int vetornumero[tam];
    printf("---------------\nDigite 10 numeros");
    for(int i = 1; i <= 10; i++){
        do {printf("\nDigite o %i numero: ", i);
        scanf("%i", &vetornumero[i-1]);
        } while (vetornumero[i-1] < 0);
    }
    
    int pares = 0, impares = 0;

    for(int x = 1; x <= 10; x++){
        if (vetornumero[x-1] % 2 == 0){
            pares += 1;
        } else {
            impares += 1;
        }
    }

    printf("\n\nExistem %i numeros pares e %i numeros impares", pares, impares);
}

////////////////////////////////EX02//////////////////////////////////

void exercicio02(){
    int tam;
    printf("--------------------------\nQual o numero de termos da sequencia fibonacci voce deseja ver? ");
    scanf("%i", &tam);
    int fibo[tam];
    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 2; i < tam; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    printf("\n\n");
    for(int i = 0; i < tam; i++){
        printf("%i  ", fibo[i]);
    }
  
}

////////////////////////////////EX03//////////////////////////////////

void exercicio03(){
    float etapa1[5], etapa2[5], etapa3[5], total[5];
    for(int i = 0; i < 5; i++){
        printf("\nDigite o tempo de cada corredor na primeira etapa: ");
        scanf("%f", &etapa1[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("\nDigite o tempo de cada corredor na segunda etapa: ");
        scanf("%f", &etapa2[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("\nDigite o tempo de cada corredor na terceira etapa: ");
        scanf("%f", &etapa3[i]);
    }

    total[0] += etapa1[0] + etapa2[0] + etapa3[0];
    total[1] += etapa1[1] + etapa2[1] + etapa3[1];
    total[2] += etapa1[2] + etapa2[2] + etapa3[2];
    total[3] += etapa1[3] + etapa2[3] + etapa3[3];
    total[4] += etapa1[4] + etapa2[4] + etapa3[4];

    if(total[0] < total[1, 2, 3, 4]){
        printf("\nO jogador 1 ganhou!!");
    } else if(total[1] < total[0, 2, 3, 4]){
        printf("\nO jogador 2 ganhou!!");
    } else if(total[2] < total[0, 1, 3, 4]){
        printf("\nO jogador 3 ganhou!!");
    } else if(total[3] < total[0, 1, 2, 4]){
        printf("\nO jogador 4 ganhou!!");
    } else if(total[4] < total[0, 1, 2, 3]){
        printf("\nO jogador 5 ganhou!!");
    }
    
}

////////////////////////////////EX04//////////////////////////////////
    
void exercicio04(){
    int elemento1[10], elemento2[10], multiplicacao[10];
    for(int i = 0; i < 10; i++){
        printf("Digite os primeiros elementos da multiplicacao(10)");
        scanf("%i", &elemento1[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("Digite os segundos elementos da multiplicacao(10)");
        scanf("%i", &elemento2[i]);
    }

    for(int i = 0; i < 10; i++){
        multiplicacao[i] = elemento1[i] * elemento2[i];
    }

    printf("\n\n-------------Resultados--------------\n\n");

    for(int i = 0; i < 10; i++){
        printf("%i\n", multiplicacao[i]);
    }
}

////////////////////////////////EX05//////////////////////////////////

int primo(int x, int n){
    if( n < 2 ){ 
        return 1;
    }
    if( x >= n )
        return 0;

    if(n % x == 0){
        return 1; 
    }
    return primo(x + 1, n);
}

void exercicio05(){
    int contador[9];
    printf("\nDigite nove numeros inteiros para saber se sao primos ou nao: ");
    for(int i = 0; i < 9; i++){
        printf("\nnumero %i: ", i+1);
        scanf("%i", &contador[i]);
    }

    for(int i = 0; i < 9; i++){
        if(!primo(2, contador[i])){
        printf("\n%i e primo na posicao %i", contador[i], i+1);
    } else {
    }
    }

}

////////////////////////////////EX06//////////////////////////////////

void exercicio06(){
int contador[20], inverso[20], salvar[20];
printf("\nDigite 20 numeros para fazer a troca do exercicio: ");
for(int i = 0; i < 20; i++){
    printf("\n%i numero: ", i+1);
    scanf("%i", &contador[i]);
}

for(int i = 0; i < 20; i++){
    salvar[i] = contador[i];
}

for(int i = 0, j = 20; i < 10; i++, j--){
    inverso[i] = contador[j-1];
}

for(int i = 9, j = 10; i < 20; i++, j--){
    inverso[i] = salvar[j-1];
}


for(int i = 0; i < 20; i++){
    printf("\n%i", inverso[i]);
}

}

////////////////////////////////EX07//////////////////////////////////

void exercicio07(){
    int x[10], y[10], xy[20];
    printf("----Digite 20 numeros inteiros para serem armazenados-----");
    for (int i = 0; i < 10; i++){
        printf("\n%i numero: ", i+1);
        scanf("%i", &x[i]);
    }
    
    for(int i = 0; i < 10; i++){
    printf("\n%i numero: ", i+11);
        scanf("%i", &y[i]);
    }
    
    for(int i = 0; i < 10; i++){
        xy[i] = x[i];
    }

    for(int i = 10, j = 0; i < 20; i++, j++){
        xy[i] = y[j];
    }

    printf("Esses sao os numeros armazenados: ");
    for(int i = 0; i < 20; i++){
        printf("\n%i ", xy[i]);
    }

}

////////////////////////////////MAIN//////////////////////////////////


int main (void){
system("cls");
int atividades;
printf("----------------------------------------\n");
printf("\t*LISTA DE ATIVIDADES 06*\n");
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
    default:
        printf("----------------------------------------\n");
        printf("ALTERNATIVA NAO VALIDA!!!\n");
        printf("----------------------------------------\n");
    break;
}
    return 0;
}