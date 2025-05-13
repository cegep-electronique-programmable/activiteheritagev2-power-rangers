/*
 * Nom de fichier 
 *      Etudiant.cpp
 * 
 * Sommaire
 *      Fichier source pour la classe Etudiant.
 * 
 * Auteur 
 *      Maxime Champagne
 *  
 */

#include "Etudiant.h"

//Définition de la méthode setMatricule de la classe, permet de modifier le matricule de l'étudiant
void Etudiant::setMatricule(int nouveauMatricule){
    //Le numero de matricule doit necessairement avoir 7 chiffres
    if ((nouveauMatricule >= 1000000) && (nouveauMatricule <= 9999999)){
        this->numeroMatricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}



int Etudiant::getMatricule(void){
    return (this->numeroMatricule);
}

void Etudiant::setMoyenne(int nouvelleMoyenne){
    if (nouvelleMoyenne <= 100){
        this->moyenne = nouvelleMoyenne;
    }
    else{
        this->moyenne = 100;
    }
}

int Etudiant::getMoyenne(void){
    return (this->moyenne);
}

//===========================================================================================================
//  Fonction Etudiant Admin
//
//===========================================================================================================

//Définition de la méthode setMatricule de la classe EtudiantAdmin qui doit commencer par un 5
void EtudiantAdmin :: setMatricule(int nouveauMatricule){
    //Le numero de matricule doit necessairement avoir 7 chiffres
    if ((nouveauMatricule >= 5000000) && (nouveauMatricule <= 5999999)) {
        this->numeroMatricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}

//Définition de la méthode setCoutSession1 de la classe EtudiantAdmin permet de déterminer le cout de la session
void EtudiantAdmin :: setCoutSession1(float coutSession){
    coutSession1 = coutSession;
}

//Définition de la méthode getCoutSession1 de la classe EtudiantAdmin permet de trouver la cout de la session
float EtudiantAdmin :: getCoutSession1(void){
    return (this -> coutSession1);
}
//===========================================================================================================