# Line Follower Robot

This repository contains the arduino program for a line follower robot that detects a black line over white surface using 3 IR sensor modules and controls the movement of 2 DC motors.

If the IR sensor in 
- center position detects the line, both the motors move forward
- left position detects the line, only the right motor moves forward
- right position detects the line, only the left motor moves forward

If either all 3 IR sensors detect the line or none of the IR sensors detect the line, all motors stop functioning

The motors are powered through a Motor driver shield (based on HC595 and L293D) through a dedicated 9V battery and the arduino board, sensors and the motor driver is powered through a 5V power bank connected to arduino board through a USB cable.
