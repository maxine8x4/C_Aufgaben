#include <stdio.h>

int main () {

    int ersteZahl = 1;
    int zweiteZahl = 2;
    int dritteZahl = 3;
    int max;

    printf("Bitte drei Zahlen eingeben (Beispiel: 1 2 3) :");
    
    scanf("%d %d %d", &ersteZahl, &zweiteZahl, &dritteZahl);

    max = ersteZahl;
    if (zweiteZahl >= max)
        max = zweiteZahl;
    if (dritteZahl >= max)
        max = dritteZahl;
    if (ersteZahl == zweiteZahl && ersteZahl == dritteZahl)
        printf("Alle Zahlen sind gleich");
    else
        printf("Die größte Zahl ist: %d\n", max);
    return (0);
}