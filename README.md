# Training-Simulation-App-


##Demo Video:
https://www.youtube.com/watch?v=PqyHtseUgWo

## Version 1: Use the USB port on your PC
- Step 1: Plug the USB cable from the remote aircraft (Arduino) into a USB port directly on your computer.
- Step 2: Open the A320AileronDampingTest.exe which is inside "A320AileronDampingTest" file.
<br><br>The followings illustrates the steps of doing aileron damping test.
- Step 3: Click the "SYSTEM REPORT / TEST" button.
- Step 4: Click the "EFCS 1" button.
- Step 5: Click the "TEST" button.
- Step 6: Click the "AILERON DAMPING TEST" button.
- Step 7: Click the selected option to enter into the corresponding testing interface. (You can select Left / Right aileron for Testing.)
- Step 8: Open Device Manager to determine the COM port number of the Arduino.
- Step 9: In the Device Manager list, look in Ports and find the Virtual COM port, which was created by the Arduino.
- Step 10: Pick the right COM port number of the Arduino.
- Step 11: Enter "Up" or "Down" arrow key to test the aileron.

## Version 2: Use the Bluetooth function of your computer
- Step 1: Plug the USB cable from the remote aircraft (Arduino) into any power bank.
- Step 2: Open Devices and Printers and click "Add a device" button.
- Step 3: Pick the HC-05 device and enter the pairing code : 1234.
After the installation of HC-05 device driver:
- Step 4: Right click the HC-05 device, then choose the "Content" option.
- Step 5: Click the "Service" layout and you will see the Virtual COM port number which was created by HC-05 device.
- Step 6: Open the A320AileronDampingTest.exe which is inside "A320AileronDampingTest" file.

The followings illustrates the steps of doing aileron damping test on primary flight display.
- Step 7: Click the "SYSTEM REPORT / TEST" button.
- Step 8: Click the "EFCS 1" button.
- Step 9: Click the "TEST" button.
- Step 10: Click the "AILERON DAMPING TEST" button.

- Step 11: Click the selected option to enter into the corresponding testing interface. (You can select Left / Right aileron for Testing.)
- Step 12: Pick the right Virtual COM port number of the HC-05 device.
- Step 13: Enter "Up" or "Down" arrow key to test the aileron.

## Version 3: Use the Bluetooth function of your smartphone
- Step 1: Plug the USB cable from the remote aircraft (Arduino) into any power bank.
- Step 2: Move the A320AileronDampingTest.apk which is inside "Android App apk" file to your Android phone.
After picking up your smartphone:
- Step 3: Install the apk on your Android phone.
- Step 4: Go to the Bluetooth setting.
- Step 5: Turn the Bluetooth wireless function on and match the HC-05 device by entering the pairing code : 1234.
- Step 6: Open the "A320AileronDampingTest" app.

The followings illustrates the steps of doing aileron damping test.
- Step 7: Press the "SYSTEM REPORT / TEST" virtual button.
- Step 8: Press the "EFCS 1" virtual button.
- Step 9: Press the "TEST" virtual button.
- Step 10: Press the "AILERON DAMPING TEST" virtual button.
- Step 11: You can press "START LEFT AIL TEST" or "START RIGHT AIL TEST" virtual button as you will enter into the same testing interface.
- Step 12: Touch the Bluetooth Logo and select the 00:18:E4:03:51:7C HC-05 to build the Bluetooth connection.
- Step 13: Move the upper or lower slider to test the aileron.
