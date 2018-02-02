const int PinDyn = 10; // Номер порта Динамика (Зумера)
const byte COUNT_NOTES = 11; // Количество нот

//Ноты
int notkes[COUNT_NOTES] = {
  350, 400, 450, 350, 400, 450, 400, 350, 400, 450, 500
};

//Длительность нот
int waiters[COUNT_NOTES] = {
  300,300,1000,300,300,1000,250,250,250,250,600
};

void setup() {
  //
 }

void loop() {

  for (int i = 0; i < COUNT_NOTES; i++) { // Цикл от 0 до количества нот
    tone(PinDyn, notkes[i]); // Включаем звук, определенной частоты
    delay(waiters[i]);  // Пауза для заданой ноты
    noTone(PinDyn); // Останавливаем звук
  }
}
