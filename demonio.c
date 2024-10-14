#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void limparTela() {
    system("cls");
}
int i;
float fahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
// esse codigo é para converte temperatura

int main() {
    printf("CONVERSAO FAHREINHEIT – CELSIUS\n");
    printf("CELSIUS FAHREINHEIT\n\n");

    // Converte de Fahrenheit para Celsius
    for (i = 0; i <= 100; i++) { // Exemplo: Fahrenheit de 0 a 100
        printf("%3d F -> %.2f C\n", i, fahrenheitParaCelsius(i));

        if ((i + 1) % 25 == 0) { // A cada 25 valores
            printf("\nPressione ENTER para continuar...");
            while (getche() != 0x0d); // Espera pelo ENTER
            limparTela();
            printf("CONVERSAO FAHREINHEIT – CELSIUS\n");
            printf("CELSIUS FAHREINHEIT\n\n");
        }
    }



    return 0;
}
