/* Switches and RGB LED

Συνδεσμολογία κυκλώματος:
PIN_3 => Αντίσταση 220Ω =>  Κόκκινο pin από το RGB LED
PIN_5 => Αντίσταση 220Ω =>  Μπλε pin από το RGB LED
PIN_6 => Αντίσταση 220Ω =>  Πράσινο pin από το RGB LED
PIN_8 => Pull down Αντίσταση (220Ω) => switch_1 (Vcc)
PIN_9 => Pull down Αντίσταση (220Ω) => switch_4 (Vcc)
*/

#define R_pin 3         //ονομάζουμε “R_pin” το PIN_3
#define G_pin 6         //ονομάζουμε “G_pin” το PIN_6
#define B_pin 5          //ονομάζουμε “B_pin” το PIN_5
#define Sw1_pin 8     //ονομάζουμε “Sw1_pin” το PIN_8
#define Sw4_pin 9     //ονομάζουμε “Sw4_pin” το PIN_9

//Η συνάρτηση setup() εμπεριέχει αρχικοποιήσεις
//Εκτελείται μόνο μία φορά κατά την τροφοδοσία του Arduino Uno
 void setup()
{
  //Ρυθμίζεται το pin 3, pin 5, pin 6 ως output (έξοδος)
  //Ρυθμίζεται το pin 8, pin 9 ως input (είσοδος)
  pinMode(R_pin, OUTPUT);
  pinMode(G_pin, OUTPUT);
  pinMode(B_pin, OUTPUT);
  pinMode(Sw1_pin, INPUT);
  pinMode(Sw4_pin, INPUT);
}

//Αυτή η συνάρτηση εκτελείται διαρκώς
void loop() {
  if(digitalRead(Sw1_pin)==0 && digitalRead(Sw4_pin)==0){
      //RGB LED = OFF
      analogWrite(R_pin, 0);     // 0% PWM στο pin 3
      analogWrite(G_pin, 0);     // 0% PWM στο pin 6
      analogWrite(B_pin, 0);     // 0% PWM στο pin 5
      delay(1000);                       // Αναμονή για 1 δευτερόλεπτο
  }
  else if(digitalRead(Sw1_pin)==0 && digitalRead(Sw4_pin)==1){
      //κόκκινο χρώμα RGB = > R=255, G=0, B=0
      analogWrite(R_pin, 255); // 100% PWM στο pin 3
      analogWrite(G_pin, 0);  // 0% PWM στο pin 6
      analogWrite(B_pin, 0);     // 0% PWM στο pin 5
      delay(1000);                       // Αναμονή για 1 δευτερόλεπτο
  }
  else if(digitalRead(Sw1_pin)==1 && digitalRead(Sw4_pin)==0){
      //πράσινο χρώμα RGB = > R=0, G=255, B=0
      analogWrite(R_pin, 0);     // 0% PWM στο pin 3
      analogWrite(G_pin, 255);                          // 100% PWM στο pin 6
      analogWrite(B_pin, 0);     // 0% PWM στο pin 5
      delay(1000);                       // Αναμονή για 1 δευτερόλεπτο
  }
  else{ //if(digitalRead(Sw1_pin)==1 && digitalRead(Sw4_pin)==1)
      //μπλε χρώμα = > RGB=0,0,255
      analogWrite(R_pin, 0);     // 0% PWM στο pin 3
      analogWrite(G_pin, 0);     // 0% PWM στο pin 6
      analogWrite(B_pin, 255); // 100% PWM στο pin 5
      delay(1000);                       // Αναμονή για 1 δευτερόλεπτο
  }
}
