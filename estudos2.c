#include <stdio.h>
int main(){
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    int idade;
    printf("digite sua idade:\n");
    scanf("%d", &idade);

    // idade => 60 
    // idade <60 x >=18
    // idade <18 x  >=12
    // idade <12 x >=3
    // idade <3 x >=0

    if(idade >= 60){
        printf("voce é um velho imprestavel e nojento");
    } else if (idade >= 18 && idade < 60){
        printf("voce é adulto e tem que trabalhar seu boco");
    } else if (idade >=12 && idade <18){
        printf("voce é um adolecente reclamão sustentado pelos pais seu verme");
    } else if (idade >=3 && idade <12){
        printf("voce é uma criança insuportavel");
    } else if(idade >=0 && idade <3){
        printf("minha princesa voce nao me deixa dormir mas papai te ama");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
}


   