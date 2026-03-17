#define ligne_0 9
#define ligne_1 8
#define ligne_2 7
#define ligne_3 6

#define colonne_0 5
#define colonne_1 4
#define colonne_2 3
#define colonne_3 2

void setup() {
  // put your setup code here, to run once:
  // Initialise le port série
  // On configure les lignes en sorties
  pinMode(ligne_0, OUTPUT);
  pinMode(ligne_1, OUTPUT);
  pinMode(ligne_2, OUTPUT);
  pinMode(ligne_3, OUTPUT);

  // On configure les colonnes en entrées avec pull-up
  pinMode(colonne_0, INPUT_PULLUP);
  pinMode(colonne_1, INPUT_PULLUP);
  pinMode(colonne_2, INPUT_PULLUP);
  pinMode(colonne_3, INPUT_PULLUP);  
}

void loop() {
  

}


unsigned char touche_clavier(){
  unsigned char caractere;
  // put your main code here, to run repeatedly:
  int etat_colonne_0 = HIGH;
  int etat_colonne_1 = HIGH;
  int etat_colonne_2 = HIGH;
  int etat_colonne_3 = HIGH;

  // On met la ligne 0 à 0V et les autres au 5V
  digitalWrite(ligne_0, LOW);
  digitalWrite(ligne_1, HIGH);
  digitalWrite(ligne_2, HIGH);
  digitalWrite(ligne_3, HIGH);

  // On recupère l'état des colonnes
  etat_colonne_0 = digitalRead(colonne_0);
  etat_colonne_1 = digitalRead(colonne_1);
  etat_colonne_2 = digitalRead(colonne_2);
  etat_colonne_3 = digitalRead(colonne_3);

  // Si on a la colonne 0 à LOW, c'est que le bouton 1 est pressé
  if(etat_colonne_0 == LOW)
    caractere=1;
  // Si on a la colonne 1 à LOW, c'est que le bouton 2 est pressé
  if(etat_colonne_1 == LOW) 
    caractere=2;   
    // Si on a la colonne 2 à LOW, c'est que le bouton 3 est pressé
  if(etat_colonne_2 == LOW)
    caractere=3;    
    // Si on a la colonne 3 à LOW, c'est que le bouton A est pressé
  if(etat_colonne_3 == LOW)
    caractere='A';    
  // On met la ligne 1 à 0V et les autres au 5V
  digitalWrite(ligne_0, HIGH);
  digitalWrite(ligne_1, LOW);
  digitalWrite(ligne_2, HIGH);
  digitalWrite(ligne_3, HIGH);
  // On recupère l'état des colonnes
  etat_colonne_0 = digitalRead(colonne_0);
  etat_colonne_1 = digitalRead(colonne_1);
  etat_colonne_2 = digitalRead(colonne_2);
  etat_colonne_3 = digitalRead(colonne_3);
  // Si on a la colonne 0 à LOW, c'est que le bouton 4 est pressé
  if(etat_colonne_0 == LOW)
    caractere=4;
  // Si on a la colonne 1 à LOW, c'est que le bouton 5 est pressé
  if(etat_colonne_1 == LOW)
    caractere=5;    
    // Si on a la colonne 2 à LOW, c'est que le bouton 6 est pressé
  if(etat_colonne_2 == LOW) 
    caractere=6;   
    // Si on a la colonne 3 à LOW, c'est que le bouton B est pressé
  if(etat_colonne_3 == LOW) 
    caractere='B';    
  // On met la ligne 2 à 0V et les autres au 5V
  digitalWrite(ligne_0, HIGH);
  digitalWrite(ligne_1, HIGH);
  digitalWrite(ligne_2, LOW);
  digitalWrite(ligne_3, HIGH);
  // On recupère l'état des colonnes
  etat_colonne_0 = digitalRead(colonne_0);
  etat_colonne_1 = digitalRead(colonne_1);
  etat_colonne_2 = digitalRead(colonne_2);
  etat_colonne_3 = digitalRead(colonne_3);
  // Si on a la colonne 0 à LOW, c'est que le bouton 7 est pressé
  if(etat_colonne_0 == LOW) 
    caractere=7;
  // Si on a la colonne 1 à LOW, c'est que le bouton 8 est pressé
  if(etat_colonne_1 == LOW) 
    caractere=8;   
    // Si on a la colonne 2 à LOW, c'est que le bouton 9 est pressé
  if(etat_colonne_2 == LOW) 
    caractere=9;    
    // Si on a la colonne 3 à LOW, c'est que le bouton C est pressé
  if(etat_colonne_3 == LOW) 
    caractere='C';    
  // On met la ligne 3 à 0V et les autres au 5V
  digitalWrite(ligne_0, HIGH);
  digitalWrite(ligne_1, HIGH);
  digitalWrite(ligne_2, HIGH);
  digitalWrite(ligne_3, LOW);
  // On recupère l'état des colonnes
  etat_colonne_0 = digitalRead(colonne_0);
  etat_colonne_1 = digitalRead(colonne_1);
  etat_colonne_2 = digitalRead(colonne_2);
  etat_colonne_3 = digitalRead(colonne_3);
  // Si on a la colonne 0 à LOW, c'est que le bouton * est pressé
  if(etat_colonne_0 == LOW)
    caractere='*';
  // Si on a la colonne 1 à LOW, c'est que le bouton 0 est pressé
  if(etat_colonne_1 == LOW) 
    caractere=0;   
    // Si on a la colonne 2 à LOW, c'est que le bouton # est pressé
  if(etat_colonne_2 == LOW) 
    caractere='#';    
    // Si on a la colonne 3 à LOW, c'est que le bouton D est pressé
  if(etat_colonne_3 == LOW)
    caractere='D';  
  return caractere;  
  }
