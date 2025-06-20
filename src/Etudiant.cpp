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

//===========================================================================================================
//  Fonction Etudiant
//
//===========================================================================================================

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
//  Fonction Etudiant Musique
//
//===========================================================================================================

//Méthodes pour la classe EtudiantMusique
void EtudiantMusique :: setMatricule(int NouveauMatricule){
    //Le numero de matricule doit avoir 7 chiffres et commencer par 3
    if ((NouveauMatricule >= 3000000) && (NouveauMatricule <= 3999999)) {
        this->numeroMatricule = NouveauMatricule;
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


//===========================================================================================================
//  Fonction Etudiant TGE
//
//===========================================================================================================

//Définition de la méthode setMatricule de la classe, permet de modifier le matricule de l'étudiant
void EtudiantTGE::setMatricule(int nouveauMatricule){
    //Le numero de matricule doit necessairement avoir 7 chiffres
    if ((nouveauMatricule >= 2000000) && (nouveauMatricule <= 2999999)){
        this->numeroMatricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}

void EtudiantTGE::setMaitriseOscillo(bool maitrise){
    if ( maitrise <= 1){
        this-> maitriseOscillo = maitrise;
    }
    else{
     //   printf("La valeur n'est pas valide");
        this->maitriseOscillo = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}

bool EtudiantTGE::getMaitriseOscillo(void){
    return (this->maitriseOscillo);
}

//===========================================================================================================
//  Fonction Etudiant Art et Lettre
//
//===========================================================================================================

//Définition de la méthode setMatricule de la classe, permet de modifier le matricule de l'étudiant
void EtudiantArtLettre::setMatricule(int nouveauMatricule) {
    //Le numero de matricule doit necessairement avoir 7 chiffres
    if ((nouveauMatricule >= 4000000) && (nouveauMatricule <= 4999999)){
    this->numeroMatricule = nouveauMatricule;
    }
    else{
        this->numeroMatricule = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}

//Définition de la méthode setNbrLivresLus de la classe, permet de modifier le nombre de livres lus de l'étudiant
void EtudiantArtLettre::setNbrLivresLus(int nbrLivresLusTotal) {
    this->nbrLivresLus = nbrLivresLusTotal;
}

//Définition de la méthode getNbrLivresLus de la classe, permet de savoir le nombre de livres lus de l'étudiant
int EtudiantArtLettre::getNbrLivresLus() {
    return (this->nbrLivresLus);
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
