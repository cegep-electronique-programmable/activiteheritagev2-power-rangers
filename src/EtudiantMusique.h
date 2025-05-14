/*
 * Nom de fichier 
 *      Etudiant.h
 * 
 * Sommaire
 *      Fichier header pour la classe Etudiant.h
 * 
 * Auteur 
 *      Maxime Champagne
 */

#ifndef ETUDIANT_MUSIQUE_H
#define ETUDIANT_MUSIQUE_H

//Déclaration de la classe Etudiant
class Etudiant {
    int numeroMatricule;
    int moyenne;
	
public:
    void setMatricule(int);
    int getMatricule();
    void setMoyenne(int);
    int getMoyenne();
};

#endif //ETUDIANT_H

#ifndef EtudiantMus_H
#define EtudiantMus_H

//Déclaration de la classe Etudiant
class EtudiantMusique : Etudiant {
private:
    int nbrInstruments;
public:
    void setMatricule(int);
    void setNbrInstrument(int);
    int getNbrInstruments();
};

#endif //EtudiantMusique