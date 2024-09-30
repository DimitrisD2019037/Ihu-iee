/* ON/OFF a LED by Serial communication

Συνδεσμολογία κυκλώματος:
PIN_2 => LED_Anode - LED_Cathode = > Αντίσταση 220Ω => Gnd
PIN_0 => Serial_RX
PIN_1 => Serial_TX
*/

String input; //για αποθήκευση δεδομένων από την σειριακή

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
  //έλεγχος για δεδομένα στην σειριακή
  if (Serial.available() > 0){
    //ανάγνωση και αποθήκευση δεδομένων
    input = Serial.readString();
    //έλεγχος δεδομένων
    if(input == "on"){//LED is on
      digitalWrite(2, HIGH); // Γράψε HIGH (5V) στο pin 2
    }
    else if(input=="off"){      //LED is off
      digitalWrite(2, LOW);  // Γράψε LOW (0V) στο  pin 2 
    }
   else{
     Serial.println("Wrong command");
    }
  }
}
