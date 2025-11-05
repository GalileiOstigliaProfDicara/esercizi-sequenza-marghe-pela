/*Esercizio 5 – Scambio di 3 variabili
Richiedi all’utente di inserire tre numeri interi e memorizzali in tre variabili chiamate a b c,
fai un programma che ne scambi il contenuto 
in modo che alla fine dell’esecuzione ogni variabile contenga quanto inizialmente presente nella variabile 
chiamata con la lettera precedente in ordine alfabetico,
ad esclusione della a che conterrà il contenuto di quanto inizialmente presente in c.*/

#include <stdio.h>
int main() {
    int a, b, c, sup;
    printf("inserisci tre numeri:");
    scanf("%d %d %d", &a, &b, &c);
    a= sup;
    a= c;
    c= b;
    b= sup;
    printf("il primo valore è diventato %d, il secondo %d e il terzo invece %d", a, b, c);
}