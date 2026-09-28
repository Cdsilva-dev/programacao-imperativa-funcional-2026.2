#include <stdio.h>
int main(){
    float Celsius,Farnheit, Kelvin;
    for (Celsius = 0; Celsius<=100; Celsius+=5){
        Farnheit =  (Celsius*1.8) + 32;
        Kelvin = Celsius + 273.15;
        printf("Celsius : %.2f\n Farnheit  : %.2f\n Kelvin :%.2f\n", Celsius,Farnheit,Kelvin);
    }


    return 0;
}
