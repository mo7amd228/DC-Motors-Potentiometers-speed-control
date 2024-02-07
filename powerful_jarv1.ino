// C++ code
//

 int M1 = 11; 
 int M2 = 5; 
 int Sw1 = 13; 
 int Sw2 = 3; 
 int Rol1 = A0; 
 int Rol2 = A1; 
 int Sw1State = 0;
 int Sw2State = 0; 
 int Rol1Value = 0; 
 int Rol2Value = 0; 

void setup() 
{

  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(Sw1, INPUT);
  pinMode(Sw2, INPUT);
  pinMode(Rol1, INPUT);
  pinMode(Rol2, INPUT);
}

void loop() 
{

  Sw2State = digitalRead(Sw2);  
  Rol2Value = analogRead(Rol2);
  Rol2Value = map(Rol2Value, 0, 1023, 0, 255);

  if (Sw1State == 1)
  {
    analogWrite(M1, Rol1Value);
  }
  else
  {
    digitalWrite(M1, 0);
  }
  
Sw1State = digitalRead(Sw1); 
Rol1Value = analogRead(Rol1);  
Rol1Value = map(Rol1Value, 0, 1023, 0, 255);
  
  
  if (Sw2State == 1) 
  {
    analogWrite(M2, Rol2Value);
  }
  else 
  {
    digitalWrite(M2, LOW);
  }
}
