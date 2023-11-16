#LED Animations Using Microcontroller
This C code demonstrates different LED animations implemented on a microcontroller-based system. The project showcases various LED effects using GPIO (General Purpose Input/Output) pins and is written in the C programming language.

##Overview of LED Animations

1.###LEDs Flashing Every 1 Second:
All LEDs blink simultaneously at a frequency of 1 Hz (once per second).
2.###LEDs Shifting Left Every 250 ms:
Sequence of LEDs shifts to the left every 250 milliseconds.
3.###LEDs Shifting Right Every 250 ms:
Sequence of LEDs shifts to the right every 250 milliseconds.
4.###Two LEDs Converging Every 250 ms:
Two LEDs gradually light up, converging toward each other every 250 milliseconds.
5.###Two LEDs Diverging Every 250 ms:
Two LEDs gradually turn off, diverging away from each other every 250 milliseconds.
6.###Ping Pong Effect Every 250 ms:
Sequential LEDs turn on and off, creating a ping-pong effect every 250 milliseconds.
7.###Incrementing (Snake Effect) Every 250 ms:
LEDs light up sequentially, appearing as an incrementing snake effect every 250 milliseconds.
8.###Two LEDs Converging/Diverging Every 250 ms:
Two LEDs alternate between converging and diverging every 250 milliseconds.

##Instructions for Use

1.###Hardware Setup:
-Connect the LEDs to the designated GPIO pins on the microcontroller.
-Ensure the microcontroller setup matches the pin assignments mentioned in the code.
2.###Compilation & Execution:
-Compile the provided C code using a compatible compiler for your microcontroller.
-Upload the compiled code to the microcontroller board.
3.###Observing LED Animations:
-Observe the connected LEDs to see the various animations produced by the program.
-Each animation effect will occur as described in the overview section.

##Customization

-Modify the GPIO pin assignments and timing parameters in the code to   suit the specific hardware configuration or desired animation effects.
-Extend or modify the existing code to create new LED animations or combine different effects.
