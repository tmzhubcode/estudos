#include <stdio.h>
int main(){

    int numero;
    printf("digite um numero:\n");
    scanf("%d",&numero);
    //se numero <0 negativo
    //se numero >0 positovo
    //se numero =0 zero
    if(numero < 0){
        printf("negativo");
    }else{
        printf("positivo");
    }if(numero == 0){
        printf("zero");
    }else if(numero % 2 >= 0){
        printf("par\n");
    }else{
        printf(" impar \n");
    }

}