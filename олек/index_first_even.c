#include "index_first_even.h"

int index_first_even(int mass[], int kol){
    int rez=-1;
    int i;
    for (i=0;i<=kol;i++){
        
        if((mass[i]%2==0)&&(mass[i]!=0)){
            rez=i;
            return rez;
        }
    }
    return -1;
} 