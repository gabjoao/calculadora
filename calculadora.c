#include <stdio.h>
#include <locale.h>
#include <windows.h>

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

    int op, opcao, a=0;
    float n1, n2, resultado;

    do{

        do{

         printf("Informe a operação desejada:\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Potenciação\n6-Radiciação\n\n");
         scanf("%d", &op);

         } while ((op > 6) || (op < 1));

    printf("\nDigite o primeiro número: \n");
    scanf("%f", &n1);

    printf("\nDigite o segundo número: \n");
    scanf("%f", &n2);

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

     /*   case 5:
        resultado = (n1 * n1);
        for(a=0; a <= n2; a++)
            resultado = resultado * n1;
        break;

       case 6:

        break;
    */
    }

    printf("\n\nO resultado é: %.1f", resultado);
    printf("\nDesja continuar? Digite 1 para SIM ou 2 para NÃO: ");
    scanf("%d", &opcao);

    } while (opcao == 1);

     SetConsoleOutputCP(CPAGE_DEFAULT);
}
