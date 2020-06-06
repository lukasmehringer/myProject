#include <stdio.h>
#include "add.h"

int main(){
    printf("this my calculator\n");

    double x = 0;
    double y = 5;
    printf("%lf + %lf = %lf",x,y,myAddFcn(x,y));

    
}