#include <stdio.h>

int main () {

    int jahr = 2026;

    printf("Gib eine Jahreszahl ein: ");

    scanf("%d", &jahr);

    if (jahr % 400 == 0) {
        printf("%d", jahr);
        printf(" ist ein Schaltjahr \n" );
    }
        else if (jahr % 4 == 0 && jahr % 100 !=0) {
            printf("%d", jahr);
            printf(" ist ein Schaltjahr \n ");
        }
            else {
                printf("%d", jahr);
                printf(" ist kein Schaltjahr \n ");
            }
return 0;
}