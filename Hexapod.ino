//const char checkPosition1[] = "{#004P0600T0300!#007P0600T0300!#016P0600T0300!}";
//const char initialPosition1[] = "{#003P1500T0300!#004P1050T0300!#005P0650T0300!#006P0775T0300!#007P1125T0300!#008P1500T0300!#015P1500T0300!#016P1050T0300!#017P0650T0300!}";

//const char checkPosition2[] = "{#001P0600T0300!#010P0600T0300!#013P0600T0300!}";
//const char initialPosition2[] = "{#000P0650T0300!#001P1050T0300!#002P1500T0300!#009P1500T0300!#010P1125T0300!#011P0775T0300!#012P0650T0300!#013P1050T0300!#014P1500T0300!}";

const char initialPosition[] = "{#003P1500T0300!#004P1050T0300!#005P0650T0300!#006P0775T0300!#007P1125T0300!#008P1500T0300!#015P1500T0300!#016P1050T0300!#017P0650T0300!#000P0650T0300!#001P1050T0300!#002P1500T0300!#009P1500T0300!#010P1125T0300!#011P0775T0300!#012P0650T0300!#013P1050T0300!#014P1500T0300!}";

//String joystickStatus;
//String button;
//int Joystick[4];
//char text;
//bool flag;
//bool continual = false;

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);
  Serial2.begin(115200);
}

void loop() {
//  joystickStatus = "";
//  flag == false;
//  while (Serial.read() >= 0);
//  while (Serial1.available()) {
//    text = char(Serial1.read());
//    if (text == '#') {
//      flag = true;
//      continue;
//    }
//    if (flag == true) {
//      if (text == '!') {
//        break;
//      }
//      joystickStatus += text;
//    }
//    delay(1);
//  }
//  if (19 >= joystickStatus.length() || joystickStatus.length() >= 26) {
//    joystickStatus = "";
//  }
//  if (joystickStatus != "") {
//    Serial.println(joystickStatus);
//    int i = -1;
//    String temp;
//    for (int j = 3; j < joystickStatus.length(); j++) {
//      text = joystickStatus.charAt(j);
//      if (text != ' ') {
//        temp += text;
//      } else {
//        if (i == -1) {
//          button = temp;
//        } else {
//          Joystick[i] = temp.toInt();
//        }
//        i++;
//        temp = "";
//      }
//    }
//  }
//    Serial.println(button);
//    Serial.println(Joystick[0]);
//    Serial.println(Joystick[1]);
//    Serial.println(Joystick[2]);
//    Serial.println(Joystick[3]);
//  if (button == "UP") {
//    forward();
//  } else if (button == "DOWN") {
//    backward();
//  } else if (button == "RIGHT") {
//    if (continual == false) {
//      Serial2.println("{#000P0500T0300!#005P0500T0300!#006P0500T0300!#011P0500T0300!#012P0500T0300!#017P0500T0300!}");
//    }
//    continual = true;
//    clockwise();
//  } else if (button == "LEFT") {
//    if (continual == false) {
//      Serial2.println("{#000P0500T0300!#005P0500T0300!#006P0500T0300!#011P0500T0300!#012P0500T0300!#017P0500T0300!}");
//    }
//    continual = true;
//    counterClockwise();
//  } else {
//    continual = false;
//    check();
//  }

  check();
  delay(2000);
  for(int i=0;i<6;i++){
    forward();
  }
  check();
  delay(300);
  Serial2.println("{#000P0500T0300!#005P0500T0300!#006P0500T0300!#011P0500T0300!#012P0500T0300!#017P0500T0300!}");
  for(int i=0;i<6;i++){
    clockwise();
  }
  check();
  delay(300);
  Serial2.println("{#000P0500T0300!#005P0500T0300!#006P0500T0300!#011P0500T0300!#012P0500T0300!#017P0500T0300!}");
  for(int i=0;i<6;i++){
    counterClockwise();
  }
  check();
  delay(9999999999999999999999);
}

void check() {
  //Serial2.println(checkPosition1);
  //delay(300);
  Serial2.println(initialPosition);
  //delay(300);

  //Serial2.println(checkPosition2);
  //delay(300);
  //Serial2.println(initialPosition2);
  //delay(300);
}

void forward() {
  Serial2.println("{#004P0600T0300!#007P0600T0300!#016P0600T0300!#001P1000T0300!#010P1000T0300!#013P1050T0300!#006P0500T0300!#011P0500T0300!}");
  delay(300);
  Serial2.println("{#003P1000T0300!#008P1675T0300!#015P1500T0300!#002P1500T0300!#009P1675T0300!#014P1000T0300!#001P1050T0300!#013P1000T0300!#000P0650T0300!#012P0500T0300!#005P0500T0300!#017P0650T0300!}");
  delay(300);
  Serial2.println("{#001P0600T0300!#010P0600T0300!#013P0600T0300!#004P1000T0300!#007P1000T0300!#016P1050T0300!#006P0500T0300!#011P0500T0300!}");
  delay(300);
  Serial2.println("{#002P2000T0300!#009P1325T0300!#014P1500T0300!#003P1500T0300!#008P1325T0300!#015P2000T0300!#004P1050T0300!#016P1000T0300!#005P0650T0300!#017P0500T0300!#000P0500T0300!#012P0650T0300!}");
  delay(300);
}

void backward() {
  Serial2.println("{#013P0600T0300!#010P0600T0300!#001P0600T0300!#016P1000T0300!#007P1000T0300!#004P1050T0300!#011P0500T0300!#006P0500T0300!}");
  delay(300);
  Serial2.println("{#014P1000T0300!#009P1675T0300!#002P1500T0300!#015P1500T0300!#008P1675T0300!#003P1000T0300!#016P1050T0300!#004P1000T0300!#017P0650T0300!#005P0500T0300!#012P0500T0300!#000P0650T0300!}");
  delay(300);
  Serial2.println("{#016P0600T0300!#007P0600T0300!#004P0600T0300!#013P1000T0300!#010P1000T0300!#001P1050T0300!#011P0500T0300!#006P0500T0300!}");
  delay(300);
  Serial2.println("{#015P2000T0300!#008P1325T0300!#003P1500T0300!#014P1500T0300!#009P1325T0300!#002P2000T0300!#013P1050T0300!#001P1000T0300!#012P0650T0300!#000P0500T0300!#017P0500T0300!#005P0650T0300!}");
  delay(300);
}

void clockwise() {
  Serial2.println("{#001P0600T0300!#010P0600T0300!#013P0600T0300!#004P1050T0300!#007P1125T0300!#016P1050T0300!}");
  delay(300);
  Serial2.println("{#002P2000T0300!#009P1675T0300!#014P1500T0300!#003P1000T0300!#008P1325T0300!#015P1500T0300!}");
  delay(300);
  Serial2.println("{#001P1050T0300!#010P1125T0300!#013P1050T0300!#004P0600T0300!#007P0600T0300!#016P0600T0300!}");
  delay(300);
  Serial2.println("{#002P1500T0300!#009P1325T0300!#014P1000T0300!#003P1500T0300!#008P1675T0300!#015P2000T0300!}");
  delay(300);
}

void counterClockwise() {
  Serial2.println("{#001P1050T0300!#010P1125T0300!#013P1050T0300!#004P0600T0300!#007P0600T0300!#016P0600T0300!}");
  delay(300);
  Serial2.println("{#002P2000T0300!#009P1675T0300!#014P1500T0300!#003P1000T0300!#008P1325T0300!#015P1500T0300!}");
  delay(300);
  Serial2.println("{#001P0600T0300!#010P0600T0300!#013P0600T0300!#004P1050T0300!#007P1125T0300!#016P1050T0300!}");
  delay(300);
  Serial2.println("{#002P1500T0300!#009P1325T0300!#014P1000T0300!#003P1500T0300!#008P1675T0300!#015P2000T0300!}");
  delay(300);
}
