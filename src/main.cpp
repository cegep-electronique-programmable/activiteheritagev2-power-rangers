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
void testMusique(void);


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
}


//********************************************************************************
// Loop (est appelé en boucle pour l'exécution du programme)
//********************************************************************************
void loop() {

  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));   //Changer état de la DEL
  testMusique();
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
void testMusique(void) {
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
