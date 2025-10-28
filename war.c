#include <stdio.h>
#include <string.h>

#define QTD_TERRITORIOS 5

// Estrutura que representa um território
typedef struct {
    char nome[50];
    char corExercito[20];
    int tropas;
} Territorio;

int main() {
    Territorio territorios[QTD_TERRITORIOS];

    printf("===== CADASTRO DE TERRITÓRIOS =====\n");

    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("\n--- Território %d ---\n", i + 1);

        printf("Nome do território: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; // remove o \n

        printf("Cor do exército: ");
        fgets(territorios[i].corExercito, sizeof(territorios[i].corExercito), stdin);
        territorios[i].corExercito[strcspn(territorios[i].corExercito, "\n")] = '\0';

        printf("Número de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // limpa o buffer do teclado
    }

    printf("\n===== ESTADO ATUAL DO MAPA =====\n");
    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("\nTerritório %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].corExercito);
        printf("Número de tropas: %d\n", territorios[i].tropas);
    }

    printf("\n===== FIM DO CADASTRO =====\n");
    return 0;
}
