#include <stdio.h>

int main () {
    
    int kontostand = 1000;
    int abhebungsbetrag = 1000;
    int tageslimit = 500;

    printf("Welchen Betrag wollen Sie abheben?");
    scanf("%d", &abhebungsbetrag);

    if (abhebungsbetrag > 0 && abhebungsbetrag <= kontostand && abhebungsbetrag <= tageslimit ) {
        printf ("Abbuchung erfolgreich");
    }
        else {
            printf ("Abhebung nicht möglich");
        }

    return 0;
}