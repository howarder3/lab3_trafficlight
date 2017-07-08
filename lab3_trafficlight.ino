
int redled =10; //define digit 10 interface
int blueled =7; //define digit 7 interface 
int greenled =4; //define digit 4 interface
void setup()
{
  pinMode(redled, OUTPUT); //define red output
  pinMode(blueled, OUTPUT); //define blue output
  pinMode(greenled, OUTPUT); //define green output
}
void loop()
{
  digitalWrite(redled, HIGH);//red on
  delay(1000);//delay 1s
  digitalWrite(redled, LOW); //red off
  digitalWrite(blueled, HIGH);//blue on
  delay(200);//delay 0.2s
  digitalWrite(blueled, LOW);//blue off
  digitalWrite(greenled, HIGH);//green on
  delay(1000);//delay 1s
  digitalWrite(greenled, LOW);//green off
}

