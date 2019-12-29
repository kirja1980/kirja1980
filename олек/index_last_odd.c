#include "index_last_odd.h"

int index_last_odd(int mass[], int kol){
    int rez=-1;
    int i;
    for (i=0;i<kol;i++){
         
        if (mass[i]%2!=0){
            rez = i;
           
        }
    }
    return rez;
}