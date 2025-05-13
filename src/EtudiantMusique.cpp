/*
 * Nom de fichier 
 *      EtudiantMusique.cpp
 * 
 * Sommaire
 *      Fichier source pour la classe EtudiantMusique.
 * 
 * Auteur 
 *      Adriana Giselle Bardales Lazo
 *  
 */

#include "Etudiant.h"
#include "EtudiantMusique.h"

//Surcharge 1
void EtudiantMusique::setMatricule(int Matricule){
    //Le numero de matricule doit necessairement avoir 7 chiffres
    if ((Matricule >= 3000000) && (Matricule <= 3999999)){
        this->Matricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}