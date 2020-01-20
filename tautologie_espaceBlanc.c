#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//fonction qui supprime les espaces superflux d'une chiane
char* espaceBlancs(char str[]){
	int i = 0;
	//printf("\n%ld",strlen(str));
	while(i<strlen(str)){
		if (i==0 && str[i]==' ')
		{
			for(int j=0;j<strlen(str);j++){
				str[j] = str[j+1];
			}
			i--;
		}
		if (str[i]== ' ' && str[i+1] == ' ')
		{
			for(int j=i;j<strlen(str);j++){
				str[j] = str[j+1];
			}
			i--;
		}
		if (str[i]== ' ' && str[i+1] == '.')
		{
			for(int j=i;j<strlen(str);j++){
				str[j] = str[j+1];
			}
			i--;
		}
		else{
			i++;
		}
	}
	return str;
}

// fonction qui verifie si une phrase est une totologie
int tautologie(char* phrase){
	int tautologie = 1;
	int i = 0;
	while(i<strlen(phrase)){
		if (phrase[i]==' ' && phrase[i+1] != phrase[0])
		{
			tautologie = 0;
			return tautologie;
		}
		i++;
	}
	return tautologie;
}
int main(){
	char phrase[100];
	printf("\nEntrez une chaine:");
	fgets(phrase,100,stdin);
	printf("\nphrase sans espace blanc:%s",espaceBlancs(phrase));
	//espaceBlancs(phrase);
	if (tautologie(phrase))
	{
		printf("\nVotre phrase est une totologie.\n");
	}
	else{
		printf("\nVotre phrase n\'est pas une totologie.\n");
	}

}