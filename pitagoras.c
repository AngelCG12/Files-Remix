//With this code I will re cycle another one I did but now I'll find the hipotenuse

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const char mult_in [] = "catetos.txt";
const char mult_out[] = "hipotenusa.txt";

int main() 
{

FILE *numberslist;
FILE *result;

char line [200];
int num;
int num2;
float multiplication;


numberslist = fopen(mult_in, "r");
	if(numberslist == NULL)
	{
	printf("Impossible\n");
	return 8;
	}

result = fopen(mult_out, "w+");
	if(result == NULL)
	{
	printf("Not possible\n");
	return 8;
	}


while(feof(numberslist)==0)
{

fscanf(numberslist, "%d %d", &num, &num2);

multiplication =    (((num^2)+(num2^2))^(1/2));

fprintf(result, "The hipotenuse is %f\n", multiplication);

}



fclose(numberslist);
fclose(result);

return 0;
}
