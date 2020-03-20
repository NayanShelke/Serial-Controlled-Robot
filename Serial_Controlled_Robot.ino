
// Created by Nayan Shelke
#define m11 3
#define m12 4
#define m21 5
#define m22 6

String command;
 void forward(){
 {
      digitalWrite(m11, HIGH);
      digitalWrite(m12, LOW);
      digitalWrite(m21, HIGH);
      digitalWrite(m22, LOW);
    }
// Prints the motion on the Serial Monitor
Serial.print("Moving Forward");

 }
 void backward(){
 {
      digitalWrite(m11, LOW);
      digitalWrite(m12, HIGH);
      digitalWrite(m21, LOW);
      digitalWrite(m22, HIGH);
    }
// Prints the motion on the Serial Monitor
Serial.print("Moving Backwards");

 }
 void left(){
 {
       digitalWrite(m11, HIGH);
      digitalWrite(m12, LOW);
      digitalWrite(m21, LOW);
      digitalWrite(m22, LOW);
    }
// Prints the motion on the Serial Monitor
Serial.print("Turning Left");

 }
 void right(){
 {
       digitalWrite(m11, HIGH);
      digitalWrite(m12, LOW);
      digitalWrite(m21, LOW);
      digitalWrite(m22, LOW);
    }
// Prints the motion on the Serial Monitor
Serial.print("Turning Right");
 }
  void get_data(){
    
  Serial.println("Recieving");
 }

  void reboot(){{
    digitalWrite(m11, LOW);
      digitalWrite(m12, LOW);
      digitalWrite(m21, LOW);
      digitalWrite(m22, LOW);
      }
  Serial.println("Rebooting");
 }
 
 
void setup() {
  pinMode(m11, OUTPUT);
  pinMode(m12, OUTPUT);
  pinMode(m21, OUTPUT);
  pinMode(m22, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
    if(Serial.available()){
        command = Serial.readStringUntil('\n');
         
        if(command.equals("f")){
       
            forward();
            
        }
        else if(command.equals("b")){
            backward();
        }
        else if(command.equals("l")){
            left();
        }
        else if(command.equals("r")){
            right();
        }
        else if(command.equals("reboot")){
            reboot();
        }
        else{
            Serial.println("Invalid command");
        }
    }
}
