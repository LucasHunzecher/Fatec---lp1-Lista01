#include<stdio.h>

main(){
      
	int numeroUm,numeroDois,i,soma=0;        
    
    printf("Considere que o segundo valor deve ser o maior\n");
	printf("Digite o primeiro numero inteiro\n");
    scanf("%d",&numeroUm);
	printf("Digite o segundo numero inteiro\n");
	scanf("%d",&numeroDois);
     
	if(numeroDois>numeroUm){
    	for(i=numeroUm;i<=numeroDois;i++){
        	soma=soma+i;
        	
        	if(i<numeroDois){
				printf("%d + ", i);
			}
			else{
				printf("%d = %d\n", i, soma);	
			}
		}
    	
		printf("\nA soma entre os numeros digitados e os numeros existentes entre eles e: %d",soma);
    }
    else{
    	printf("O segundo numero deve ser maior que o primeiro!");
	}
                                                   
	return 0;
}
