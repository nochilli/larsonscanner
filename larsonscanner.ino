const int buttonPin = 2;
const int ledPin1 = 13;

int leds[] = {13,12,11,10,9,8,7,6};
#define NUMBER_OF_LEDS (sizeof(leds)/sizeof(int))

boolean larson[][NUMBER_OF_LEDS] = {
{ HIGH, LOW, LOW, LOW, LOW, LOW, LOW, LOW},
{ LOW, HIGH, LOW, LOW, LOW, LOW, LOW, LOW},
{ LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW},
{ LOW, LOW, LOW, HIGH, LOW, LOW, LOW, LOW},
{ LOW, LOW, LOW, LOW, HIGH, LOW, LOW, LOW},
{ LOW, LOW, LOW, LOW, LOW, HIGH, LOW, LOW},
{ LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW},
{ LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH},
{ LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW},
{ LOW, LOW, LOW, LOW, LOW, HIGH, LOW, LOW},
{ LOW, LOW, LOW, LOW, HIGH, LOW, LOW, LOW},
{ LOW, LOW, LOW, HIGH, LOW, LOW, LOW, LOW},
{ LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW},
{ LOW, HIGH, LOW, LOW, LOW, LOW, LOW, LOW},
};

#define FRAMES (sizeof(larson)/(sizeof(larson[0])))


int sensorPin = 0;

void setup() {
pinMode(ledPin1, OUTPUT);
for (int led=0; led<NUMBER_OF_LEDS; led++) {
pinMode(leds[led], OUTPUT);
}
}

void loop(){

long time = millis();

for (int frame=0; frame<FRAMES; frame++) {
for (int led=0; led<NUMBER_OF_LEDS; led++) {
digitalWrite(leds[led], larson[frame][led]);
}
delay(500);
}
}
