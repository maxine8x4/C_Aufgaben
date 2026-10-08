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

    if (befehl == 1) {
        printf("Der Roboter blinkt ");
    }
    else if (befehl == 2) {
        printf("Der Roboter dreht sich ");
    }
    else if (befehl == 3) {
        printf("Der Roboter piept ");
    }

    if (zustand == 1) {
        printf("glücklich!\n");
    }
    else if(zustand == 2) {
        printf ("traurig..\n");
    }
    else if (zustand == 3) {
        printf("müde\n");
    }
    else if (zustand == 4) {
        printf ("verwirrt\n");
    }
   


    return 0;
}