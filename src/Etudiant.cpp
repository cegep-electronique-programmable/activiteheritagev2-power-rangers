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


//Méthodes pour la classe EtudiantMusique
void EtudiantMusique :: setMatricule(int NouveauMatricule){
    //Le numero de matricule doit avoir 7 chiffres et commencer par 3
    if ((NouveauMatricule >= 3000000) && (NouveauMatricule <= 3999999)) {
        this->numeroMatricule = NouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}

//Méthode setNbrInstrument pour obtenir nombre d'instruments
void EtudiantMusique :: setNbrInstrument(int nb_Instruments){
    this-> nbrInstruments = nb_Instruments;
}

//Méthode getNbrInstrument pour obtenir nombre d'instruments
int EtudiantMusique :: getNbrInstruments(){
    return (this-> nbrInstruments);
}

