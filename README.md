# Training-Simulation-App

##Demo Video:
https://www.youtube.com/watch?v=PqyHtseUgWo

## Version 1: Using the USB port on your PC：
1. Plug the USB cable from the remote aircraft (Arduino) into a USB port on your computer.
2. Open the "A320AileronDampingTest" folder and run "A320AileronDampingTest.exe".
3. Follow the Aileron Damping Test Steps **(listed below)**.
4. Open Device Manager to find the COM port number of the Arduino.
5. Locate the Virtual COM port created by the Arduino in the Ports section of Device Manager.
6. Select the correct COM port number of the Arduino.
7. Use the "Up" or "Down" arrow key to test the aileron.

## Version 2: Use the Bluetooth function of your computer
1. Plug the USB cable from the remote aircraft (Arduino) into any power bank.
2. Open Devices and Printers and click "Add a device" button.
3. Select the HC-05 device and enter the pairing code: 1234.
4. After installing the HC-05 device driver, right-click the HC-05 device, then choose "Content".
5. Click the "Service" tab to see the Virtual COM port number created by the HC-05 device.
6. Open "A320AileronDampingTest.exe" from the "A320AileronDampingTest" folder.
7. Follow the Aileron Damping Test Steps **(listed below)**.
8. Select the correct Virtual COM port number of the HC-05 device.
9. Use the "Up" or "Down" arrow key to test the aileron.

## Version 3: Use the Bluetooth function of your smartphone
1. Plug the USB cable from the remote aircraft (Arduino) into a power bank.
2. Move "A320AileronDampingTest.apk" from the "Android App apk" folder to your Android phone.
3. Ensure that the Special app access for "Install unknown apps" is granted.
4. Install the APK on your Android phone.
5. Go to Bluetooth settings.
6. Turn on Bluetooth and pair with the HC-05 device by entering the pairing code: 1234.
7. Open the "A320AileronDampingTest" app.
8. Follow the Aileron Damping Test Steps (listed below).
9. Tap the Bluetooth logo and select the HC-05 device (00:18:E4:03:51:7C) to establish the Bluetooth connection.
10. Move the upper or lower slider to test the aileron.

## Aileron Damping Test Steps (5 Steps Only):
1. Click / Tap the "SYSTEM REPORT / TEST" button.
2. Click / Tap the "EFCS 1" button.
3. Click / Tap the "TEST" button.
4. Click / Tap the "AILERON DAMPING TEST" button.
5. Click / Tap either "START LEFT AIL TEST" or "START RIGHT AIL TEST" button to enter the corresponding testing interface.

## Troubleshooting:
If you cannot test the aileron by your device, the most likely problems are:
For all the setups:
• The USB cable from the remote aircraft (Arduino) may not be properly connected to a USB port directly on your computer or power bank. Make sure the connection is successful established before you go to the next step.
For the use of USB port on your PC:
• You may not pick the right COM port number of the Arduino on your computer. Make sure you pick it right.
For the use of Bluetooth function:
• Your device may not have Bluetooth wireless function on. Make sure you see a symbol at the top of the screen on your phone or on the taskbar of your computer.
• Your device may not pair the HC-05 Bluetooth module. Make sure you pair them by entering the pairing code : 1234.
• You may not pick the right Virtual COM port number of the HC-05 device on your computer or select the right 00:18:E4:03:51:7C HC-05 option on your phone. Make sure you pick them right.
