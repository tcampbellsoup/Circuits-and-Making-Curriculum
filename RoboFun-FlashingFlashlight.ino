//Use the code below to program the project entitled: Flashing Flashlight

//readButton status reads whether the button is pressed or not 
int readButtonStatus = 0;

//pin designated for grove push button
const int pushButton = 6;
//pins designated for LED's
const int LED1 = 4;
const int LED2 = 2;


void setup() {
//hook up button to pin D2
pinMode (pushButton, INPUT);
//hook up LED to pin D4
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
}

void loop() {
//Is the button pressed or not pressed?
readButtonStatus = digitalRead(pushButton);

//if button is pressed?
  if (readButtonStatus == HIGH){
//turn on both LED
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
//if the button isn't pressed
  } else {
//turn off LED
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  }

}



