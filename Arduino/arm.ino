#include <AccelStepper.h>
#include <Servo.h>

AccelStepper motor1(AccelStepper::DRIVER, 2, 3);
AccelStepper motor2(AccelStepper::DRIVER, 4, 5);
AccelStepper motor3(AccelStepper::DRIVER, 6, 7);
AccelStepper motor4(AccelStepper::DRIVER, 8, 9);
AccelStepper motor5(AccelStepper::DRIVER, 10, 11);
AccelStepper motor6(AccelStepper::DRIVER, 12, 13);

Servo gripper;

void setup() {
  for (int i = 1; i <= 6; i++) {
    AccelStepper* m = getMotor(i);
    m->setMaxSpeed(1000);
    m->setAcceleration(500);
  }

  gripper.attach(44);
  gripper.write(0);

  moveToPosition(1000, 800, 500, 400, 200, 0);
  waitUntilMotorsReach();

  gripper.write(90);
  delay(1000);

  moveToPosition(500, 300, 600, 300, 150, 0);
  waitUntilMotorsReach();

  gripper.write(0);
  delay(1000);

  moveToPosition(0, 0, 0, 0, 0, 0);
  waitUntilMotorsReach();
}

void loop() {}

void moveToPosition(long m1, long m2, long m3, long m4, long m5, long m6) {
  motor1.moveTo(m1);
  motor2.moveTo(m2);
  motor3.moveTo(m3);
  motor4.moveTo(m4);
  motor5.moveTo(m5);
  motor6.moveTo(m6);
}

void waitUntilMotorsReach() {
  while (motor1.distanceToGo() != 0 ||
         motor2.distanceToGo() != 0 ||
         motor3.distanceToGo() != 0 ||
         motor4.distanceToGo() != 0 ||
         motor5.distanceToGo() != 0 ||
         motor6.distanceToGo() != 0) {
    motor1.run();
    motor2.run();
    motor3.run();
    motor4.run();
    motor5.run();
    motor6.run();
  }
}

AccelStepper* getMotor(int index) {
  switch (index) {
    case 1: return &motor1;
    case 2: return &motor2;
    case 3: return &motor3;
    case 4: return &motor4;
    case 5: return &motor5;
    case 6: return &motor6;
    default: return nullptr;
  }
}
