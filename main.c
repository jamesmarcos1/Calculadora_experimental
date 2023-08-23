#include <stdio.h>

    int main() {

        // + Soma, - Subtração, * multiplicação, / divisão, % o resto //

        // o resto so funciona com "int" //

        long long int n1, n2;
        long long int result;
        char operacao;

        printf ("Insira uma operacao: ex: - ou + ou /(Divisao) ou *(multiplicacao)  \n");
        scanf("%c", &operacao);

        printf("Insira dois numeros:\n");
        scanf("%lld", &n1);
        scanf("%lld", &n2);

        if(operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/' && operacao != '%') {
            printf("OPERACAO INVALIDA\n");
        }   else {
            if(operacao == '+'){
                result = n1 + n2;
            } else if (operacao == '-'){
            result = n1 - n2;
            } else if (operacao == '*'){
            result = n1 * n2;
            } else if (operacao == '/'){
            result = n1 / n2;
            } else if (operacao == '%'){
            result = n1 % n2;
        }
        printf("%lld\n", result);
        printf("Operacao: %c\n", operacao);

        }

        return 0;
    }