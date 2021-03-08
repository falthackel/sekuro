#include <stdio.h>

float integral(float A)
{
    return(0,5*A*(A+1));
}

int main() {
    double A;
    printf("Angka 1: ");
    scanf("%lf", &A); 

    double B;
    printf("Angka 2: ");
    scanf("&lf", &B);

    char operator;
    scanf("Operator: %c", &operator);

    int i;

    double result = 0;

    switch (operator)
    {
    case '+':       // Jika input operator '+'
        printf("%.1lf", A+B);
        break;
    case '-':       // Jika input operator '-'
        printf("%.1lf", A-B);
        break;
    case '*':       // Jika input operator '*'
        printf("%.1lf", A*B);
        break;
    case '/':       // Jika input operator '/'
        printf("%.1lf", A/B);
        break;
    case '^':
        for (i = 1; i <= B; ++i)
        {
            result += (1*A);
        }
        printf("%.1lf", result);
    case 'integral':
        for (i = 1; i <= B; ++i)
        {
            result += integral(A);
            A += 1;
        }
        printf("%.1lf", result);
    default:
        printf("Error");
        break;
    }
    return 0;
}
