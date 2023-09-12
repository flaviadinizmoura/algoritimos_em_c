#include <stdio.h>
int main() 
{
	float preco1, preco2, preco3, preco4, preco5, preco6, preco7, preco8; 


	printf (" entre com o preco dos produtos: R$");
	scanf ("%f%f%f%f%f%f%f%f", &preco1, &preco2, &preco3, &preco4, &preco5, &preco6, &preco7, &preco8);	

		
    if (preco1 <= preco2 && 
	    preco1 <= preco3 && 
		preco1 <= preco4 && 
		preco1 <= preco5 &&
		preco1 <= preco6 && 
		preco1 <= preco7 && 
		preco1 <= preco8 ) {
			
    printf(" compre o primeiro produto que e mais barato.\n");	
	} 
	
	else if(preco2 <= preco1 && 
	        preco2 <= preco3 && 
	        preco2 <= preco4 && 
	        preco2 <= preco5 &&
			preco2 <= preco6 && 
	        preco2 <= preco7 && 
		    preco2 <= preco8){
		    	
		printf(" compre o segundo produto que e mais barato.\n");
	}
              
	else if (preco3 <= preco1 && 
	         preco3 <= preco2 && 
	         preco3 <= preco4 && 
	         preco3 <= preco5 &&
			 preco3 <= preco6 && 
	         preco3 <= preco7 && 
		     preco3 <= preco8){
		     	
		printf(" compre o terceiro produto que e mais barato.\n");
	}

    else if (preco4 <= preco1 && 
	         preco4 <= preco2 && 
	         preco4 <= preco3 && 
	         preco4 <= preco5 &&
			 preco4 <= preco6 && 
	         preco4 <= preco7 && 
		     preco4 <= preco8){
		     	
		printf(" compre o quarto produto que e mais barato.\n");
		
	}
    else if(preco5 <= preco1 && 
	        preco5 <= preco2 && 
	        preco5 <= preco3 && 
	        preco5 <= preco4 &&
			preco5 <= preco6 && 
	        preco5 <= preco7 && 
		    preco5 <= preco8){
		    	
		printf(" compre o quinto produto que e mais barato.\n");
	}
              
	else if (preco6 <= preco1 && 
	         preco6 <= preco2 && 
	         preco6 <= preco3 && 
	         preco6 <= preco4 &&
			 preco6 <= preco5 && 
	         preco6 <= preco7 && 
		     preco6 <= preco8){
		     	
		printf(" compre o sexto produto que e mais barato.\n");
	}

    else if (preco7 <= preco1 && 
	         preco7 <= preco2 && 
	         preco7 <= preco3 && 
	         preco7 <= preco4 &&
			 preco7 <= preco5 && 
	         preco7 <= preco6 && 
		     preco7 <= preco8){
		     	
		printf(" compre o setimo produto que e mais barato.\n");
		
	}

	else {
		printf(" compre o oitavo produto que e mais barato.\n");
	}
	return 0;	
}

