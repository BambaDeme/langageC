#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int nbEssai=3,x,i=1,nb;
	x = 1+rand()%10;
	printf("\n=== Vous avez 3 essais ===");
	printf("\nDevinez x: ");
	scanf("%d",&nb);
	while(i<nbEssai && nb!=x){
		(nb>x) ? printf("\n**x est plus petit**"):printf("\n**x est plus grand**");
		printf("\nIl vous reste %d essais", nbEssai-i);
		printf("\nDevinez x: ");
		scanf("%d",&nb);
		i++;
	}
	if (i>=nbEssai)
	{
		printf("\nVous avez perdu: x = %d\n",x);
	}
	else{
		printf("\nBravo! vous avze devine x en %d essais\n",i);
	}
}