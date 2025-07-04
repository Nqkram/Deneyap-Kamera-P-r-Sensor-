#include <deneyapkartkamera.h> // Deneyap Kamera modülü için gerekli kütüphane

#define PIR_PIN 2  // PIR Hareket Sensörü D2 pinine bağlandı

bool hareketVarMi = false; // PIR sensörü hareket algılarsa true olur
bool cisimVarMi = false;   // Kamera bir cisim algılarsa true olur

void setup() {
  Serial.begin(9600);       // Seri haberleşme başlatıldı
  pinMode(PIR_PIN, INPUT);  // PIR pini giriş olarak ayarlandı

  if (!DeneyapCamera.begin()) {  // Kamera başlatılamazsa hata mesajı ver
    Serial.println("Kamera başlatılamadı"); 
    while (1); // Sürekli döngüye gir, çünkü kamera çalışmıyor
  }
}

void loop() {
  hareketVarMi = digitalRead(PIR_PIN); // PIR sensöründen okuma yapılır

  if (DeneyapCamera.detectObject()) {  // Kamera cisim algılarsa
    cisimVarMi = true;
  } else {
    cisimVarMi = false;
  }

  if (cisimVarMi) {
    if (hareketVarMi) {
      Serial.println("Canlı biri var ve hareket ediyor."); // Cisim var + hareket var
    } else {
      Serial.println("Canlı var ama hareket etmiyor.");    // Cisim var + hareket yok
    }
  } else {
    Serial.println("Canlı göremedim.");  // Kamera hiçbir şey algılamadı
  }

  delay(1000); // 1 saniye bekle
}
