#include <stdio.h>
#include <locale.h>
#include <windows.h>

void main(){
    setlocale(LC_ALL, "pt_BR_utf8");

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int op, opcao, a=0;
    float n1, n2, resultado;
    
    
    do{
        
        do{ 
       
         printf("Informe a operação desejada:\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Potenciação\n6Radiciação\n\n");
         scanf("%d", &op);
    
         } while ((op > 5) || (op < 1));

    printf("Digite o primeiro número: \n");
    scanf("%f", &n1);
    
    printf("Digite o segundo número: \n");
    scanf("%f", &n2);

    switch (op){
        
        case 1:
        resultado = n1 + n2;
        break;
        
        case 2:
        resultado = n1 - n2;
        break;
        
        case 3:
        resultado = n1 * n2;    
        break;
        
        case 4:
        resultado = n1 / n2;
        break;
        
      //  case 5:
      //    resultado = (n1 * n1);
      //    for(a=0; a <= n2; a++)
      //      resultado = resultado * n1;
      //  break;

      // case 6:
      
      // break;
        
    }
    


    printf("\nO resultado é: %.1f", resultado);
    printf("\nDesja continuar? Digite 1 para SIM ou 2 para NÃO: ");
    scanf("%d", &opcao);
        
    } while (opcao == 1);

     SetConsoleOutputCP(CPAGE_DEFAULT);   
}
