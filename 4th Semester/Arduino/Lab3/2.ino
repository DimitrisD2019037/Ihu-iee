/* ADC and serial

Συνδεσμολογία κυκλώματος:
Potensiometer_Terminal_1 => Gnd
Potensiometer_Wiper => A0
Potensiometer_Terminal_2 => Vcc

PIN_0 => Serial_RX
PIN_1 => Serial_TX
*/

#define pot_pin A0  //ονομάζουμε “pot_pin” το PIN_A0
//για αποθήκευση δεδομένων από τον ADC
int adc_value; //εύρος αριθμών 0~1023
float voltage;  //μεταβλητή για την αναλογική τάση 

//Η συνάρτηση setup() εμπεριέχει αρχικοποιήσεις
//Εκτελείται μόνο μία φορά κατά την τροφοδοσία του Arduino Uno
void setup() {
  Serial.begin(9600);
}

//Αυτή η συνάρτηση εκτελείται διαρκώς
void loop() {
  //διαβάζει την αναλογική τιμή και επιστρέφει αριθμό
  adc_value = analogRead(pot_pin);
  //υπολογισμός της αναλογικής τάσης από τον αριθμό του ADC
  voltage = float(adc_value)/1023*5;
  //τύπωση στην σειριακή
  Serial.print("ADC number: "); 
  Serial.println(adc_value);
  Serial.print("Voltage = ");
  Serial.print(voltage);
  Serial.println("V");
  //αναμονή για 5 δευτερόλεπτα
  delay(5000);
} 
