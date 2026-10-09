#include <stdio.h>

int main () {

    int zustand;
    int befehl;

    
    // Begrüßung
    printf("Willkommen beim Roboter-Simulator\n");
    printf("---------------------------------\n\n");
    printf("Bitte wähle eine Emotion aus: (Zahl zwischen 1 - 4)\n\n");
    
    //Auswahl der Start-Emotionen/ des Zustandes
    printf("1. Glücklich\n");
    printf("2. Traurig\n");
    printf("3. Müde\n");
    printf("4. Verwirrt\n");
    
    scanf("%d", &zustand);


    printf("Bitte wähle einen Befehl aus: (Zahl zwischen 1 - 3) \n\n");

    printf("1. Blinken\n");
    printf("2. Drehen\n");
    printf("3. Biep\n");

    scanf("%d", &befehl);

    switch (zustand) {
        case 1: 
            switch (befehl) {
                case 1: 
                    printf("Der Roboter blinkt glücklich\n");
                    break;
                case 2: 
                    printf("Der Roboter dreht sich glücklich \n");
                    break;
                case 3:
                    printf("Der Roboter piept glücklich \n");
                    break;
            }
            break;

        case 2:
            switch (befehl) {
                case 1:
                case 2:
                    printf("Der Roboter blinkt schwach \n");
                    break;
                case 3:
                    printf("Der Roboter piept leise \n");
                    break;
            }
            break;

        case 3: 
            switch (befehl) {
                case 1:
                case 2:
                case 3:
                    printf("Der Roboter schläft \n");
                    break;
            }
            break;

        case 4:
            switch (befehl) {
                case 1:
                case 2:
                case 3:
                    printf("Der Roboter fängt an sich zu drehen, piept einmal laut und blinkt dann wild wie eine Discokugel \n");
                    break;
            }
            break;

        default: 
            printf("Fehler\n");
            break;
    }

    return 0;
}