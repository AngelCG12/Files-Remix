#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define medida 1000

const char *texto = "text1.txt";
const char *word = "word.txt";

int main(){

	FILE *tex;
	FILE *pal;

	int recorrer;
	char word[100];
	int count;

	printf("Escribe la palabra que quieres buscar: \n");
	scanf("%s ",word);

	tex=fopen(texto,"r");
	if(tex==NULL){
		fprintf(stderr," Este archivo llamado %s no se puede abrir", texto);
	return(8);
	}

	pal=fopen(word,"w+");
	if(pal==NULL){
                fprintf(stderr," Este archivo llamado %s no se puede abrir", word);
	return(8);
	}

	count = contador_veces(tex,word);
	fprintf(pal,"'%s' las veces son %d \n", word, recorrer);
	fclose(tex);
	fclose(pal);

return 0;
}

int contador_veces(FILE *tex, const char *texto){
	char str[medida];
	char *pasar;
	int index;
	int i=0;
	while((fgets(str,medida,tex)) !=NULL)
	{
		index =0;
		while((pasar = strstr(str+index,word)) !=NULL){
		index=(pasar - str)+1;
		i++;
		}
	}
return i;

}
