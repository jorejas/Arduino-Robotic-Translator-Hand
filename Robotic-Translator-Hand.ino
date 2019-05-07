
#include <Servo.h>

  Servo myservo;  // create servo object to control a servo
Servo myservo2;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo myservo3;  // create servo object to coontrol a servo
// twelve servo objects can be created on most boards
Servo myservo4;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo myservo5;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos1 = 0;    // variable to store the servo position
int pos2 = 90;
int pos3 = 180;
char leer;
void setup() {
  
  Serial.begin(9600);
  myservo.attach(3);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(5);  // attaches the servo on pin 9 to the servo object
  myservo3.attach(6);  // attaches the servo on pin 9 to the servo object
  myservo4.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo5.attach(10);  // attaches the servo on pin 9 to the servo object
}
void loop()  {
  if (Serial.available() > 0) {
    // read the incoming byte:
    int incomingByte = Serial.read();

    if (incomingByte != 10){// say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
    if (incomingByte==97){
      Serial.println ("a");
      a();
    }
    if (incomingByte==98){
      b();
    }
    if (incomingByte==99){
      c();
    }
    if (incomingByte==100){
      d();
    }
    if (incomingByte==101){
      e();
    }
    if (incomingByte==102){
      f();
    }
    if (incomingByte==103){
      Serial.println ("a");
      g();
    }
    if (incomingByte==104){
      h();
    }
    if (incomingByte==105){
      i();
    }
    if (incomingByte==106){
      j();
    }
    if (incomingByte==107){
      k();
    }
    if (incomingByte==108){
      l();
    }
    if (incomingByte==109){
      Serial.println ("a");
      m();
    }
    if (incomingByte==110){
      n();
    }
    if (incomingByte==111){
      o();
    }
    if (incomingByte==112){
      p();
    }
    if (incomingByte==113){
      q();
    }
    if (incomingByte==114){
      r();
    }
    if (incomingByte==115){
      Serial.println ("s");
      s();
    }
    if (incomingByte==116){
      t();
    }
    if (incomingByte==117){
      u();
    }
    if (incomingByte==118){
      v();
    }
    if (incomingByte==119){
      w();
    }
    if (incomingByte==120){
      x();
    }
    if (incomingByte==121){
      y();
    }
    if (incomingByte==122){
      z()
    }
    Serial.write("");
  }
  }
}

void a() {
    myservo.write(pos1);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos1);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos1);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos1);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos1);              // tell servo to go to position in variable 'pos'
   
  }

void b() {
    myservo.write(pos1);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos3);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos3);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos3);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

void c() {
    myservo.write(pos3);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos3);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos3);             // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos3);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

void d() {
    myservo.write(pos2);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos2);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos2);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos2);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

void e() {
    myservo.write(pos1);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos1);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos1);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos1);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos1);              // tell servo to go to position in variable 'pos'
   
  }

void f() {
    myservo.write(pos1);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos3);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos3);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos3);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

void g() {
    myservo.write(pos3);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos3);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos3);             // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos3);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

void h() {
    myservo.write(pos2);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos2);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos2);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos2);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

  void i() {
    myservo.write(pos1);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos1);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos1);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos1);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos1);              // tell servo to go to position in variable 'pos'
   
  }

void j() {
    myservo.write(pos1);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos3);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos3);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos3);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

void k() {
    myservo.write(pos3);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos3);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos3);             // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos3);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

void l() {
    myservo.write(pos2);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos2);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos2);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos2);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

  void m() {
    myservo.write(pos1);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos1);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos1);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos1);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos1);              // tell servo to go to position in variable 'pos'
   
  }

void n() {
    myservo.write(pos1);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos3);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos3);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos3);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

void o() {
    myservo.write(pos3);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos3);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos3);             // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos3);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

void p() {
    myservo.write(pos2);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos2);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos2);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos2);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

void q() {
    myservo.write(pos3);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos3);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos3);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos3);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
  }

void r() {
    myservo.write(pos1);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos3);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos3);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos1);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos1);              // tell servo to go to position in variable 'pos'
  }

void s() {
    myservo.write(pos1);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos1);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos1);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos1);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos1);              // tell servo to go to position in variable 'pos'
   
  }

void t() {
    myservo.write(pos1);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos3);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos3);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos3);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

void u() {
    myservo.write(pos3);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos3);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos3);             // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos3);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

void v() {
    myservo.write(pos2);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos2);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos2);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos2);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

  void w() {
    myservo.write(pos1);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos1);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos1);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos1);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos1);              // tell servo to go to position in variable 'pos'
   
  }

void x() {
    myservo.write(pos1);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos3);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos3);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos3);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

void y() {
    myservo.write(pos3);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos3);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos3);             // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos3);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }

void z() {
    myservo.write(pos2);              // tell servo to go to position in variable 'pos'
                       
    myservo2.write(pos2);              // tell servo to go to position in variable 'pos'
                    
    myservo3.write(pos2);              // tell servo to go to position in variable 'pos'
    
    myservo4.write(pos2);              // tell servo to go to position in variable 'pos'
   
    myservo5.write(pos3);              // tell servo to go to position in variable 'pos'
   
  }