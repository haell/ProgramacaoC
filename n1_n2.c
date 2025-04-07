#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    // Solicita a idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    while ((getchar()) != '\n'); // Limpa o buffer

    // Solicita a matrícula
    printf("Digite sua matrícula: ");
    scanf("%d", &matricula);
    while ((getchar()) != '\n'); // Limpa o buffer

    // Solicita a altura
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    while ((getchar()) != '\n'); // Limpa o buffer

    // Solicita o nome completo
    printf("Digite seu nome completo (até 49 caracteres): ");
    fgets(nome, sizeof(nome), stdin);

    // Remove o '\n' do final, se presente
    size_t len = strlen(nome);
    if (len > 0 && nome[len - 1] == '\n') {
        nome[len - 1] = '\0';
    }

    // Exibe os dados
    printf("\nDados informados:\n");
    printf("Idade: %d\n", idade);
    printf("Matrícula: %d\n", matricula);
    printf("Altura: %.2f metros\n", altura);
    printf("Nome: %s\n", nome);

    return 0;
}
