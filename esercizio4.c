//Esercizio 4- Caramelle
//Dato un numero di caramelle da dividere per un certo numero di amici, 
// che ne devono ricevere tutti lo stesso numero, dire quante caramelle verranno date a testa e quante ne rimangono non distribuite.

#include <stdio.h>

int main(){
    int caramelle, amici, caramelle_a_persona;

    printf ("inserisci il numero di caramelle e il numero di amici");
    scanf("%d %d", &caramelle, &amici);
    
    caramelle_a_persona= caramelle/amici;

    printf("le caramelle per ogni amico sono %d", caramelle_a_persona);
}

    