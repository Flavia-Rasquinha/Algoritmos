#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Nome: Flávia Beatriz Rasquinha de Oliveira\n");
    printf("Curso: Análise e Desenvolvimento de Sistemas\n");
    printf("Universidade: La Salle\n");
    printf("Matrícula: 201930508\n\n\n");
    int opcao;
    float num1, num2;
    //Laço para repetir as opçoes saindo somente com opção 0.
    do {
        //Leitura de campos para a operação
        printf("Selecione a operação.\n ");
        printf("\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Raiz Quadrada\n0 - Sair\n\n");
        scanf("%d", &opcao);
            
        // verificação de opção para dois digitos
        if(opcao > 0 && opcao < 5){
            printf("Digite dois valores: ");
            scanf("%f%f",&num1, &num2);
        }
        // verificação de opção para um digito
        if(opcao == 5){
            printf("Digite um valor: ");
            scanf("%f",&num1);
        }

        //switch com as possiveis opções
        switch(opcao) {
            //sai da calculadora
        case 0:
            printf("Saindo.\n");
            break;
        case 1:
            //realiza soma
            printf("Soma: %.2f\n", num1 + num2);
            break;
        case 2:
            //realiza substração
            printf("Subtracao: %.2f\n", num1 - num2);
            break;
        case 3:
            //realiza Multiplicação
            printf("Multiplicacao: %.2f\n", num1 * num2);
            break;
        case 4:
            //Valida se divisão e por 0 e da opção de enviar outro valor
            while(num2 == 0) {
                printf("Nao existe divisao por zero!\nDigite outro valor: ");
                scanf("%f", &num2);
            }
            //realiza divisão
            printf("Divisao: %.2f\n", num1 / num2);
            break;
        case 5:
            //realiza raiz quadrada
            printf("Valor da raiz quadrada %.2f \n", sqrt(num1));
            break;
        default:
            printf("Opcao inválida.\nDigite outra opcao: ");
        }
    } while(opcao != 0);
}