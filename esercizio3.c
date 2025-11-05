//Esercizio 3 – Parallelepipedo Fatto inserire all’utente le dimensioni di un parallelepipedo 
//scrivere un programma che ne calcoli e restituisca all’utente il volume e l’area delle superfici.

#include <stdio.h>

int main() {
    int base, altezza, area, perimetro;

    printf("inserisci le dimensioni del parallelepipedo: ");

    scanf("%d %d", &base, &altezza);
    
    area = base * altezza;
    perimetro = 2 * (base + altezza);

    printf("L'area del rettangolo è %d e il perimetro è %d", area, perimetro);
}

    