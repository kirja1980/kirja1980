void comparison(char **text, int *number)
	{
	int n=0, summ=0, more = 0, shet = 0;
	int *index=(int)calloc(*number, sizeof(int));
	for (int i=0;i<*number;i++){
		for (int j=n++;j<*number;j++){
			if (sizeof(text[i])>=sizeof(text[i])) more = sizeof(text[i]);
			else more = sizeof(text[j]);
			for (int k=0; k<more;k++){
				if (toupper(text[i][k]) & toupper(text[j][k])){ summ+=1; /*printf("char = %c\n", text[j][k]);*/}
			}
			//printf("###%d###%d)___%d___%ld___\n",i,j,strlen(text[i]),summ);
			if (((summ) == strlen(text[j])) && i!=j){
				//printf("WTF!WTF!WTF!WTF!\n");
				for (int k=j;k<*number-1;k++){
					text[k] = (char*)realloc(text[k], (strlen(text[k])+strlen(text[k+1])+10)*sizeof(char));
					//printf("BBBBBBBBBBBBB\n");
                  			strcpy(text[k],text[k+1]);
				}
			}
			summ=0;
		}
	}
	//printf("%d\n",shet);
	//memccpy(txt,text,sizeof(text),'\n');
}
