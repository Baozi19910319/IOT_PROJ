byte RelayPIN = 7;

void setup(void) 
{
    pinMode( RelayPIN , OUTPUT );
    Serial.begin(9600);
}

void loop(void) 
{
    //NO-COM導通
	digitalWrite( RelayPIN , LOW );
	Serial.println("LOW");
	delay(3000);

	//NC-COM導通
	digitalWrite( RelayPIN , HIGH );
	Serial.println("HIGH");
	delay(3000);
}
