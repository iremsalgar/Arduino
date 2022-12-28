# Arduino_ile_7_Segment_Display_Sayac_Uygulamasi

## Materials:

* 1 Adet Arduino Uno

* 1 Adet Breadboard

* 1 Adet 7 Segment Display(anot)

* Jumper kablolar

* 2 adet 220 ohm direnç


I made a counter application with Arduino. When I started writing the code, I first defined the cables. so I knew which wire would power the counnter. Then I got correct outputs on the meter by making the right combinations in the code because I knew which wire was running which line.

Since my counter is the cathode, I connected the common pins to the gnd. Also, the Delay(1000) function is used to pause the program for 1 second between each number. This allows the user to see each number clearly on the 7-segment display. 

The loop() function is called repeatedly by the Arduino sketch, and it contains a series of statements that control the state of the LEDs on the 7-segment display.

Each number is displayed by turning on the appropriate LEDs and turning off the others. For example, to display the number "1", the code turns on LED b and LED c, and turns off all the other LEDs.

Overall, this code will cause the 7-segment display to cycle through the numbers 0 through 9 repeatedly, with a 1-second delay between each number.

