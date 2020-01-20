#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\n=== Arithmetique ===\n");
	printf("\nEntrez votre operation: ");
	int nb1,nb2;
	char op;
	scanf("%d %c %d",&nb1,&op,&nb2);
	
	switch(op){
		case '+':
				printf("\n%d + %d = %d\n",nb1,nb2,nb1+nb2);
			break;
		case '-':
				printf("\n%d - %d = %d\n",nb1,nb2,nb1-nb2);
			break;
		case '*':
				printf("\n%d * %d = %d\n",nb1,nb2,nb1*nb2);
			break;
		case '/':
				printf("\n%d / %d = %d\n",nb1,nb2,nb1/nb2);
			break;
		default:
				printf("\ntype d'operateur inconnu\n");
			break;
	}
}