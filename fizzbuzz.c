#include <stdio.h>
#include <stdlib.h>
const char input [] = "f1.txt"; //Here it reads the txt files
const char output [] = "f2.txt";



int main()
{

// it opens the ptr, the chars and the integer all together
FILE *fb_input;
FILE *fb_output;
char line [100];
int num;

//it opens the file of reads the numbers

fb_input = fopen(input, "r");

	if(fb_input == NULL)
	{
	printf("No input file\n");
	return 8;
	}
				
fb_output = fopen(output, "w+");

	if(fb_output == NULL)
	{
	printf("No output file\n");
	return 8;
}
	while(fgets(line, sizeof(line), fb_input))
	{
		
		sscanf(line, "%d", &num);		
		//sscanf puts the line into the integer

		if(num == EOF)
			{
			break;
			}

		if(num % 3 == 0 && num % 5 == 0)
		//It starts the fizz buzz
		{
		fprintf(fb_output, "\nFIZZBUZZ\n");
		}
	
		
		if(num % 3 == 0)
		{
		fprintf(fb_output, "\nFIZZ\n");
		}

		if(num % 5 == 0)
		{
		fprintf(fb_output, "\nBUZZ\n");
		}	
		else
			{
			fprintf(fb_output, "\n%d\n", num);
			}

	}

fclose(fb_input);
fclose(fb_output);

return 0;
}
