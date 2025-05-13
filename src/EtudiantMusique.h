/*
 * Nom de fichier 
 *      Etudiant.h
 * 
 * Sommaire
 *      Fichier header pour la classe EtudiantMusique.h
 * 
 * Auteur 
 *      driana Giselle Bardales Lazo
 */


#include "Etudiant.h"
#ifndef EtudiantMusique_H
#define EtudiantMusique_H

class EtudiantMusique : public Etudiant {
protected:
    int nbrInstruments;

public:
    void setMatricule(int );
    void setNbrInstrument(int );
    int getNbrInstruments();
}

#endif //ETUDIANT_H