#include <stdio.h>
#include <ctype.h> // Oi, daives, adicionei essa biblioteca para o uso do toupper.

int main() {
    char carro;
    int percurso;
    int consumo;
    
    printf("Informe o tipo de carro, sendo eles: A, B e C\n");
    scanf(" %c", &carro);

    // utilizei para converter os caracteres para maisculo, assim evitando erros.
    carro = toupper(carro);

    switch (carro) {
        case 'A':
            printf("Informe o percurso rodado em KM: \n");
            scanf("%d", &percurso);

            consumo = percurso / 8;

            printf("Seu consumo foi de: %d\n", consumo);
            break;
        case 'B':
            printf("Informe o percurso rodado em KM: \n");
            scanf("%d", &percurso);

            consumo = percurso / 9;

            printf("Seu consumo foi de: %d\n", consumo);
            break;
        case 'C':
            printf("Informe o percurso rodado em KM: \n");
            scanf("%d", &percurso);

            consumo = percurso / 12;

            printf("Seu consumo foi de: %d\n", consumo);
            break;
        default:
            printf("Tipo de carro inválido.\n");
            break;
    }

    return 0;
}
