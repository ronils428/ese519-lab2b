University of Pennsylvania, ESE 5190: Intro to Embedded Systems, Lab 2B

    Name: Ronil Synghal
        LinkedIn: www.linkedin.com/in/ronil-synghal
    Tested on: (TODO) MacBook Pro (13-inch, 2018, Four Thunderbolt 3 Ports), macOS Big Sur 11.4
    
Our high-level circuit for the first part of this lab looks as follows: STEMMA QT-GPIO -> LED -> RESISTOR -> STEMMA QT-GROUND. This first gif shows the REPL being used to turn an LED on and off based off of keystroke. The code can also be viewed in the repo.

![](https://github.com/ronils428/ese519-lab2b/blob/main/ledonoff.gif)

For the rest of this lab, we plan to use an RGB LED, a buzzer and a push button. We plan to create different combinations such that if you push the button in slow intervals, it will change the color of the LED and for fast intervals of the push button it will output a sound from the buzzer. One of the things that is pretty cool that we can define a later point is how the components will interact with each other. Like what is the outcome? For example, we could build a morse-code encoder which will output the morse code both through the LED and the speaker of a specific text input. I personally think it would be pretty cool to include a button into the setup as well or an array of LEDs to create some type of output pattern like an image or something.

The parts that we will need from Detkin are standard LEDs, resistors, and push buttons, all of which the Detkin Lab has in excess. 
