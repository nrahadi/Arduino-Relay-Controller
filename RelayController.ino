int inputUserA = 0;
int inputUserB = 0;
int inputUserC = 0;
int inputUserD = 0;
int inputSensA = 0;
int inputSensB = 0;
int inputSensC = 0;
int inputSensD = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  inputUserA = digitalRead(2);
  inputUserB = digitalRead(3);
  inputUserC = digitalRead(4);
  inputUserD = digitalRead(5);
  inputSensA = digitalRead(10);
  inputSensB = digitalRead(11);
  inputSensC = digitalRead(12);
  inputSensD = digitalRead(13);
  
  if(inputUserA == HIGH || inputSensA == HIGH){
    digitalWrite(6, HIGH);
  }else if(inputUserA == LOW || inputSensA == LOW){
    digitalWrite(6, LOW);
  }
  
  if(inputUserB == HIGH || inputSensB == HIGH){
    digitalWrite(7, HIGH);
  }else if(inputUserB == LOW || inputSensB == LOW){
    digitalWrite(7, LOW);
  }
  
  if(inputUserC == HIGH || inputSensC == HIGH){
    digitalWrite(8, HIGH);
  }else if(inputUserC == LOW || inputSensC == LOW){
    digitalWrite(8, LOW);
  }
  
  if(inputUserD == HIGH || inputSensD == HIGH){
    digitalWrite(9, HIGH);
  }else if(inputUserD == LOW || inputSensD == LOW){
    digitalWrite(9, LOW);
  }
}
