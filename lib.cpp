#include "lib.h"

int NP (int num) {
    int i;
    int div=0;
    //div= numero de divisores de num
    for (i = 1; i <= num; i++)

    if (num%i==0) {
        div++;
    }
    return div;}
