const int capteurHumidite = A0;
const int lumiere = 13;
const int MAX = 720;
const int WINDOW = 5000;

void setup() {
  pinMode(lumiere, OUTPUT);
  Serial.begin(9600);
}

void calcPct(int val, int& onT, int& offT){
  
  if(val>300)
  {
    onT = 0;
    offT = WINDOW;
    return;
  }

  float pct = (float)val / 300.0;

  offT = (int)(WINDOW * pct);
  onT = WINDOW - offT;
}

void afficheHumidite(int lum, int val){

  int timeOff, timeOn;
  
  calcPct(val, timeOn, timeOff);
 
  digitalWrite(lum, HIGH);
  delay(timeOn);
  digitalWrite(lum, LOW);
  delay(timeOff);
  
  Serial.print(val);
  Serial.print(" ");  
  Serial.print(timeOn);
  Serial.print(" ");
  Serial.println(timeOff);
}

void loop() {
  int humidite = analogRead(capteurHumidite);

  afficheHumidite(lumiere, humidite);

  Serial.println(humidite);
}
