#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>

float soma(float a, float b){
    return a + b;
}

float sub(float a, float b){
    return a - b;
}

float mult(float a, float b){
    return a * b;
}

float divisao(float a, float b){
    return a / b;
}

void main(){
    setlocale(LC_ALL, "pt_BR_utf8");

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int op, opcao;
    float n1, n2, resultado;

     printf("----------CALCULADORA----------\n\n");
    
    do{

        do{

            printf("\nInforme a operação desejada:");
            printf("\n1- Adição             2- Subtração");
            printf("\n3- Multiplicação      4- Divisão");
            printf("\n5- Potenciação        6- Radiciação\n");
            scanf("%d", &op);

         } while ((op > 6) || (op < 1));

         if (op == 5){ 

         printf("\nDigite o número da base: ");
         scanf("%f", &n1);

         printf("Digite o número do expoente: ");
         scanf("%f", &n2);
        
         } else if (op == 6) {

             printf("\nDigite o número do radicando: ");
             scanf("%f", &n1);
         
             } else {

                printf("\nDigite o primeiro número: ");
                scanf("%f", &n1);

                printf("Digite o segundo número: ");
                scanf("%f", &n2);
            }

    switch (op){

        case 1:
        resultado = soma(n1, n2);
        break;

        case 2:
        resultado = sub(n1, n2);
        break;

        case 3:
        resultado = mult(n1, n2);
        break;

        case 4:
        resultado = divisao(n1, n2);
        break;

        case 5:
        resultado = pow(n1, n2);
        break;
        
        case 6:
        resultado = sqrt(n1);
        break;
    
    }

    printf("\n--------------------");
    printf("\nO resultado é: %.1f", resultado);
    printf("\nDesja continuar? Digite 1 para SIM ou 2 para NÃO: ");
    scanf("%d", &opcao);

    } while (opcao == 1 );

     SetConsoleOutputCP(CPAGE_DEFAULT);
}
