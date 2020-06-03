//int botones[6]; 
//crear una matriz para 6 variables de tipo entero
//int botones[0]=2; 
//dar a la primera variable de la matriz el valor de 2

int notas []={196,262,330,392};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int ValorTeclaPulsada= analogRead(A0);
  Serial.println(ValorTeclaPulsada);
  if (ValorTeclaPulsada==1023){
    tone(8,notas[0]);  
  }
  else if (ValorTeclaPulsada >=990 && ValorTeclaPulsada <=1010){
    tone(8,notas[1]);
  }
   else if (ValorTeclaPulsada >=505 && ValorTeclaPulsada <=520){
    tone(8,notas[2]);
  }
   else if (ValorTeclaPulsada >=5 && ValorTeclaPulsada <=10){
    tone(8,notas[3]);
  }
  else{
    noTone(8);
  }
}
