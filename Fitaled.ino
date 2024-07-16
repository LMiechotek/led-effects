// Definição dos pinos
#define RED_PIN 10
#define GREEN_PIN 11
#define BLUE_PIN 12

void setup() {
  // Define os pinos como saídas
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  // Efeito degradê organizado no espectro RGB

  // Vermelho a Amarelo
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED_PIN, i);
    analogWrite(GREEN_PIN, i);
    analogWrite(BLUE_PIN, 0);
    delay(10);
  }

  // Amarelo a Verde
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED_PIN, 255 - i);
    analogWrite(GREEN_PIN, 255);
    analogWrite(BLUE_PIN, 0);
    delay(10);
  }

  // Verde a Ciano
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 255);
    analogWrite(BLUE_PIN, i);
    delay(10);
  }

  // Ciano a Azul
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 255 - i);
    analogWrite(BLUE_PIN, 255);
    delay(10);
  }

  // Azul a Magenta
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED_PIN, i);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 255);
    delay(10);
  }

  // Magenta a Vermelho
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED_PIN, 255);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 255 - i);
    delay(10);
  }
}
