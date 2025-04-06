const int pinSensorIzq = 11;
const int pinSensorCen = 12;
const int pinSensorDer = 10;
const int motorIzq = 3;
const int motorDer = 5;

// Ajuste de velocidades
int rapido = 220, muyRapido = 235, medioAlto = 210, medio = 200, lento = 140, muyLento = 90, stop = 0;

int s_i = 0, s_c = 0, s_d = 0;
int s_i_p = 0, s_c_p = 0, s_d_p = 0;

void setup() {
  pinMode(pinSensorIzq, INPUT);
  pinMode(pinSensorCen, INPUT);
  pinMode(pinSensorDer, INPUT);
  pinMode(motorIzq, OUTPUT);
  pinMode(motorDer, OUTPUT);
}

void loop() {
  // Leer sensores actuales
  s_i = digitalRead(pinSensorIzq);
  s_c = digitalRead(pinSensorCen);
  s_d = digitalRead(pinSensorDer);

  int classLabel = 10; // Por defecto: detenerse

  // === CASOS NORMALES DE DETECCIÓN DE LÍNEA ===
  if (s_i == 1 && s_c == 0 && s_d == 0) {
    classLabel = 8; // Solo izquierda ? giro izquierda
  } else if (s_i == 0 && s_c == 0 && s_d == 1) {
    classLabel = 6; // Solo derecha ? giro derecha
  } else if (s_i == 0 && s_c == 1 && s_d == 0) {
    classLabel = 1; // Solo centro ? avanzar recto
  } else if (s_i == 1 && s_c == 1 && s_d == 0) {
    classLabel = 4; // Centro + izquierda ? leve izquierda
  } else if (s_i == 0 && s_c == 1 && s_d == 1) {
    classLabel = 5; // Centro + derecha ? leve derecha
  } 
  
  // === CASO: LÍNEA PERDIDA ===
  else if (s_i == 0 && s_c == 0 && s_d == 0) {
    if (s_i_p == 1 && s_c_p == 0 && s_d_p == 0) {
      classLabel = 8; // Última dirección fue izquierda
    } else if (s_i_p == 0 && s_c_p == 0 && s_d_p == 1) {
      classLabel = 6; // Última dirección fue derecha
    } else {
      classLabel = 10; // Sin información clara ? detenerse
    }
  }

  // === CONTROL DE MOTORES ===
  switch (classLabel) {
    case 1: // Avanzar recto
      analogWrite(motorIzq, muyRapido);
      analogWrite(motorDer, muyRapido);
      break;
    case 4: // Leve izquierda
      analogWrite(motorIzq, medio);
      analogWrite(motorDer, muyRapido);
      break;
    case 5: // Leve derecha
      analogWrite(motorIzq, muyRapido);
      analogWrite(motorDer, medio);
      break;
    case 6: // Giro derecha
      analogWrite(motorIzq, muyRapido);
      analogWrite(motorDer, muyLento);
      break;
    case 8: // Giro izquierda
      analogWrite(motorIzq, muyLento);
      analogWrite(motorDer, muyRapido);
      break;
    case 10: // Detenerse (sin dirección clara)
    default:
      analogWrite(motorIzq, stop);
      analogWrite(motorDer, stop);
      break;
  }

  // Guardar última lectura
  s_i_p = s_i;
  s_c_p = s_c;
  s_d_p = s_d;

  delay(20); // Tiempo de respuesta óptimo
}
