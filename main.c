#include <stdio.h>

int main(void) {
    int giorno1, mese1, anno1;
    int giorno2, mese2, anno2;


    printf("Inserire la prima data (giorno mese anno):\n");
    scanf("%d %d %d", &giorno1, &mese1, &anno1);


    printf("Inserire la seconda data (giorno mese anno):\n");
    scanf("%d %d %d", &giorno2, &mese2, &anno2);


    if (anno1 > anno2) {
        printf("La data piu recente e' la prima.\n");
    } else if (anno2 > anno1) {
        printf("La data piu recente e' la seconda.\n");
    } else {

        if (mese1 > mese2) {
            printf("La data piu recente e' la prima.\n");
        } else if (mese2 > mese1) {
            printf("La data piu recente e' la seconda.\n");
        } else {

            if (giorno1 > giorno2) {
                printf("La data piu recente e' la prima.\n");
            } else if (giorno2 > giorno1) {
                printf("La data piu recente e' la seconda.\n");
            } else {

                printf("Le due date sono uguali.\n");
            }
        }
    }

    return 0;
}
