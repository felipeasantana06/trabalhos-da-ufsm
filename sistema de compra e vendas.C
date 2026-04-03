#include <stdio.h>        

	int x = 1, valor_do_cliente;
	float valor, valor_Final, valor_Final_mesmo;
	float  frete;
	char forma_Pagamento, tipo_cliente;
	
int main(){
	printf("Voce e cliente Vip, Premium ou Comum? ");
	scanf("%c", &tipo_cliente);
	
	if (tipo_cliente == 'c' || tipo_cliente == 'C'){
		valor_do_cliente = 1;
	}
	else if (tipo_cliente == 'p' || tipo_cliente == 'P'){
		valor_do_cliente = 2;
		
	}
	else if (tipo_cliente == 'v' || tipo_cliente == 'V'){
		valor_do_cliente = 3;
	}
	else{
		printf("resposta invalida, vamor recomecar: \n \n \n");
		fflush(stdin);
		main();
	}
	
	fflush(stdin);
	
	switch (valor_do_cliente){
		case 1:{
			printf("\n comum----incerir valor da compra:");
			scanf("%f", &valor);
			valor_Final = valor;
			
			fflush(stdin);
			printf("incerir forma de pagamento: ");
			descontinho();
			
			
			break;
		}
		case 2:{
			printf("premium-----incerir valor da compra: ");
			scanf("%f", &valor);
			valor_Final = valor*0.9;
			
			fflush(stdin);
			printf("incerir forma de pagamento: ");	
			descontinho();
			
					
			break;
		}
		case 3:{
			printf("vip-----incerir valor da compra: ");
			scanf("%f", &valor);
			valor_Final = valor*0.8;
			
			fflush(stdin);
			printf("incerir forma de pagamento: ");		
			descontinho();
				
			
			break;
		}
	}	
	
	
	
	
	printf(" valor normal: %f \n", valor);
	printf(" valor com desconto: %f \n", valor_Final);
	
	frete = valor_Final <= 100? + 15: 0;
	
	valor_Final_mesmo = frete + valor_Final;
	
	printf(" frete: %f \n", frete);
	printf(" valor final: %f \n", valor_Final_mesmo);
	
	if(valor_Final < 50){
		printf(" economico");
	}
	if(valor_Final>=50 || valor_Final<=200 ){
		printf(" intermediario");
	}
	if(valor_Final>200 ){
		printf(" premium");
	}

	return 0;

}


int descontinho(){
	scanf("%c", &forma_Pagamento);
	if(forma_Pagamento == 'p' || forma_Pagamento == 'P'  ){
		valor_Final = valor_Final*0.95;
		printf("opção pix: \n");
	}
	else if (forma_Pagamento == 'b' || forma_Pagamento == 'B'  ){
		valor_Final = valor_Final*0.98;
			printf("opção boleto: \n");
	}
	else{
		printf("pagamento fora das opções");
		printf("\n insira novamente a forma de pagamento:");
		fflush(stdin);
		descontinho();
		
	}
	fflush(stdin);
	
	return 0;
}

