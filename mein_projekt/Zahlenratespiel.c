#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int geheimeZahl = 9;
    int eingabeZahl;

    printf("Bitte eine Zahl eingeben:");
    if (scanf("%d", &eingabeZahl) !=1) {
        printf("Ungültige Eingabe");
        return EXIT_FAILURE;
    }
    if (eingabeZahl == geheimeZahl) {
        printf("richtig\n");
    } else if (eingabeZahl > geheimeZahl) {
        printf("die zahl ist zu groß\n");
    } else if (eingabeZahl < geheimeZahl) {
        printf("die zahl ist zu klein");
    }
    return  EXIT_SUCCESS;
}