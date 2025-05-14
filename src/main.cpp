/*
 * Nom de fichier 
 *      main.cpp
 * 
 * Sommaire
 *      Fichier de départ pour le projet ActiviteHeritageV2
 * 
 * Auteur 
 *      Maxime Champagne
 * 
 * Date de création
 *      7 mai 2025
 * 
 * Modification faites par
 *      Adriana Giselle Bardales Lazo
 */

#include <Arduino.h>
#include <iostream>
#include "Etudiant.h"

//********************************************************************************
// Déclaration des fonctions
//********************************************************************************
void testEtudiant(void);
void testEtudiantMusique(void);
void testEtudiantTGE(void);
void testEtudiantAdmin(void);
void testEtudiantArtLettre(void);

//********************************************************************************
// Déclarations des variables globales
//********************************************************************************



//********************************************************************************
// fonction setup (est appelée une sule fois au lancement du programme)
//********************************************************************************
void setup() {
  Serial.begin(9600);             // Démarrer le port série par défaut à 9600bauds
  printf("Hello world !\n\n");

  pinMode(LED_BUILTIN, OUTPUT);   // DEL embarqué configuré en sortie
  
  testEtudiant();
  testEtudiantTGE();
  testEtudiantAdmin();
  testEtuddiantMusique();
  testEtudiantArtLettre();
}


//********************************************************************************
// Loop (est appelé en boucle pour l'exécution du programme)
//********************************************************************************
void loop() {
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));   //Changer état de la DEL
  delay(1000);                                            //Attendre une seconde
}


//********************************************************************************
// fonction testEtudiant permet de créer un étudiant et de valider le 
// fonctionnement de la classe Etudiant.
//********************************************************************************
void testEtudiant(void) {
  int numeroMatriculeTmp;
  int moyenneTmp;

  Etudiant owen;
  owen.setMatricule(2288053);
  owen.setMoyenne(99);

  numeroMatriculeTmp = owen.getMatricule();
  moyenneTmp = owen.getMoyenne(); 
  printf("Owen, matricule # %d, moyenne %d\n", numeroMatriculeTmp, moyenneTmp);

}

//********************************************************************************
// fonction testMusique permet de créer un étudiant et de valider le 
// fonctionnement de la classe EtudiantMusique.
//********************************************************************************
void testEtudiantMusique(void) {
  int nbMatricule;
  int moyenneTmp;
  int instrumento;

  EtudiantMusique Pedro;
  Pedro.setMatricule(3456200);
  Pedro.setNbrInstrument(39);
  Pedro.setMoyenne(87);

  moyenneTmp = Pedro.getMoyenne(); 
  instrumento = Pedro.getNbrInstruments();
  nbMatricule = Pedro.getMatricule();
  printf("Pedro Pascal, matricule # %d\n, numero d'instruments pretes: %d\n, moyenne %d\n", nbMatricule, instrumento, moyenneTmp);
}

//********************************************************************************
// fonction testEtudiant permet de créer un étudiant et de valider le 
// fonctionnement de la classe Etudiant.
//********************************************************************************
void testEtudiantTGE(void) {
  int numeroMatriculeTmp;
  bool maitriseOscilloTmp;
  int moyenneTmp;

  EtudiantTGE NSLAY;
  NSLAY.setMatricule(2288053);
  NSLAY.setMaitriseOscillo(1);
  NSLAY.setMoyenne(85);

  numeroMatriculeTmp = NSLAY.getMatricule();
  moyenneTmp = NSLAY.getMoyenne(); 
  maitriseOscilloTmp =  NSLAY.getMaitriseOscillo();
  printf("Owenslay, matricule # %d, moyenne %d, maitrise de l'oscilloscope (1 = oui 0= non)\n", numeroMatriculeTmp, moyenneTmp);

}

void testEtudiantAdmin(void) {
  int numeroMatriculeTmp;
  int moyenneTmp;
  float coutSession;

  EtudiantAdmin Ben;
  Ben.setMatricule(5288053);
  Ben.setMoyenne(69);
  Ben.setCoutSession1(465.67);

  coutSession = Ben.getCoutSession1();
  numeroMatriculeTmp = Ben.getMatricule();
  moyenneTmp = Ben.getMoyenne(); 
  printf("Ben, matricule # %d, moyenne %d, cout session: %.2f\n", numeroMatriculeTmp, moyenneTmp, coutSession);

}

void testEtudiantArtLettre(void) {
  int numeroMatriculeTmp;
  int moyenneTmp;
  int NbrLivresLus;

  EtudiantArtLettre Mathieu;
  Mathieu.setMatricule(1234567);
  Mathieu.setMatricule(4384384);
  Mathieu.setMoyenne(34);
  
  Mathieu.setNbrLivresLus(4);
  NbrLivresLus = Mathieu.getNbrLivresLus();
  numeroMatriculeTmp = Mathieu.getMatricule();
  moyenneTmp = Mathieu.getMoyenne();
  printf("Mathieu, matricule # %d, moyenne %d, nombre livres lus: %d\n", numeroMatriculeTmp, moyenneTmp, NbrLivresLus);
}
