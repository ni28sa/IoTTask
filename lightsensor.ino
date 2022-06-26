#include <M5Stack.h>   
const int Analog = 36;      //inisialisasi pin yang digunakan yakni pin 36   
const int Digtal = 2;       //inisialisasi pin yang digunakan yakni pin 2   
void setup() {  //fungsi 
// put your setup code here, to run once:   
M5.begin();     //menampilkan pada M5 
pinMode(Digtal, INPUT_PULLUP);  //digital sebagai input 
dacWrite(25, 0);  //untuk menampilkan pada LCD 
M5.Lcd.setCursor(100, 0, 4);  //membuat cursor 
M5.Lcd.print("LUMINOSITY");   //menampilkan kata "LUMINOSITY"   
}   
uint16_t a_data;   
uint16_t d_data;   
void loop() {  //fungsi perulangan 
// put your main code here, to run repeatedly:   
a_data = analogRead(Analog);  //membaca data analog 
d_data = digitalRead(Digtal);  //membaca data digital 
Serial.printf("Analog:%0d Digtal:%0d\n", a_data, d_data);  //menampilkan data 
M5.Lcd.setCursor(30, 120, 4);  //membuat cursor (enter dibawah) 
M5.Lcd.printf("Analog:%0d Digtal:%0d\n", a_data, d_data);   
delay(200);  //menampilkan data dengan delay 0.2 s 
}
