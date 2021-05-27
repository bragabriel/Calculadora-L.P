#include <stdio.h>
#include <stdlib.h> //biblioteca para alterar as cores do CMD

int main(){
	
	float n1, n2;
    int op;

	while(1){
	
	system("color 3F");
	system("cls"); 
	
	printf("\t\t\t Bem-Vindo!\n\n");
	printf("----------------- Calculadora em linguagem C --------------------\n\n");

    printf("\tOperacoes: \n");
    printf("\t\t1 - soma\n");
    printf("\t\t2 - subtracao\n");
    printf("\t\t3 - multiplicao\n");
    printf("\t\t4 - divisao\n");
    printf("\t\t5 - exit\n\n");

    printf("\tDigite o numero da operacao: ");
    scanf("%d", &op);
    printf("\n");
    
    if(op==5){
    	return;
	}        
	if(op != 1 && op != 2 && op != 3 && op != 4){
		printf("\tDigite um valor valido!\n");
		break;
	}
	
	printf("\tDigite o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("\tDigite o segundo numero: ");
	scanf("%f", &n2);

    switch(op){
                
	case(1):
        printf("\n\tO resultado da soma eh: %.2f\n\n", n1 + n2);
    break;

	case(2):
        printf("\n\tO resultado da subtracao eh: %.2f\n\n", n1 - n2);
    break;

    case(3):
        printf("\n\tO resultado da multiplicacao eh: %.2f\n\n", n1 * n2);
    break;

    case(4):
       	printf("\n\tO resultado da divisao eh: %.2f\n\n", n1 / n2);
	break;
    
    
	}
	system("pause");
}

return 0;

}
