

const int LED = 0;
pinMode (LED, OUTPUT);


void setup()
{
  Serial.begin(115200);
  Serial.println("Start");
  int a = 1;
}

void loop()
{
  Serial.println("Test", a)
  a ++;
  
}
