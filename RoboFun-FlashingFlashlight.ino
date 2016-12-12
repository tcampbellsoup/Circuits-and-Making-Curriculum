//Use the code below to program the project entitled: Flashing Flashlight

//readButton status reads whether the button is pressed or not 
int readButtonStatus = 0;

//pin designated for arcade button
const int arcadeButton = 2;
//pin designated for LED pin
const int LED = 4;

void setup() {
//hook up button to pin D2
pinMode (arcadeButton, INPUT);
//hook up LED to pin D4
pinMode(LED, OUTPUT);
}

void loop() {
//Is the button pressed or not pressed?
readButtonStatus = digitalRead(arcadeButton);

//if button is pressed?
  if (arcadeButton == HIGH){
//turn on LED
    digitalWrite(LED, HIGH);
//if the button isn't pressed
  } else {
//turn off LED
    digitalWrite(LED,LOW);
  }

}



