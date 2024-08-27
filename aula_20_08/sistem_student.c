#include <stdio.h>
#include <string.h>

#define MAX_ESTUDANTES 5
#define MAX_NOME 50
#define NUM_NOTAS 3


// Definição da struct Student
typedef struct {
    char nome[MAX_NOME];
    int idade;
    int notas[NUM_NOTAS];
} estudante;

// Função para ler os dados dos estudantes
void lerDados(estudante estudantes[], int n) {
    for (int i = 0; i < n; i++){
        printf("Estudante %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]s", estudantes[i].nome);

        printf("Idade: ");
        scanf("%d", &estudantes[i].idade);

        printf("Notas (separadas por espaço): ")
        for (int j = 0; j < NUM_NOTAS; j++) {
            scanf("%d", &estudantes[i].notas[j]);
        }
    }
}

// Função para calcular a média das notas de um estudante

float calcularMedia(int notas[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += notas[i];
    }
    return (float)soma / n;
}

// Função para encontrar o estudante com a maior média
void encontrarMaiorMedia(estudante estudantes[], int n) {
    int indiceMaiorMedia = 0;
    float maiorMedia = calcularMedia(estudantes[0].notas, NUM_NOTAS);

    for (int i = 1; i < n; i++) {
        float mediaAtual = calcularMedia(estudantes[i].notas, NUM_NOTAS);
        if (mediaAtual > maiorMedia) {
            maiorMedia = mediaAtual;
            indiceMaiorMedia = i;
        }
    }
    printf("\nEstudante com a maior média: %s (%.2f)\n", estudantes[indiceMaiorMedia].nome, maiorMedia);
}

int main() {
    estudante estudantes[MAX_ESTUDANTES];

    // Ler os dados dos estudantes
    lerDados(estudantes, MAX_ESTUDANTES);

    // Calcular e exibir a média de cada estudante
    for (int i = 0; i < MAX_ESTUDANTES; i++) {
        float media = calcularMedia(estudantes[i].notas, NUM_NOTAS);
        printf("\nMédia de %s: %.2f", estudantes[i].nome, media);
    }

    // Encontrar e exibir o estudante com a maior média
    encontrarMaiorMedia(estudantes, MAX_ESTUDANTES);

    return 0;
}