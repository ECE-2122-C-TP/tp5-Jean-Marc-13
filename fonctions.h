//
// Created by User on 06-10-21.
//

#ifndef UNTITLED4_FONCTIONS_H
#define UNTITLED4_FONCTIONS_H
#define LIGNE 3
#define COLONNE 4

typedef struct{int num, den;} NombreRationnel;
void affichageRationnel(NombreRationnel rationnel);
int initialiserMonTableau();
NombreRationnel multiplicationRationnel(NombreRationnel r1, NombreRationnel r2);
NombreRationnel saisieRationnel();
void remplirTableau(int tableau[], int taille);
void afficherTableau(int tableau[], int taille);
void testValeur(int tableau[], int taille);
void transfert(int tableau[LIGNE][COLONNE], int tableau1D[]);
void remplirTableau2D(int tableau[LIGNE][COLONNE]);
#endif //UNTITLED4_FONCTIONS_H

