int botonA = A0;
int botonB = A1;
int botonC = A2;
int botonD = A3;

int ledA = 8;
int ledB = 2;
int ledC = 3;
int ledD = 4;
int ledE = 5;
int ledF = 6;
int ledG = 7;



void setup() {
  // put your setup code here, to run once:
inicializacion();
}

void loop() {
  // put your main code here, to run repeatedly:
  int estadoA = digitalRead(botonA);
  int estadoB = digitalRead(botonB);
  int estadoC = digitalRead(botonC);
  int estadoD = digitalRead(botonD);

  metodo(estadoA,estadoB,estadoC,estadoD);

}

void metodo(int A,int B,int C,int D){
  // cero
if(A == LOW && B == LOW && C == LOW && D == LOW){
  digitalWrite(ledA,HIGH);
  digitalWrite(ledB,HIGH);
  digitalWrite(ledC,HIGH);
  digitalWrite(ledD,HIGH);
  digitalWrite(ledE,HIGH);
  digitalWrite(ledF,HIGH);
  digitalWrite(ledG,LOW);
}
 // uno
else if(A == LOW && B == LOW && C == LOW && D == HIGH){
  digitalWrite(ledA,LOW);
  digitalWrite(ledB,HIGH);
  digitalWrite(ledC,HIGH);
  digitalWrite(ledD,LOW);
  digitalWrite(ledE,LOW);
  digitalWrite(ledF,LOW);
  digitalWrite(ledG,LOW);
}
// dos
else if(A == LOW && B == LOW && C == HIGH && D == LOW){
  digitalWrite(ledA,HIGH);
  digitalWrite(ledB,HIGH);
  digitalWrite(ledC,LOW);
  digitalWrite(ledD,HIGH);
  digitalWrite(ledE,HIGH);
  digitalWrite(ledF,LOW);
  digitalWrite(ledG,HIGH);
}
// tres
else if(A == LOW && B == LOW && C == HIGH && D == HIGH){
  digitalWrite(ledA,HIGH);
  digitalWrite(ledB,HIGH);
  digitalWrite(ledC,HIGH);
  digitalWrite(ledD,HIGH);
  digitalWrite(ledE,LOW);
  digitalWrite(ledF,LOW);
  digitalWrite(ledG,HIGH);
}
// cuatro
else if(A == LOW && B == HIGH && C == LOW && D == LOW){
  digitalWrite(ledA,LOW);
  digitalWrite(ledB,HIGH);
  digitalWrite(ledC,HIGH);
  digitalWrite(ledD,LOW);
  digitalWrite(ledE,LOW);
  digitalWrite(ledF,HIGH);
  digitalWrite(ledG,HIGH);
}
// cinco
else if(A == LOW && B == HIGH && C == LOW && D == HIGH){
  digitalWrite(ledA,HIGH);
  digitalWrite(ledB,LOW);
  digitalWrite(ledC,HIGH);
  digitalWrite(ledD,HIGH);
  digitalWrite(ledE,LOW);
  digitalWrite(ledF,HIGH);
  digitalWrite(ledG,HIGH);
}
// seis
else if(A == LOW && B == HIGH && C == HIGH && D == LOW){
  digitalWrite(ledA,HIGH);
  digitalWrite(ledB,LOW);
  digitalWrite(ledC,HIGH);
  digitalWrite(ledD,HIGH);
  digitalWrite(ledE,HIGH);
  digitalWrite(ledF,HIGH);
  digitalWrite(ledG,HIGH);
}
// siete
else if(A == LOW && B == HIGH && C == HIGH && D == HIGH){
  digitalWrite(ledA,HIGH);
  digitalWrite(ledB,HIGH);
  digitalWrite(ledC,HIGH);
  digitalWrite(ledD,LOW);
  digitalWrite(ledE,LOW);
  digitalWrite(ledF,LOW);
  digitalWrite(ledG,HIGH);
}
// ocho
else if(A == HIGH && B == LOW && C == LOW && D == LOW){
  digitalWrite(ledA,HIGH);
  digitalWrite(ledB,HIGH);
  digitalWrite(ledC,HIGH);
  digitalWrite(ledD,HIGH);
  digitalWrite(ledE,HIGH);
  digitalWrite(ledF,HIGH);
  digitalWrite(ledG,HIGH);
}
// nueve
else if(A == HIGH && B == LOW && C == LOW && D == HIGH){
  digitalWrite(ledA,HIGH);
  digitalWrite(ledB,HIGH);
  digitalWrite(ledC,HIGH);
  digitalWrite(ledD,HIGH);
  digitalWrite(ledE,LOW);
  digitalWrite(ledF,HIGH);
  digitalWrite(ledG,HIGH);
}
// diez
else if(A == HIGH && B == LOW && C == HIGH && D == LOW){
  digitalWrite(ledA,HIGH);
  digitalWrite(ledB,HIGH);
  digitalWrite(ledC,HIGH);
  digitalWrite(ledD,LOW);
  digitalWrite(ledE,HIGH);
  digitalWrite(ledF,HIGH);
  digitalWrite(ledG,HIGH);
}
// once
else if(A == HIGH && B == LOW && C == HIGH && D == HIGH){
  digitalWrite(ledA,LOW);
  digitalWrite(ledB,LOW);
  digitalWrite(ledC,HIGH);
  digitalWrite(ledD,HIGH);
  digitalWrite(ledE,HIGH);
  digitalWrite(ledF,HIGH);
  digitalWrite(ledG,HIGH);
}
// doce
else if(A == HIGH && B == HIGH && C == LOW && D == LOW){
  digitalWrite(ledA,HIGH);
  digitalWrite(ledB,LOW);
  digitalWrite(ledC,LOW);
  digitalWrite(ledD,HIGH);
  digitalWrite(ledE,HIGH);
  digitalWrite(ledF,HIGH);
  digitalWrite(ledG,LOW);
}
//trece
else if(A == HIGH && B == HIGH && C == LOW && D == HIGH){
  digitalWrite(ledA,LOW);
  digitalWrite(ledB,HIGH);
  digitalWrite(ledC,HIGH);
  digitalWrite(ledD,HIGH);
  digitalWrite(ledE,HIGH);
  digitalWrite(ledF,LOW);
  digitalWrite(ledG,HIGH);
}
//catorce
else if(A == HIGH && B == HIGH && C == HIGH && D == LOW){
  digitalWrite(ledA,HIGH);
  digitalWrite(ledB,LOW);
  digitalWrite(ledC,LOW);
  digitalWrite(ledD,HIGH);
  digitalWrite(ledE,HIGH);
  digitalWrite(ledF,HIGH);
  digitalWrite(ledG,HIGH);
}
// quince
else if(A == HIGH && B == HIGH && C == HIGH && D == HIGH){
  digitalWrite(ledA,HIGH);
  digitalWrite(ledB,LOW);
  digitalWrite(ledC,LOW);
  digitalWrite(ledD,LOW);
  digitalWrite(ledE,HIGH);
  digitalWrite(ledF,HIGH);
  digitalWrite(ledG,HIGH);
}
delay(200);
} 


void inicializacion(){
//Entrada de botones
  pinMode(botonA,INPUT);
  pinMode(botonB,INPUT);
  pinMode(botonC,INPUT);
  pinMode(botonD,INPUT);
//Salidas a led
  pinMode(ledA,OUTPUT);
  pinMode(ledB,OUTPUT);
  pinMode(ledC,OUTPUT);
  pinMode(ledD,OUTPUT);
  pinMode(ledE,OUTPUT);
  pinMode(ledF,OUTPUT);
  pinMode(ledG,OUTPUT);
 Serial.begin(9600);

}

