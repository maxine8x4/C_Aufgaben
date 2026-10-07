#include <stdio.h>

int main () {

    int ersteZahl = 1;
    int zweiteZahl = 2;
    int dritteZahl = 3;

    printf("Bitte drei Zahlen eingeben (Beispiel: 1 2 3) :");
    
    scanf("%d %d %d", &ersteZahl, &zweiteZahl, &dritteZahl);

    if (ersteZahl > zweiteZahl && ersteZahl > dritteZahl) {
        printf("Die größte Zahl ist: ");
        printf ("%d\n", ersteZahl);
    }
        if (zweiteZahl > ersteZahl && zweiteZahl > dritteZahl) {
            printf("Die größte Zahl ist: ");
            printf ("%d\n", zweiteZahl);
        }
            if (dritteZahl > ersteZahl && dritteZahl > zweiteZahl) {
                printf("Die größte Zahl ist: ");
                printf ("%d\n", dritteZahl);
            }
return 0;

}