#include "sum_between_even_odd.h"

int sum_between_even_odd(int mass[], int kol){
    int sum=-1;
    int nach=index_first_even(mass,kol);
    int konec=index_last_odd(mass,kol);
    if((nach!=-1)&&(konec!=-1)){
        sum=0;
        int i;
        for(i=nach;i<konec;i++){
            sum += abs(mass[i]);
        }
    }
    return sum;
}