#include <stdio.h>

int main() {
    float n1,n2,n3,media;
    printf("Digite o valor de n1:\n");
    scanf("%f%*c",&n1);
    printf("Digite o valor de n2:\n");
    scanf("%f%*c",&n2);
    printf("Digite o valor de n3:\n");
    scanf("%f%*c",&n3);
    media=n1+n2+n3/3;
    printf("A media aritimetica é: %.2f", media);
}