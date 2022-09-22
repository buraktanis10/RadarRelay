

int pirPin = A0; //Sensörü takacağımız pin
bool deger;


void setup() {
  
  pinMode(pirPin, INPUT); //Sensör pinimizi giriş olarak ayarlyoruz.
  Serial.begin(9600);

}

void loop() {
  deger = digitalRead(pirPin); //Sensörden okuma yapıyoruz.
  Serial.println(deger);  
  delay(100);   
    
}
