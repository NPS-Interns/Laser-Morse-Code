
/*
 * Vincent Lopez, Austin Erben
 * CSIS 10C Final Project
 * Laser Morse Code Transceiver
 */

#include <Morse.h> // libary found at: https://github.com/stephenyeargin/arduino-projects.git
char practice [] = "THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG";

Morse morse(4, 200, 1); // (pinNumber,speed,default)

void setup()
{

}

void loop()
{
  morse.sendmsg(practice); // set your message
  delay (2000); // delay 2 seconds before repeating of meassage
}
