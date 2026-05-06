
String nome1;
String nome2;
int idade1;
int idade2;

void setup(){
  Serial.begin(9600) ;
 
  Serial.println("Digite o primeiro nome: ");
  while (Serial.available() == 0){}
  nome1 = Serial.readString();
  Serial.println("Digite a idade de:" + nome1);
  while(Serial.available() == 0) {}
  idade1 = Serial.parseInt() ;
   
  Serial.println("Digite o segundo nome: ");
  while (Serial.available() == 0){}
  nome2 = Serial.readString();
  Serial.println("Digite a idade de:" + nome2);
  while (Serial.available() == 0){}
  idade2 = Serial.parseInt() ;
  
  
  if (idade1 > idade2){
    Serial.println (nome1+" e mais velho");
  }
  else if (idade1 < idade2){
     Serial.println(nome2+" e mais velho");
  
 
}
}
void loop()
{
}
