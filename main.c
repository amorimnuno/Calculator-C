#include "calculadora.h"

int main() {
    int opcao;

    // Inicia um loop que continua até escolher sair
    do {
        // Exibe o menu de opções
        Menu();

        // Lê a opção escolhida pelo usuário
        scanf("%d", &opcao);

        // Utiliza um switch para executar a função escolhida
        switch(opcao) {
            case 1: soma(); break;
            case 2: multiplicacao(); break;
            case 3: divisao(); break;
            case 4: subtracao(); break;
            case 5: potenciacao(); break;
            case 6: tabuada(); break;
            case 7: verificarPrimo(); break;
            case 8: verificarPar(); break;
            case 0: printf("Programa encerrado.\n"); break;
            default: printf("Opção inválida!\n");
        }

        // Se a opção não for 0 , aguarda ate pressionar Enter e limpa
        if (opcao != 0) {
            printf("Pressione Enter para continuar...");
            getchar();
            getchar();
            limparTela();
        }
    } while (opcao != 0);  // Continua o loop até que o usuário escolha sair (opção 0)

    return 0;
}