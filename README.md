# CSC332-Project1

SETUP:

Materials:
- Transmitter:
  * 3 LEDs
  * 4 Resistors
  * 1 Piezo Buzzer
  * 7 Wires
  * Ardunio Uno Board
  * Breadboard

- Receiver:
    * 1 Photoreistor
    * 1 Resistor
    * 5 Wires
    * 1 Piece of Paper (make into cone to over sensor)
    * Ardunio Uno Board


Wiring:
  
  The following are images to guide you on how to wire the devices such that you are able to transmit and receive morse code message!
  
  - Transmitter:
 
  ![IMG-4423](https://user-images.githubusercontent.com/54714266/155041273-e7db51f3-61da-4250-a5f0-b60cd2f7347b.JPG)
  
  - LED's are connected to Digital Pins 10, 9, and 8
  - Piezo Buzzer is connected to Digital Pin 7
  - Power is 5V
  - Any GND can be used

  - Reciever:
  ![IMG-4427](https://user-images.githubusercontent.com/54714266/155041326-9bebbd73-0d13-43ee-aadf-bc785518e14a.JPG)

 - Photoresistor is connceted to Analog Pin 0
 - Power is 5V
 - Any GND can be used

Ensure that the LED's from the Transmitter are grouped together (as close as possible) and make sure the Photoresistor on the Receiver end is facing them with cone attached as to only focus on the light comming from the LEDs while ignoring the ambient light!

Once Wired, upload the Ardunio Sketchs into the appropriate device, open the Serial Monitor and begin the comminucation process between each other 
* (Devices may take a while to synchronize)
* As of this moment, bugs still remain in Receiver code, therefore not accurately decrypting the light sequence into the correct character!
