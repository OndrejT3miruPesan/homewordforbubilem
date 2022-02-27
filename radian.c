#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float radtodeg(double rad){
    rad = rad / 0.0174532925;
    return rad;
}

float degtorad(double deg){
    deg = deg * 0.0174532925;
    return deg; 
}

int main() {
    printf("deg; \trad; \tsin; \tcos;\n");
    for(int a = 0; a<361;a += 30){
        printf("%i;  \t%.3f;\t%.3f;\t%.3f;\n",a, degtorad(a), sin(degtorad(a)), cos(degtorad(a)) );
    }

    return 0;
}