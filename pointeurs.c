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
int main(){
    char* prenom = "Bamba";
    char* prenom1 = "Khadim";
    printf("\nLa longeur de '%s' est de: %d\n",prenom,StrLength(prenom));

    StrComapre(prenom,prenom1)? printf("\nLes chaines '%s' et '%s' sont identiques.\n",prenom,prenom1): printf("\nLes chaines '%s' et '%s' ne sont pas identiques.\n",prenom,prenom1);
}