#include <stdio.h>

float i(float A)
{
    return(0,5*A*(A+1));
}

int main() {
    double A;
    printf("Angka 1: ");
    scanf("%lf", &A); 

    double B;
    printf("Angka 2: ");
    scanf("%lf", &B);

    char operator;
    scanf("Operator: %c", &operator);

    int j;

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
        for (j = 1; j <= B; ++j)
        {
            result += (1*A);
        }
        printf("%.1lf", result);
        break;
    case 'i':
        for (j = 1; j <= B; ++j)
        {
            result += i(A);
            A += 1;
        }
        printf("%.1lf", result);
        break;
    default:
        printf("Error");
        break;
    }
    return 0;
}
