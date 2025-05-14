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
    int numeroMatricule;
    int moyenne;
	
public:
    void setMatricule(int);
    int getMatricule();
    void setMoyenne(int);
    int getMoyenne();
};

class EtudiantTGE: public Etudiant {
    bool matriseOscillo ;
   
public:
    void setMatricule(int);
    void MaintriseOscillo(bool);
    bool getMatriseOscillo();
    
};

#endif //ETUDIANT_H