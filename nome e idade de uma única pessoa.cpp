


String nome;



int idade;
void setup() {
Serial.begin (9600);
  
  

        
  Serial.println ("Digite seu nome: ");
  while(Serial.available() ==0){}
  nome = Serial.readString();
 Serial.println("Nome bonito "+nome+ " quantos anos voce tem bebe?");
  while(Serial.available() ==0){}
  idade = Serial.parseInt();
  
 Serial.println ("serio "+nome+", "+idade+" anos e nem parece rsrs");      
        
        
        
}



void loop (){
//comandos de repetição 
}
