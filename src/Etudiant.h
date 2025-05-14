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

#ifndef EtudiantMus_H
#define EtudiantMus_H

//Déclaration de la classe Etudiant
class EtudiantMusique : public Etudiant {
    int nbrInstruments;

public:
    void setMatricule(int);
    void setNbrInstrument(int);
    int getNbrInstruments();
};

#endif //EtudiantMusique