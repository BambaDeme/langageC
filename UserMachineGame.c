#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	int nbre_partie = 3;
	int nbre_manche = 10;
	int userScore=0,machineScore=0,userPartieScore,machinePartieScore;
	int i=1,j=1,a;
	srand(time(NULL));
	while(i<=nbre_partie){
		userPartieScore = 0;
		machinePartieScore = 0;
		printf("\n=== PARTIE %d ===",i);
		j=1;
		while(j<=nbre_manche){
			int x = 1+rand()%10;
			printf("\n\nutilisateur: ");
			scanf("%d",&a);
			printf("machine: %d",x);
			if (a%2==0)
			{
				if(x<a){
					userPartieScore++;
					printf("\nutilisateur gagne.");
				}else if (x>a)
				{
					machinePartieScore++;
					printf("\nmachine gagne");
				}else{
					printf("\nmatch nul");
				}
			}
			else{
				if(x>a){
					userPartieScore++;
					printf("\nutilisateur gagne.");
				}else if (x<a)
				{
					machinePartieScore++;
					printf("\nmachine gagne");
				}else{
					printf("\nmatch nul");
				}
			}
			j++;
		}
		printf("\nmachine: %d, utilisateur: %d",machinePartieScore,userPartieScore);
		if (userPartieScore>machinePartieScore)
		{
			userScore++;
			printf("\n***utilisateur gagne partie %d***",i);
		}
		else if (machinePartieScore>userPartieScore)
		{
			machineScore++;
			printf("\n***machine gagne partie %d***",i);
		}
		else{
			printf("\n***match nul partie %d***",i);
		}
		i++;
	}
	printf("\nScore Total: machine = %d, utilisateur = %d\n",machineScore,userScore);
	if (machineScore>userScore)
	{
		printf("\nLa machine remporte le match.\n");
	}else if(userScore>machineScore){
		printf("\nL'utilisateur remporte le match");
	}else{
		printf("\nmatch nul");
	}
}