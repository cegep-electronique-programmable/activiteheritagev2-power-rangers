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

//Déclaration de la classe Etudiant
class EtudiantTGE:public Etudiant {
    bool maitriseOscillo;
  
public:
    void setMatricule(int);
    void setMaitriseOscillo(bool);
    bool getMaitriseOscillo();
};

//Déclaration de la classe EtudiantAdmin
class EtudiantAdmin : public Etudiant { 
protected:
  float coutSession1;

public:
  void setMatricule(int);
  void setCoutSession1(float);
  float getCoutSession1(void);     
};

#ifndef ETUDIANT_ART_LETTRE_H
#define ETUDIANT_ART_LETTRE_H

class EtudiantArtLettre : public Etudiant {
private:
    int nbrLivresLus;
public:
    void setMatricule(int);
    void setNbrLivresLus(int);
    int getNbrLivresLus();
};

#endif //ETUDIANT_ART_LETTRE_H
