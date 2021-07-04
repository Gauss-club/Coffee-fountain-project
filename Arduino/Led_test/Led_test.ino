#define trigger 9
#define echo 10
#define Led 7
long duration;
int distance;

 
void setup()
{

 pinMode(trigger,OUTPUT);
 pinMode(echo,INPUT);
 pinMode(Led,OUTPUT);
 Serial.begin(2600);
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
 
 duration = pulseIn(echo,HIGH);
 distance = 0.034*duration /2;
 Serial.print(distance);
 if(distance <=10)
 {
   digitalWrite(Led,HIGH);
 }
 else
 {
   digitalWrite(Led,LOW);
 }

 delay(500);
}


