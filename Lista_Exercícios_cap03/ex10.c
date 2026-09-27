#include <stdio.h>
int main(){
    int  i = 1;
    for(i; i<=100; i++){
        printf("%d\t", i*3);
        if(i % 10 == 0){
            printf("\n");
        }
    }
    return 0;
}