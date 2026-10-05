#include <stdio.h>

int main() {
    
    int A = 0;
    int B = 0;

    printf("A\tB\tAND\tOR\tXOR\t!A\t!B\n"); // Ueberschrift


    // Berechnung erste Zeile
    printf("%d\t", A);
    printf("%d\t", B);
    printf("%d\t", A && B);
    printf("%d\t", A || B);
    printf("%d\t", !A && B || A && !B);
    printf("%d\t", !A);
    printf("%d\n", !B);

   
    // Berechnung zweite Zeile
    
    B = 1;

    printf("%d\t", A);
    printf("%d\t", B);
    printf("%d\t", A && B);
    printf("%d\t", A || B);
    printf("%d\t", !A && B || A && !B);
    printf("%d\t", !A);
    printf("%d\n", !B);

    A = 1;
    B = 0;

    printf("%d\t", A);
    printf("%d\t", B);
    printf("%d\t", A && B);
    printf("%d\t", A || B);
    printf("%d\t", !A && B || A && !B);
    printf("%d\t", !A);
    printf("%d\n", !B);

    A = 1;
    B = 1;

    printf("%d\t", A);
    printf("%d\t", B);
    printf("%d\t", A && B);
    printf("%d\t", A || B);
    printf("%d\t", !A && B || A && !B);
    printf("%d\t", !A);
    printf("%d\n", !B);

    return 0;
}