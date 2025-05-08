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

//Déclaration de la classe EtudiantAdmin
class EtudiantAdmin : public Etudiant { 
    protected:
      float coutSession;
  
    public:
      void setMatricule(int);
      void setCoutSession(float);
      float getCoutSession(void);
      
    };

#endif //ETUDIANT_H