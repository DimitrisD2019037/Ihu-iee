/* Buzzer

Συνδεσμολογία κυκλώματος:
PIN_4 => Buzzer_Positive - Buzzer_Negative = > Αντίσταση 100Ω => Gnd
*/

//Η συνάρτηση setup() εμπεριέχει αρχικοποιήσεις
//Εκτελείται μόνο μία φορά κατά την τροφοδοσία του Arduino Uno
void setup()
{
  //Ρυθμίζεται το pin 4 ως output (έξοδος)
  pinMode(4, OUTPUT);
}

//Αυτή η συνάρτηση εκτελείται διαρκώς
void loop()
{
  digitalWrite(4, HIGH); // Γράφει HIGH (5V) στο pin 4 – Buzzer ON
  delay(2500); // Σταματάει το πρόγραμμα για 2500 χιλιοστά του δευτερολέπτου
  digitalWrite(4, LOW); // Γράφει LOW (0V) στο pin 4 – Buzzer OFF
  delay(2500); // Σταματάει το πρόγραμμα για 2500 χιλιοστά του δευτερολέπτου
}
