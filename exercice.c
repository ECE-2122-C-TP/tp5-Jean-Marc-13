//
// Created by User on 06-10-21.
//
#include <stdio.h>
#include "exercice.h"
#include "fonctions.h"


void exo1() {
    NombreRationnel ratio1 = saisieRationnel();
    NombreRationnel ratio2 = saisieRationnel();
    affichageRationnel(multiplicationRationnel(ratio1,ratio2));
}

void exo2() {
    int N = 0;
    printf("Veuillez saisir le nombre d'entiers a inserer dans le tableau (100 au maximum) :\n");
    scanf("%d",&N);
    if(N>100) {
        printf("Veuillez reessayer, vous avez saisi un trop grand nombre de valeurs.");
        return;
    }
    int tableau[N];
    printf("Veuillez saisir un a un la valeur de chaque entier :\n");
    remplirTableau(tableau, N);
    afficherTableau(tableau, N);
    testValeur(tableau, N);
}


void exo3() {
    int tableau1[LIGNE*COLONNE];
    int tableau2[LIGNE][COLONNE];
    remplirTableau2D(tableau2);
    transfert(tableau2, tableau1);
    afficherTableau(tableau1, LIGNE*COLONNE);
}

