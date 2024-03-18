
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
	
	if (nb % 0 && nb / 7)
		return true;
	else
		return false
}










//Fonctions réalisées par l'étudiant 3 :
