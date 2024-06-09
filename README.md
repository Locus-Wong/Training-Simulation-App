# Training-Simulation-App

##Demo Video:
https://www.youtube.com/watch?v=PqyHtseUgWo

## Version 1: Using the USB port on your PC：
1. Plug the USB cable from the remote aircraft (Arduino) into a USB port on your computer.
2. Open the "A320AileronDampingTest" folder and run "A320AileronDampingTest.exe".
3. Aileron Damping Test Steps (shown below)
4. Open Device Manager to find the COM port number of the Arduino.
5. Locate the Virtual COM port created by the Arduino in the Ports section of Device Manager.
6. Select the correct COM port number of the Arduino.
7. Use the "Up" or "Down" arrow key to test the aileron.

## Version 2: Use the Bluetooth function of your computer
1. Plug the USB cable from the remote aircraft (Arduino) into any power bank.
2. Open Devices and Printers and click "Add a device" button.
3. Pick the HC-05 device and enter the pairing code : 1234.
4. After the installation of HC-05 device driver, Right click the HC-05 device, then choose the "Content" option.
5. Click the "Service" layout and you will see the Virtual COM port number which was created by HC-05 device.
6. Open the A320AileronDampingTest.exe which is inside "A320AileronDampingTest" file.
7. Aileron Damping Test Steps (shown below)
8. Pick the right Virtual COM port number of the HC-05 device.
9. Enter "Up" or "Down" arrow key to test the aileron.

## Version 3: Use the Bluetooth function of your smartphone
1. Plug the USB cable from the remote aircraft (Arduino) into any power bank.
2. Move the A320AileronDampingTest.apk which is inside "Android App apk" file to your Android phone.
3. After picking up your smartphone, Install the apk on your Android phone.
4. Go to the Bluetooth setting.
5. Turn the Bluetooth wireless function on and match the HC-05 device by entering the pairing code : 1234.
6. Open the "A320AileronDampingTest" app.
7. Aileron Damping Test Steps (shown below)
8. Touch the Bluetooth Logo and select the 00:18:E4:03:51:7C HC-05 to build the Bluetooth connection.
9. Move the upper or lower slider to test the aileron.

### Aileron Damping Test Steps (1 - 5):
1. Click / Tap the "SYSTEM REPORT / TEST" button.
2. Click / Tap the "EFCS 1" button.
3. Click / Tap the "TEST" button.
4. Click / Tap the "AILERON DAMPING TEST" button.
5. Select either "START LEFT AIL TEST" or "START RIGHT AIL TEST" button to enter the corresponding testing interface.
