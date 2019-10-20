#define PIN    9
#define N_LEDS 30 // 5 meter reel @ 30 LEDs/m
 
Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);
 
int n;
void setup(){
  strip.begin();
  pinMode(A1, INPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin (9600);
}
void loop(){
  Serial.println(analogRead(A1));
  n = analogRead(A1);
  if(n>980){
    digitalWrite(5,1);
    digitalWrite(4, 0);
    digitalWrite(3, 0);
    digitalWrite(2, 0);
    digitalWrite(6, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
  }
  if(n < 980 && n>800){
    digitalWrite(4, 1);
    digitalWrite(5, 0);
    digitalWrite(3, 0);
    digitalWrite(2, 0);
    digitalWrite(6, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
  }
  if(n<800 && n>700){
    digitalWrite(5, 0);
    digitalWrite(4, 0);
    digitalWrite(3, 1);
    digitalWrite(2, 0);
  }
  if (n<700 && n>500){
    digitalWrite(5, 0);
    digitalWrite(4, 0);
    digitalWrite(3, 0);
    digitalWrite(8, 1);
    delay(200);
    digitalWrite(8,0);
    digitalWrite(9, 1);
    delay(200);
    digitalWrite(9, 0);
    digitalWrite(10, 1);
    delay(200);
    digitalWrite(10, 0);
    digitalWrite(11, 1);
    delay(200);
    digitalWrite(11, 0);
  }
  if(n<500){
    digitalWrite(5, 0);
    digitalWrite(4, 0);
    digitalWrite(3, 0);
    digitalWrite(8, 1);
    digitalWrite(9, 1);
    digitalWrite(10, 1);
    digitalWrite(11, 1);
    digitalWrite(6, 300);
  }
  delay(500);
}
