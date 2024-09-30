/* Push-button και LED

Συνδεσμολογία κυκλώματος:
PIN_0 => LED_Anode - LED_Cathode = > Αντίσταση 220Ω => Gnd
PIN_4 => Pull up αντίσταση (built in) => push-button (Gnd)
*/

#define led_pin 0    //ονομάζουμε “led_pin” το PIN_0
#define pb_pin 4    //ονομάζουμε “pb_pin” το PIN_4

//Η συνάρτηση setup() εμπεριέχει αρχικοποιήσεις
//Εκτελείται μόνο μία φορά κατά την τροφοδοσία του Arduino Uno
 void setup()
{
  //Ρυθμίζεται το PIN_0 ως output
  pinMode(led_pin, OUTPUT); 
  //Ρυθμίζεται το PIN_4 ως input με ενεργοποιημένη την pullup αντίσταση
  pinMode(pb_pin, INPUT_PULLUP);
}

//Αυτή η συνάρτηση εκτελείται διαρκώς
void loop() {
  //Το LED ακολουθεί την κατάσταση του push-button
  digitalWrite(led_pin, digitalRead(pb_pin));  
}
