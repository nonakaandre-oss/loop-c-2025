#include <stdio.h>

int main(){
 int numA, numB;

   printf("Digite o primeiro número inteiro:");
   scanf("%d", &numA);
   printf("Digite o segundo número inteiro:");
   scanf("%d", &numB);

   printf("Número digitados: %d, %d\n", numA, numB);

 if(numA > numB) {
    printf("Número maior: %d\n", numA);
    printf("Número menor: %d\n", numB);
 } else if  (numA > numB) {
    printf("Número maior: %d\n", numB); 
    printf("Número menor: %d\n", numA);    
} else {
    printf("Números iguais\n");
}

}