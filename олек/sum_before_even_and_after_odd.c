#include "sum_before_even_and_after_odd.h"

int sum_before_even_and_after_odd(int mass[], int kol){
    int sum=-1;
    int chet=index_first_even(mass,kol);
    int nechet=index_last_odd(mass,kol);
    if((chet!=-1)||(nechet!=-1)){
        sum=0;
        int i;
        for(i=0;i<chet;i++){
            sum += abs(mass[i]);
        }
        int j;
        for(j=nechet;j<kol;j++){
            sum += abs(mass[j]);
        }
    }
    return sum;
}