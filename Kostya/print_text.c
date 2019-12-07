#include <print_text.h>

void print_text(**text, *number){
	
	for (int i = 0; i < *number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			printf("%s", text[i][j]);
			free (text[i][j]);
		}	
		free (text[i]);
	}	

	free (text);


}
