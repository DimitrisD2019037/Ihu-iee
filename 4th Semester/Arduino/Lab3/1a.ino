/* Blinking a LED and print to Serial

Συνδεσμολογία κυκλώματος:
PIN_2 => LED_Anode - LED_Cathode = > Αντίσταση 220Ω => Gnd

PIN_0 => Serial_RX
PIN_1 => Serial_TX
*/

//Η συνάρτηση setup() εμπεριέχει αρχικοποιήσεις
//Εκτελείται μόνο μία φορά κατά την τροφοδοσία του Arduino Uno
void setup()
{
  //Ρυθμίζεται το PIN_2 ως έξοδος
  pinMode(2, OUTPUT);
  //άνοιγμα της σειριακής και αρχικοποίηση στα 9600 bps
  Serial.begin(9600);
}

//Αυτή η συνάρτηση εκτελείται διαρκώς
void loop()
{
  digitalWrite(2, HIGH); //Γράψε HIGH (5V) στο pin 2
  Serial.println("LED is ON");//αποστολή δεδομένων «LED is ON»
  delay(5000); // Αναμονή 5 δευτερολέπτων
  digitalWrite(2, LOW); //Γράψε LOW (0V) στο  pin 2
  Serial.println("LED is OFF");//αποστολή δεδομένων «LED is OFF»  
  delay(5000); // Αναμονή 5 δευτερολέπτων
}
