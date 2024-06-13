int rojo1 = 5;
int verde1 = 6;
int amarillo1 = 7;

int rojo2 = 8;
int verde2 = 9;
int amarillo2 = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(rojo1,OUTPUT);
  pinMode(verde1,OUTPUT);
  pinMode(amarillo1,OUTPUT);
  pinMode(rojo2,OUTPUT);
  pinMode(verde2,OUTPUT);
  pinMode(amarillo2,OUTPUT);

}

void loop() {

  //Ciclo semaforo2

  digitalWrite(rojo1,HIGH);
  digitalWrite(amarillo1,LOW);
  digitalWrite(verde1,LOW);
  

  digitalWrite(rojo2,LOW);
  digitalWrite(amarillo2,LOW);
  digitalWrite(verde2,HIGH);
  delay(1500);

  digitalWrite(rojo1,HIGH);
  delay(1500);;


  //Parpadeo semaforo2
  digitalWrite(verde2,LOW);
  digitalWrite(amarillo2,LOW);
  delay(250);
  digitalWrite(amarillo2,HIGH);
  delay(250);
  digitalWrite(amarillo2,LOW);
  delay(250);
  digitalWrite(amarillo2,HIGH);
  delay(250);
  digitalWrite(amarillo2,LOW);
  delay(250);
  digitalWrite(amarillo2,HIGH);
  delay(250);

  //semaforo1
  digitalWrite(rojo1,LOW);
  digitalWrite(amarillo1,LOW);
  digitalWrite(verde1,HIGH);
  

  digitalWrite(rojo2,HIGH);
  digitalWrite(amarillo2,LOW);
  digitalWrite(verde2,LOW);
  delay(1500);

  digitalWrite(rojo2,HIGH);
  delay(1500);


  //Parpadeo semaforo1
  digitalWrite(verde1,LOW);
  digitalWrite(amarillo1,LOW);
  delay(250);
  digitalWrite(amarillo1,HIGH);
  delay(250);
  digitalWrite(amarillo1,LOW);
  delay(250);
  digitalWrite(amarillo1,HIGH);
  delay(250);
  digitalWrite(amarillo1,LOW);
  delay(250);
  digitalWrite(amarillo1,HIGH);
  delay(250);
}
