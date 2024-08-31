# Fume Extractor
This is a soldering fume extractor device designed to protect you from harmful fumes during soldering. When fumes are detected, the device automatically extracts them using the dc fan, dispersing them safely into the air. This prevents the fumes from being inhaled directly, ensuring a safer and healthier working environment.
![image](https://github.com/user-attachments/assets/83e1f94c-5125-406c-b402-a6ac5d86db18)
**Following Components were used:**
1. esp32
2. Servo Motor
3. DC Buck Boost Converter 
4. 5v SMPS
5. MQ-135 Sensor
6. Relay Module
7. DC 12v Fan
### Running the code:
Clone the Repository:
```
git https://github.com/Ahnaf-nub/Fume-Extractor.git
cd Fume-Extractor
```
*Upload `fume_extractor.ino` to your esp32 board!*
## N.B:
You might need to calibrate the MQ135 sensor, so uplaod `calibration.ino` code to measure the readings in clear air and put that calirated value into the `MQ135.cpp`
