
#include TD_GitHub.h
//Fonctions réalisées par l'étudiant 1 :


bool estMajeur(int age) {
    if (age >= 18 || age < 0) {
        return true;
    } else {
        return false;
    }
}

double exposant(double nombre, int exposant) {
    double resultat = 1.0;
    for (int i = 0; i < exposant; ++i) {
        resultat *= nombre;
    }
    return resultat;
}

double TVA(double prix) {
    if (prix >= 1000) {
        return prix * 1.196; // Appliquer une TVA à 19.6%
    } else {
        return prix * 1.055; // Appliquer une TVA à 5.5%
    }
}

int plusGrand(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}










//Fonctions réalisées par l'étudiant 2 :

bool estPair(int nb)
{
	if (nb % 2 == 0) || (nb % 7 == 0){
		return true;
	}
	else{
		return false;
	}
}

int sommeNombre(int nb);
{
    int somme = 0;
    for (int i = n; i >= 1; i--) {
        somme += i;
    }
    return somme;
}

float salaireNet(int salaire) 
{
    float charges = salaire * 0.23f;

    float salaireNet = salaire - charges;

    float prime = salaireNet * 0.12f;

    salaireNet += prime;

    return salaireNet;
}

int plusPetit(int a, int b, int c) {
    int plusPetit = a;

    if (b < plusPetit) {
        plusPetit = b;
    }

    if (c < plusPetit) {
        plusPetit = c;
    }

    return plusPetit;
}







//Fonctions réalisées par l'étudiant 3 :

#include <stdbool.h>

bool estImpair(int nb) {
    return nb % 2 != 0;
}

float moyenne(int nb1, int nb2, int nb3) {
    return (nb1 + nb2 + nb3) / 3.0;
}

float reduction(int prix, int reduc) {
    return prix * (1 - reduc / 100.0);
}

int nombreMedian(int a, int b, int c) {
    if ((a - b) * (c - a) >= 0) return a;
    else if ((b - a) * (c - b) >= 0) return b;
    else return c;
}
