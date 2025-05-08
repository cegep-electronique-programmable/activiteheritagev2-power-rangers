/*
 * Nom de fichier 
 *      Etudiant.h
 * 
 * Sommaire
 *      Fichier header pour la classe Etudiant.h
 * 
 * Auteur 
 *      Maxime Champagne
 *  
 */

#ifndef ETUDIANT_H
#define ETUDIANT_H

//Déclaration de la classe Etudiant
class Etudiant {
protected:
    int numeroMatricule;
    int moyenne;
	
public:
    void setMatricule(int);
    int getMatricule();
    void setMoyenne(int);
    int getMoyenne();
};

#endif //ETUDIANT_H

#ifndef ETUDIANT_ART_LETTRE_H
#define ETUDIANT_ART_LETTRE_H

class EtudiantArtLettre : Etudiant {
private:
    int nbrLivresLus;
public:
    void setMatricule(int);
    void setNbrLivresLus(int);
    int getNbrLivresLus();
};

#endif //ETUDIANT_ART_LETTRE_H