#include"public.h"

void setup() {
  // put your setup code here, to run once:
  Initialize();
}
void loop() {
  // put your main code here, to run repeatedly:
  Run();
  Serial.println(Get_Angle());
  delay(5);
}



