#include "Motor.h"
#include <iostream>
int main() {
  MotorVehicle motor1{"BMW", "5cc", 2010, "Red", 1000};
  motor1.setColor("Blue");
  motor1.setEngineCapacity(400);

  motor1.displayCarDetails();
}