int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int i = 0;
int button = A0;

int randNumber = 0;
bool pressed = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  for (i = 2; i <=8; i++) {
    pinMode(i, INPUT);
  }
  randomSeed(analogRead(2));
}

void loop() {
  // put your main code here, to run repeatedly:
  if(analogRead(button)) {
    randNumber = random(1,7);
    pressed = true;
    delay(50);
  }
  if(pressed) {
  switch(randNumber) {
    case 0:
      clean();
      display_0();
      break; 
    case 1:
      clean();
      display_1();
      break; 
    case 2:
      clean();
      display_2();
      break; 
    case 3:
      clean();
      display_3();
      break; 
    case 4:
      clean();
      display_4();
      break; 
    case 5:
      clean();
      display_5();
      break; 
    case 6:
      clean();
      display_6();
      break; 
    case 7:
      clean();
      display_7();
      break; 
    case 8:
      clean();
      display_8();
      break; 
    case 9:
      clean();
      display_9();
      break;
    pressed = false;
  }
  }
  
}

void display_1(){
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}

void display_2() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(g, HIGH);
}

void display_3(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g, HIGH);
}

void display_4(){
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void display_5() {
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
}

void display_6() {
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
}

void display_7() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}

void display_8() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void display_9() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void display_0() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
}

void clean() {
  for (i = 2; i <=9; i++) {
    digitalWrite(i, LOW);
  }
}
