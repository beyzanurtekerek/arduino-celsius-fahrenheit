int sensorPin=0;
int click=13;
int status=0;  

void setup()
{
  Serial.begin(9600);  
}

void loop()
{
 int deger=analogRead(sensorPin);
 float voltaj=deger * 5;
 voltaj= voltaj/1024.0;  
 
 float isi=(voltaj-0.5)*100;   
 float fDonustur=(isi*1.8)+32;    
 status=digitalRead(click);  
 if (status==HIGH){  
 Serial.print(fDonustur);
 Serial.println("  F");
 }
 else if (status==LOW){   
 Serial.print(isi);
 Serial.println("  C");
  }  
  
  delay(1000);
}
