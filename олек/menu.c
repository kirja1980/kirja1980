#include <stdio.h>
#include <stdlib.h>
#include "index_first_even.h"
#include "index_last_odd.h"
#include "sum_between_even_odd.h"
#include "sum_before_even_and_after_odd.h"

int operation(int mass[], int oper, int kol);

int main()
{  
   int mass[100];
   int oper=-1;
   char sp=' ';
   scanf("%d",&oper);
   int kol=0;
   while (sp==' '){
       scanf("%d%c",&mass[kol++],&sp);
   }
   
   int rez = operation(mass,oper,kol);
   if(rez==-1){
       printf("Данные некорректны\n");
   }
   else{
       printf("%d\n",rez);
   }
    
   
    return 0;
}

int operation(int mass[], int oper, int kol){
    switch(oper){
        case 0:
            return (index_first_even(mass,kol));
        case 1:
            return (index_last_odd(mass,kol));
        case 2:
            return (sum_between_even_odd(mass,kol));
        case 3:
            return (sum_before_even_and_after_odd(mass,kol));
        default:
            return (-1);
    }
}