#define trigger 9
#define echo 10
#define Led 7
long Lecture_echo;
long cm;

float time=0,distance=0;
 
void setup()
{
Serial.begin(9600);

 pinMode(trigger,OUTPUT);
 pinMode(echo,INPUT);
 pinMode(Led,OUTPUT);

 delay(2000);
}
 
void loop()
{
 
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 digitalWrite(trigger,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 time=pulseIn(echo,HIGH);
 
 distance=time*200/20000;
 if(distance >=100)
 {
   digitalWrite(Led,HIGH);
 }
 else
 {
   digitalWrite(Led,LOW);
 }

 delay(500);
}


