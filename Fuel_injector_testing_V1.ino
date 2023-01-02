#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

int ledone = 13;
int ledtwo = 12;
int ledthree = 11;
int ledfour = 10;

int lowdelay = 150;
int highdelay = 10;

int lowdelaytwo = 75;
int highdelaytwo = 10;

int lowdelaythree = 15;
int highdelaythree = 10;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.

  
  pinMode(ledone, OUTPUT);
  pinMode(ledtwo, OUTPUT);
  pinMode(ledthree, OUTPUT);
  pinMode(ledfour, OUTPUT);

  char startupmessage = "welcome  ";
  
   lcd.init();                      // initialize the lcd 
  lcd.backlight();
  Serial.begin(9600);

 // while (! Serial); // Wait untilSerial is ready - Leonardo
  Serial.println("setup complete");
  lcd.clear();
  
  lcd.setCursor(3,0);
  lcd.print("WELCOME");
  delay(1500);
  
  
}

// the loop function runs over and over again forever
void loop() {
int i = 0;
int input;

     
     Serial.println("enter your mode");
     
     lcd.setCursor(0,0);
     lcd.print("Enter your mode");

   //  if (Serial.available() > 0) {
 
 
 
     
     input = Serial.read();
     
     delay(10);
     lcd.setCursor(0,1);
     lcd.print("input = ");
     lcd.setCursor(8,1);
     lcd.write(input);
     Serial.println(input);
     delay(1500);
   
     //}
   //  lcd.setCursor(0,0);
   //  lcd.print("MODE 1");
   //  input = 49;
   //  delay(2000);
     
  //part 1
  if (input == 49){
        lcd.clear();
        lcd.print("Mode 1");
        
  for(i = 0; i < 10; i++){
        digitalWrite(ledone, HIGH);   
        delay(highdelay);                       // wait for a second
        digitalWrite(ledone, LOW);   
        delay(lowdelay); // wait for a second

        digitalWrite(ledtwo, HIGH);   
        delay(highdelay);                       // wait for a second
        digitalWrite(ledtwo, LOW);   
        delay(lowdelay); // wait for a second

        digitalWrite(ledthree, HIGH);   
        delay(highdelay);                       // wait for a second
        digitalWrite(ledthree, LOW);   
        delay(lowdelay); // wait for a second

        digitalWrite(ledfour, HIGH);   
        delay(highdelay);                       // wait for a second
        digitalWrite(ledfour, LOW);   
        delay(lowdelay); // wait for a second
  }
  lcd.setCursor(0,1);
  lcd.print("Finished");
  Serial.println("part one done");
  input = 0;
  delay(500);
  lcd.clear();
  }
  
  // part 2
  if (input == 50){
        lcd.clear();
        lcd.print("Mode 2");
        
  for( i = 0; i < 20; i++){
        digitalWrite(ledone, HIGH);   
        delay(highdelaytwo);                       // wait for a second
        digitalWrite(ledone, LOW);   
        delay(lowdelaytwo); // wait for a second

        digitalWrite(ledtwo, HIGH);   
        delay(highdelaytwo);                       // wait for a second
        digitalWrite(ledtwo, LOW);   
        delay(lowdelaytwo); // wait for a second

        digitalWrite(ledthree, HIGH);   
        delay(highdelaytwo);                       // wait for a second
        digitalWrite(ledthree, LOW);   
        delay(lowdelaytwo); // wait for a second

        digitalWrite(ledfour, HIGH);   
        delay(highdelaytwo);                       // wait for a second
        digitalWrite(ledfour, LOW);   
        delay(lowdelaytwo); // wait for a second
  }
  lcd.setCursor(0,1);
  lcd.print("Finished");
  Serial.println("part two done");
  input = 0;
  delay(500);
  lcd.clear();
  }

    //part 3
  if (input == 51){
        lcd.clear();
        lcd.print("Mode 3");
  for( i = 0; i < 30; i++){
       digitalWrite(ledone, HIGH);   
        delay(highdelaythree);                       // wait for a second
        digitalWrite(ledone, LOW);   
        delay(lowdelaythree); // wait for a second

        digitalWrite(ledtwo, HIGH);   
        delay(highdelaythree);                       // wait for a second
        digitalWrite(ledtwo, LOW);   
        delay(lowdelaythree); // wait for a second

        digitalWrite(ledthree, HIGH);   
        delay(highdelaythree);                       // wait for a second
        digitalWrite(ledthree, LOW);   
        delay(lowdelaythree); // wait for a second

        digitalWrite(ledfour, HIGH);   
        delay(highdelaythree);                       // wait for a second
        digitalWrite(ledfour, LOW);   
        delay(lowdelaythree); // wait for a second
  }
  lcd.setCursor(0,1);
  lcd.print("Finished");
  Serial.println("part three done");
  input = 0;
  delay(500);
  lcd.clear();
  }

   //part 4 full test
   if (input == 52){
        lcd.clear();
        lcd.print("Mode 4 full Test");

        //Part 1 
        for(i = 0; i < 10; i++){
        digitalWrite(ledone, HIGH);   
        delay(highdelay);                       // wait for a second
        digitalWrite(ledone, LOW);   
        delay(lowdelay); // wait for a second

        digitalWrite(ledtwo, HIGH);   
        delay(highdelay);                       // wait for a second
        digitalWrite(ledtwo, LOW);   
        delay(lowdelay); // wait for a second

        digitalWrite(ledthree, HIGH);   
        delay(highdelay);                       // wait for a second
        digitalWrite(ledthree, LOW);   
        delay(lowdelay); // wait for a second

        digitalWrite(ledfour, HIGH);   
        delay(highdelay);                       // wait for a second
        digitalWrite(ledfour, LOW);   
        delay(lowdelay); // wait for a second
        }
        lcd.setCursor(0,1);
        lcd.print("Part 1 done");
        
        //Part 2
        for( i = 0; i < 20; i++){
        digitalWrite(ledone, HIGH);   
        delay(highdelaytwo);                       // wait for a second
        digitalWrite(ledone, LOW);   
        delay(lowdelaytwo); // wait for a second

        digitalWrite(ledtwo, HIGH);   
        delay(highdelaytwo);                       // wait for a second
        digitalWrite(ledtwo, LOW);   
        delay(lowdelaytwo); // wait for a second

        digitalWrite(ledthree, HIGH);   
        delay(highdelaytwo);                       // wait for a second
        digitalWrite(ledthree, LOW);   
        delay(lowdelaytwo); // wait for a second

        digitalWrite(ledfour, HIGH);   
        delay(highdelaytwo);                       // wait for a second
        digitalWrite(ledfour, LOW);   
        delay(lowdelaytwo); // wait for a second
        }
        lcd.setCursor(0,1);
        lcd.print("Part 2 done");
        
        //part 3
        for( i = 0; i < 30; i++){
        digitalWrite(ledone, HIGH);   
        delay(highdelaythree);                       // wait for a second
        digitalWrite(ledone, LOW);   
        delay(lowdelaythree); // wait for a second

        digitalWrite(ledtwo, HIGH);   
        delay(highdelaythree);                       // wait for a second
        digitalWrite(ledtwo, LOW);   
        delay(lowdelaythree); // wait for a second

        digitalWrite(ledthree, HIGH);   
        delay(highdelaythree);                       // wait for a second
        digitalWrite(ledthree, LOW);   
        delay(lowdelaythree); // wait for a second

        digitalWrite(ledfour, HIGH);   
        delay(highdelaythree);                       // wait for a second
        digitalWrite(ledfour, LOW);   
        delay(lowdelaythree); // wait for a second
        }
        lcd.setCursor(0,1);
        lcd.print("Part 3 done");
        delay(750);
        
  lcd.setCursor(0,1);
  lcd.print("Test Complete");
  Serial.println("Full Test Complete");
  input = 0;
  delay(750);
  lcd.clear();
  }

}
