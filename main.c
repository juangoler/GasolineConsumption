#include <stdio.h>
#include <ctype.h> // Oi, D#####, adicionei essa biblioteca para o uso do toupper.

int main() {
    char carro;
    int percurso;
    float consumo; 
    
    printf("Informe o tipo de carro, sendo eles: A, B e C\n");
    scanf(" %c", &carro);

     // Utilizei para converter os caracteres para maisculo, assim evitando erros.
    carro = toupper(carro);

    switch (carro) {
        case 'A':
            printf("Informe o percurso rodado em KM: \n");
            scanf("%d", &percurso);

            consumo = (float)percurso / 8; 

            printf("Seu consumo foi de: %.2f\n", consumo); 
            break;
        case 'B':
            printf("Informe o percurso rodado em KM: \n");
            scanf("%d", &percurso);

            consumo = (float)percurso / 9; 

            printf("Seu consumo foi de: %.2f\n", consumo);
            break;
        case 'C':
            printf("Informe o percurso rodado em KM: \n");
            scanf("%d", &percurso);

            consumo = (float)percurso / 12; 

            printf("Seu consumo foi de: %.2f\n", consumo); 
            break;
        default:
            printf("Tipo de carro inválido.\n");
            break;
    }

    return 0;
}
