int vermelho = 7;
int amarelo = 6;
int verde = 5;
int azul = 4;
int laranja = 3;
int branco = 2;

String opcao = '';

void setup(){
    //iniciar o monitor serial.
Serial.begin(9600);
Serial.println("inicializando...");
//vai definir todods como OUTPUT, quando
//passae por i
for(int i=2; i<=7; i++){
     pinMode(i, OUTPUT);
String valor = "Definindo pino:";
Serial.println(valor + i);
delay(2000);
}
Serial.println("Sistema pronto!");



}
void loop(){
    if(Serial.available() > 1){
    //criar uma mensagem para interação do usuário
Serial.println("Presssione 1 para ligar");
Serial.println("Pressione 2 para desligar");

if(Serial.avalable() > 0){
    opcao = Serial.readString();

    Serial.println(opcao);

 if(opcao != "D" || opcao !="C"){
    return "Opção Idesejada"
 }
else if(opcao == "D" || opcao )
    }
}
}



void controla(String sentido){
    if(sentido == "c")
    for(int i=2; i<=7; i++){
        digitalWrite(i, 1);
        delay(500);
        digitalWrite(i, 0);
    }  
}
else if