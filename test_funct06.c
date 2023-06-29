//function - 3: no parameter/has return
#include <stdio.h>

int sumNumber( ){
    printf("SAU....\n");
    return 10 + 30;
}

void main(){
    int sum;
    printf("10+30 = %d\n",sumNumber());
    sum = sumNumber();
}