#include <stdio.h>
int main(){

float altura, peso,imc = 0;

printf("digite sua altura");
scanf("%f", &altura);

printf("Digite seu peso");
scanf("%f", &peso);

imc = peso / (altura*altura);

if(imc<18.5){
    printf("Seu imc eh %.2f , classificado como baixo nivel", imc);
}else if(imc<25){
    printf(" seu imc eh %.2f, classificado como peso normal", imc);
}else if(imc<30){
    printf("seu eh %.2f, classificado como acima do peso", imc);
}else if(imc<35){
    printf("seu imc eh %2.f, classificado como obeso", imc);

return 0;    
}
}