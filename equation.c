#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("\n=== Equation du second degre ===\n");
	int a=0,b=0,c=0;
	printf("\nENtrez votre equation: ");
	scanf("%dx2 + %dx + %d",&a,&b,&c);
	//printf("\na = %d,b = %d, c = %d",a,b,c);
	if (a==0)
	{
		if (b==0)
		{
			if (c==0)
			{
				printf("\nTout reel est solution de l'equation\n");
			}
			else{
				printf("\nL\'equation n\'admet pas de solution\n");
			}
		}
		else{
			if (c==0)
			{
				printf("\nLa solution est: s0 = 0\n");
			}
			else{
				float s0 = -(float)c/(float)b;
				printf("\nLa solution est: -%d/%d = %0.2f\n",c,b,s0);
			}	
		}
	}
	else{
		int delta = (b*b) - (4*a*c);
		if (delta<0)
		{
			printf("\nDelta = (%dx%d)-(4x%dx%d) = %d",b,b,a,c,delta);
			printf("\nL\'equation n\'admet pas de solution\n");
		}
		else if (delta>0)
		{
			printf("\nDelta = (%dx%d)-(4x%dx%d) = %d",b,b,a,c,delta);
			float x1 = (float)(-b - sqrt(delta)) / (float)(2*a);
			float x2 = (float)(-b + sqrt(delta)) / (float)(2*a);
			printf("\nL\'equation admet 2 solutions: x1 = %0.2f et x2 = %0.2f\n",x1,x2);
		}
		else{
			printf("\nDelta = (%dx%d)-(4x%dx%d) = %d",b,b,a,c,delta);
			float x0 = (float)(-b) / (float)(2*a);
			printf("\nL\'equation admet une solution x0 = -%d / 2*%d = %0.2f\n",b,a,x0);
		}
	}

}