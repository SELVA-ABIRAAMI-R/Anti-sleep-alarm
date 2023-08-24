int sensor=8;
int buzzer=11;
int motor=6;
int vibrator=9;
void setup()
{
pinMode(buzzer,OUTPUT);
pinMode(sensor,INPUT);
pinMode(motor,OUTPUT);
pinMode(vibrator,OUTPUT);
digitalWrite(motor,HIGH);
}
void loop(){
if(digitalRead(sensor)==1)
{
digitalWrite(buzzer,LOW);
digitalWrite(motor,HIGH);
digitalWrite(vibrator,LOW);
}
else{
delay(3000);
digitalWrite(buzzer,HIGH);
digitalWrite(vibrator,HIGH);
digitalWrite(motor,LOW);
}
}
