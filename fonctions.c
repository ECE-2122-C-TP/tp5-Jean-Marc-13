//
// Created by User on 06-10-21.
//

#include "fonctions.h"
#include <stdio.h>
/*
int initialiserMonTableau() {
int i = 0;
int monTableau[NB_ELEM_MAX];
// On initialise toutes les cases du tableau à 0 afin de ne pas avoir de valeur indésirable :
for (i = 0; i < NB_ELEM_MAX; i++) {
monTableau[i]
}
return 0; */

/* IN : rationnel, un nombre rationnel
 *
 */
void affichageRationnel(NombreRationnel rationnel) {
    printf("ce rationnel est : %d/%d", rationnel.num , rationnel.den);
}

/* IN : ratio1, ratio2, 2 nombres rationnels
 * OUT : la multiplication de ratio1 et ratio2
*/

NombreRationnel multiplicationRationnel(NombreRationnel r1, NombreRationnel r2) {
    NombreRationnel resultat;
    resultat.num = r1.num * r2.num;
    resultat.den = r1.den * r2.den;
    return resultat;
}
NombreRationnel saisieRationnel() {
    NombreRationnel n;
    printf("Veuillez saisir un numérateur et un dénominateur : \n");
    scanf("%d%d", &n.num , &n.den);
    return n;
}

/* IN : R1 et R2, 2 nombres rationnels
 * OUT : l'addition de R1 et R2
*/

NombreRationnel additionRationnel(NombreRationnel R1, NombreRationnel R2) {
    NombreRationnel res;
    res.num = R1.num * R2.den + R1.den * R2.num;
    res.den = R1.den * R2.den;
    return res;
}


/* IN : taille
 * INOUT : tableau de taille valant taille
 */

void remplirTableau(int tableau[], int taille){
    int N = 0;
    for (int i = 0; i<taille; i++) {
        scanf("%d", &tableau[i]);
    }
}

/* IN : taille
 * INOUT : tableau
 */
void afficherTableau(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%5d", tableau[i]);
    }
    printf("\n")
}

/* IN : taille
 * INOUT : tableau
 */
void testValeur(int tableau[], int taille) {
    int valeur = 0;
    for (int i = 0; i<taille; i++) {
        if(tableau[i] > valeur) {
            valeur = tableau[i];
        }
    }
    printf("\n La plus grande valeur du tableau est : %d", valeur);
}

/* INOUT : un tableau 2D, un tableau 1D renvoyant toutes les valeurs du tableau 2D
 */
void transfert(int tableau[LIGNE][COLONNE], int tableau1D[]) {
    int k = 0;
    for(int i = 0; i < LIGNE; i++) {
        for(int j = 0; j < COLONNE; j++) {
            tableau1D[k] = tableau[i][j];
            k++;
            printf("%5d", tableau[i][j]);
        }
        printf("\n");
    }
}

/* INOUT : tableau 2D qui va être rempli à la fin
 *
 */

void remplirTableau2D(int tableau[LIGNE][COLONNE]) {
    for (int i = 0; i < LIGNE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            scanf("%d", &tableau[i][j]);
        }
    }
}
