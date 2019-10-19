#include <stdio.h>
#include <stdlib.h>
#include "index_first_negative.h"
#include "index_last_negative.h"
#include "sum_between_negative.h"
#include "sum_before_and_after_negative.h"

int main(){
	const int N = 100;
	int value;
	int count = 0;
	int array[N];
	char space;
	char enter = '\n';
	scanf("%d", &value);
	while ((space != enter) && (count < 100)){
		scanf("%d%c", &array[count++], &space);
	}
	switch(value){
        case 0:{
            printf("%d\n", index_first_negative(array, count));
            return 0;
               }
        case 1:{
               printf("%d\n", index_last_negative(array, count));
               return 0;
               }
        case 2:{
               printf("%d\n", sum_between_negative(array, count));
               return 0;
               }
        case 3:{
               printf("%d\n", sum_before_and_after_negative(array, count));
               return 0;
               }
        default:{
                printf("Данные некорректны\n");
                return 0;
                }
	}
}



