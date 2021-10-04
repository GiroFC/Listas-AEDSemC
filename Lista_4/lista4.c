#include <stdio.h>
#include <math.h>

////////////////////////////////EX01//////////////////////////////////

int par(int n){
    int i, sequencia=0;
    for(i = 0; i <= n; i++){
        sequencia+=2;
        i++;
    } return sequencia;
}

void exercicio01(){
    system("cls");
    int a;
    printf("Digite um numero inteiro n: ");
    scanf("%i", &a);

    printf("O n-esimo termo da sequencia e: %i", par(a));
} 

////////////////////////////////EX02//////////////////////////////////

void paresDecrescente(int n){
    if (n%2 != 0){
        n--;
    }
    for(; n >= 0; n-=2){
        printf("%i\t", n);
    } 
}

void exercicio02(){
    system("cls");
    int a;
    printf("Digite um numero inteiro qualquer: ");
    scanf("%i", &a);
    paresDecrescente(a);
}

////////////////////////////////EX03//////////////////////////////////

double umSobreImpar(int n){
    double denom = 3, num = 1, result;
    for(int i = 0; i < n; i++){
        result =  num/denom;
        denom+=2;
    } return result;
    
}

void exercicio03(){
    system("cls");
    int a;
    printf("Digite um numero inteiro qualquer: ");
    scanf("%i", &a);
    for(int i = 0; i < a; i++){
    printf("%f\t", umSobreImpar(a));
    }
}

////////////////////////////////EX04//////////////////////////////////

double somaUmSobreImpar(int n){
    double soma;
    for(int i = 0; i < n; i++){
        soma += umSobreImpar(n);
    } return soma;

}

void exercicio04(){
    system("cls");
    int a;
    printf("Digite um numero inteiro qualquer: ");
    scanf("%i", &a);
    printf("%f", somaUmSobreImpar(a));
}

////////////////////////////////EX05//////////////////////////////////

double parSobreImpar(int n){
    double result;
    for(int i = 0; i < n; i++){
        result = (1 / (double)par(n)) / umSobreImpar(n);
    } return result;
}

double somaParSobreImpar(int n){
    double resultado = 0;
    for(int j = 0; j < n; j++){
        resultado += umSobreImpar(n);
    } return resultado;
}

void exercicio05(){
    system("cls");
    int a, b;
    printf("a- Digite um numero inteiro: ");
    scanf("%i", &a);
    printf("%f\n", parSobreImpar(a));

    printf("\nb- Agora digite outro numero inteiro: ");
    scanf("%i", &b);
    printf("\n%f", somaParSobreImpar(b));
}

////////////////////////////////EX06//////////////////////////////////

double calculo06(int n, double x){
    int pot = 1;
    for(int i = 0; i < n; i++){
        pow(parSobreImpar(n) * x, (double)pot);
        pot++;
    } return;
}

void exercicio06(){
    system("cls");
    int a;
    float b;
    printf("Digite um numero inteiro, e um numero real nessa ordem: \n");
    scanf("%i %f", &a, &b);
    printf("%f", calculo06(a, b));
}

////////////////////////////////EX07//////////////////////////////////

double calculo07(int n, double x){
    double result;
    for(int j = 0; j < 0; j++){
        result += calculo06(n, x);
        n--;
    } return result;
}

void exercicio07(){
    system("cls");
    int a;
    float b;
    printf("Digite um numero inteiro, e um numero real nessa ordem: \n");
    scanf("%i %f", &a, &b);
    printf("%f", calculo07(a, b));
}

////////////////////////////////EX08//////////////////////////////////

float fatorial(int n){
    float result = 1;
    float j = n;
    for(; j > 0; j--){
        result *= j;
    } return result;
}

void exercicio08(){
    system("cls");
    int a;
    printf("Digite um numero inteiro: ");
    scanf("%i", &a);
    printf("%f", fatorial(a));
}

////////////////////////////////EX09//////////////////////////////////

int impar(int n){
    int i, sequencia=1;
    for(i = 0; i <= n; i++){
        sequencia+=2;
        i++;
    } return sequencia;
}

double sequencia09(int n, float x){
    int k = impar(n);
    float num = par(n) * pow(x, n);
    float denom = fatorial(k); 
    float result = (num / denom);
    return result;
}

void exercicio09(){
    system("cls");
    int a;
    float b;
    printf("Digite um numero inteiro e um numero real nessa ordem: ");
    scanf("%i %f", &a, &b);
    printf("O resultado e: %f", sequencia09(a, b));
}

////////////////////////////////EX10//////////////////////////////////

float somaSequencia09(int n, float x){
    int k = impar(n);
    float soma=0, num, denom;
    for(; n > 0; n--, k--){
    num = par(n) * pow(x, n);
    denom = fatorial(k); 
    soma += (num / denom);
    }
    
    return soma;
}

void exercicio10(){
    system("cls");
    int a;
    float b;
    printf("Digite um numero inteiro e um numero real nessa ordem: ");
    scanf("%i %f", &a, &b);
    printf("O resultado e: %f", somaSequencia09(a, b));
} 

////////////////////////////////EX11//////////////////////////////////

float somaSequencia09impar(int n, float x){
    int k = impar(n);
    float soma=0, num, denom = 0;
    if((int)denom%2 != 0){
        for(; n > 0; n--, k--){
            num = par(n) * pow(x, n);
            denom = fatorial(k); 
            soma += (num / denom);
        }return soma;
    } else {
        return printf("o denominador e multiplo de 2");
    }
}

void exercicio11(){
    system("cls");
    int a;
    float b;
    printf("Digite um numero inteiro e um numero real nessa ordem: ");
    scanf("%i %f", &a, &b);
    printf("O resultado e: %f", somaSequencia09impar(a, b));
}

////////////////////////////////EX12//////////////////////////////////
void multiplosDeCinco(int n){
    int a = 0;
    for(int i = 0; i < n; i++){
        printf("%i ", a);
        a += 5;
    } 
}

void exercicio12(){
    system("cls");
    int b;
    printf("Digite quantos multiplos de 5 vc deseja ver: ");
    scanf("%i", &b);
    multiplosDeCinco(b);
}

////////////////////////////////EX13//////////////////////////////////

int fibonacci(int n){
    int n1 =0, n2 =1, fibo = 0;
  
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    for(int i = 3; i <= n; i++){
        fibo = n1 + n2;
        n1 = n2;
        n2 = fibo;
    }
    return fibo;
}

void exercicio13(){
    system("cls");
    int a;
    do{
    printf("Digite a posicao da serie de fibonacci que voce deseja ver: ");
    scanf("%i", &a);
    } while(a <= 0);
    printf("O numero da serie de fibonacci desejado e %i", fibonacci(a));
}

////////////////////////////////EX14//////////////////////////////////

int maiorFibonacci(int n){
    int n1 =0, n2 =1, fibo = 0;
    for(; n1 < n;){
        fibo = n1 + n2;
        n1 = n2;
        n2 = fibo;
    }
    return fibo;
}

void exercicio14(){
    system("cls");
    int a;
    do{
    printf("Digite o maior numero da sequencia de fibonnacci que vc deseja ver: ");
    scanf("%i", &a);
    } while(a <= 0);
    printf("O numero da serie de fibonacci desejado e %i", maiorFibonacci(a));
}

////////////////////////////////MAIN//////////////////////////////////
int main(void){
    system("cls");
    int atividades;
        printf("----------------------------------------\n");
        printf("\tLISTA DE ATIVIDADES 04\n");
        printf("\tAluno: Igor Franco\n");
        printf("----------------------------------------\n");
        printf("Digite o numero do ex que deseja ver:\n");
        scanf("%d", &atividades);
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
 