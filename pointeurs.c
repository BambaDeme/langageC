#include<stdio.h>
#include<stdlib.h>

// fonction qui calcule la longueur d'une chaine
int StrLength(char* str){
	int i = 0;
	while(*(str+i)!='\0'){
		i++;
	}

	return i;
}

// fonction qui compare deux chaines
int StrComapre(char* str, char* str1){
	if(StrLength(str) != StrLength(str1)){
		return 0;
	}
	else{
		int i = 0;
		while(i<StrLength(str)){
			if (*(str+i) != *(str1+i))
			{
				return 0;
			}
			i++;
		}
		return 1;
	}
}
//fonction qui concaténe deux chaines
void StrConcate(char* str, char* str1){
	int n  = StrLength(str) + StrLength(str1) +1;
	char newChaine[n];
	
	int i = 0,j=0,k=0;
	while(j<StrLength(str1)){
		*(newChaine+i) = *(str1+j);
		j++;
		i++;
	}
	/*while(k<StrLength(str1)){
		*(newChaine+i) = *(str1+k);
		k++;
		i++;
	}*/
	printf("chaine = %d\n",StrLength(newChaine) );
	for (int i = 0; i < StrLength(newChaine); ++i)
	{
		printf("%c\n",newChaine[i]);
	}
	//printf("\n%s\n",newChaine);
	//return newChaine;
}
int main(){
    char* prenom = "Bamba";
    char* prenom1 = "Khadim";
    printf("\nLa longeur de '%s' est de: %d\n",prenom,StrLength(prenom));

    StrComapre(prenom,prenom1)? printf("\n'%s' et '%s' sont identiques.\n",prenom,prenom1): printf("\n'%s' et '%s' ne sont pas identiques.\n",prenom,prenom1);

	//printf("\nLa concatenation de '%s' et de '%s' est: %s",prenom,prenom1,);
	//printf("%s",StrConcate(prenom,prenom1));
	//char* newChaine = StrConcate(prenom,prenom1);
	//printf("%s\n",prenom );
	StrConcate(prenom,prenom1);
}