#include <stdio.h>

int main () {
    
    int geheimeZahl = 9;
    int eingabeZahl = 9;

    printf("Bitte eine Zahl eingeben:");
    scanf("%d", &eingabeZahl);

    if (eingabeZahl == geheimeZahl) {
        printf("richtig");
    }
        else if (eingabeZahl > geheimeZahl) {
            printf("die zahl ist zu groß");
        }
            else if (eingabeZahl < geheimeZahl) {
                printf("die zahl ist zu klein");
            }
                    else {
                        printf("fehler");
                    }
    
    return 0
}