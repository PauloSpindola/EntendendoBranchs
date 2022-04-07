#include <stdio.h>
int main() {
    
    float n1, n2, n3, media;
    float p1, p2, p3;
    printf("Digite a primeira nota:\n");
    scanf("%f%*c", &n1);
    printf("Digite o peso da primeira nota:\n");
    scanf("%f%*c", &p1);
    printf("Digite a segunda nota:\n");
    scanf("%f%*c", &n2);
    printf("Digite o peso da segunda nota:\n");
    scanf("%f%*c", &p2);
    printf("Digite a terceira nota:\n");
    scanf("%f%*c", &n3);
    printf("Digite o peso da terceira nota:\n");
    scanf("%f%*c", &p3);
    media=(n1*p1+n2*p2+n3*p3) / (p1+p2+p3);
    printf("A nota ponderada e: %.2f\n", media);

}