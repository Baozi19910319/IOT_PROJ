byte LightPIN = 7;
void setup(void) 
{
	pinMode( LightPIN , INPUT );
  Serial.begin(9600);
}
 
void loop(void) 
{
    Serial.println(digitalRead(LightPIN));
}
