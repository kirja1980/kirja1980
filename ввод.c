#include "head.h"
char **read_text(int *number)
{
	int index_s=0,max_index_s=MAX_SIZE;
	int san=0, max_san=MAX_SIZE;
	char symbol = ' ';

	char **text = (char**) calloc(max_index_s,sizeof(char*));
	text[index_s] = (char*)calloc(max_san, sizeof(char));

	while ((symbol=getchar())!='\n'){
		if((isspace(symbol) && san == 0)) continue;
		if(san>max_san-1){ 
			max_san+=MAX_SIZE;
			text[index_s] = (char*)realloc(text[index_s], max_san*sizeof(char)); 
			};

		text[index_s][san++]=symbol;
		if(symbol=='.')
		{
			text[index_s++][san]='\0';
			if(index_s>max_index_s-1){ 
				max_index_s+=MAX_SIZE;
				text=(char**)realloc(text, max_index_s*sizeof(char*));
				}
			san=0;
			text[index_s] = (char*)calloc(max_san, sizeof(char));
		}
		
	}
	*number=index_s;
	return text;
}
