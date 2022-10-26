#define ECHO_PIN 2 
#define TRIG_PIN 3 
#define organization =”e03g10”
#define deviceType=” Arduino” 
#define deviceId =”2502” 
#define authMethod ="use-token-auth" 
#define authToken =”12345678” 
Void setup() { 
Serial.begin(9600);
pinMode(TRIG_PIN,OUTPUT); 
pinMode(ECHO_PIN, INPUT); 
} 
float readDistanceCM() { 
digitalWrite(TRIG_PIN,LOW); 
delayMicroseconds(2); 
digitalWrite(TRIG_PIN,HIGH); 
delayMicroseconds(10); 
digitalWrite(TRIG_PIN,LOW); 
int duration = pulseIn(ECHO_PIN, HIGH); 
return duration * 0.034 / 2; 
} 
void loop() { 
float distance = readDistanceCM(); 
if(distance<=100) 
{ 
Serial.println("person detected "); 
} 
else{ 
Serial.print("Measured distance: "); 
Serial.println(readDistanceCM()); 
} 
delay(1000); 
}