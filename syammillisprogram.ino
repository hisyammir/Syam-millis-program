//PROGRAM INI DIBUAT UNTUK MEMANFAATKAN MILLIS DALAM MENJALANKAN SUATU FUNGSI
//millis() MERUPAKAN FUNGSI UNTUK MERETURN JUMLAH MILLISECOND YANG TELAH BERLALU SAAT
//PROGRAM DIJALANKAN.
//BY : MUFADHIL HISYAMUL ILMI

//Variabel untuk inisiasi awal dalam melakukan millis.
//Terdapat 3 point
unsigned long int printTimepoint1, printTimepoint2, printTimepoint3;

//Variable untuk menetapkan waktu dalam pembacaan millis (dalam millisecond)
int timePoint;
int timePoint1 = 1000;
int timePoint2 = 2000;
int timePoint3 = 3000;

//Fungsi untuk melakukan pembacaan dalam millis()
void funPrintTimePoint1();
void funPrintTimePoint2();
void funPrintTimePoint3();

void setup() {
  Serial.begin(115200);
}

void loop() {
  funPrintTimePoint1();
  funPrintTimePoint2();
  funPrintTimePoint3();
}

void funPrintTimePoint1(){
  if(millis()-printTimepoint1>timePoint1) {
    printTimepoint1 = millis();
    Serial.println("Sample print 1");
    //Masukkan sebuah perintah disini
  }
}

void funPrintTimePoint2(){
  if(millis()-printTimepoint2>timePoint2) {
    printTimepoint2 = millis();
     Serial.println("Sample print 2");
     //Masukkan sebuah perintah disini
  }
}

void funPrintTimePoint3(){
  if(millis()-printTimepoint3>timePoint3) {
    printTimepoint3 = millis();
    Serial.println("Sample print 3");
    //Masukkan sebuah perintah disini
  }
}
