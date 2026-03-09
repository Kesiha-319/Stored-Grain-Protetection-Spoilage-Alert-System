##---BLYNK CODE---##

#define BLYNK_TEMPLATE_ID &quot;TMPL3YX7I4mOX&quot;
#define BLYNK_TEMPLATE_NAME &quot;storage monitoring&quot;
#define BLYNK_AUTH_TOKEN &quot;AcQ1olSXS8iL62d2xL7-UxB8ofBZIU_T&quot;

#define BLYNK_PRINT Serial
#include &quot;dht.h&quot;
#include &lt;Wire.h&gt;
#include &lt;LiquidCrystal_I2C.h&gt;
LiquidCrystal_I2C lcd(0x27, 16, 2);
#include &lt;ESP8266WiFi.h&gt;
#include &lt;BlynkSimpleEsp8266.h&gt;

#define dht_apin D0
dht DHT;
int humty;
int temp;
int buzzer = D8;

int count1;
String weather;

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = &quot;iot storage&quot;;
char pass[] = &quot;123123123&quot;;

//BLYNK_WRITE(V3)
//{
// int value = param.asInt();
// Serial.println(value);

// if(value == 1)
// {
// digitalWrite(D8, HIGH);
// lcd.setCursor(12,1);
// lcd.print(&quot; ON&quot;);
// }
// if(value == 0)
// {
// digitalWrite(D8, LOW);
// lcd.setCursor(12,1);
// lcd.print(&quot;OFF&quot;);
// }
//}

void setup()
{

//Serial.begin(9600); // Starts the serial communication
lcd.begin();
Serial.begin(115200);

Blynk.begin(auth, ssid, pass);

pinMode(buzzer,OUTPUT);

lcd.setCursor(0,0);
lcd.print(&quot; IoT Based &quot;);
lcd.setCursor(0,1);
lcd.print(&quot;storage Monitor &quot;);
delay(1000);
lcd.clear();

}

void loop()
{
Blynk.run();
DHT.read11(dht_apin);
humty = (DHT.humidity);
temp = (DHT.temperature);

lcd.setCursor(0,0);
lcd.print(&quot;Temp:&quot;);
lcd.print(temp);
lcd.print(&quot; &quot;);
lcd.setCursor(0,1);
lcd.print(&quot;H:&quot;);
lcd.print(humty);
lcd.print(&quot; &quot;);

if (temp &gt; 40 || humty &gt; 65 )
{

digitalWrite(buzzer, HIGH);
}
else
{
digitalWrite(buzzer, LOW);
}

Blynk.virtualWrite(V0, temp);
Blynk.virtualWrite(V1, humty);
delay(800);

}
