# Training-Simulation-App

## PC Version:
![GUI program](https://github.com/Locus-Wong/Training-simulation-app/assets/125144955/f366f805-3828-4124-b89c-ef0653655bce)

## Mobile Version:
![Demonstration video](https://github.com/Locus-Wong/Training-simulation-app/assets/125144955/3d42cc2e-da2d-4466-9898-c509dfca882a)


## Demo Video:
https://www.youtube.com/watch?v=PqyHtseUgWo

## Installation and Use Instructions:
### Version 1: Using the USB port on your PC
1. Plug the USB cable from the remote aircraft (Arduino) into a USB port on your computer.
2. Open the "A320AileronDampingTest" folder and run "A320AileronDampingTest.exe".
3. Follow the Aileron Damping Test Steps **(listed below)**.
4. Open Device Manager to find the COM port number of the Arduino.
5. Locate the Virtual COM port created by the Arduino in the Ports section of Device Manager.
6. Select the correct COM port number of the Arduino.
7. Use the "Up" or "Down" arrow key to test the aileron.

### Version 2: Use the Bluetooth function of your computer
1. Plug the USB cable from the remote aircraft (Arduino) into any power bank.
2. Open Devices and Printers and click "Add a device" button.
3. Select the HC-05 device and enter the pairing code: 1234.
4. After installing the HC-05 device driver, right-click the HC-05 device, then choose "Content".
5. Click the "Service" tab to see the Virtual COM port number created by the HC-05 device.
6. Open "A320AileronDampingTest.exe" from the "A320AileronDampingTest" folder.
7. Follow the Aileron Damping Test Steps **(listed below)**.
8. Select the correct Virtual COM port number of the HC-05 device.
9. Use the "Up" or "Down" arrow key to test the aileron.

### Version 3: Use the Bluetooth function of your smartphone
1. Plug the USB cable from the remote aircraft (Arduino) into a power bank.
2. Move "A320AileronDampingTest.apk" from the "Android App apk" folder to your Android phone.
3. Ensure that the Special app access for "Install unknown apps" is granted.
4. Install the APK on your Android phone.
5. Go to Bluetooth settings.
6. Turn on Bluetooth and pair with the HC-05 device by entering the pairing code: 1234.
7. Open the "A320AileronDampingTest" app.
8. Follow the Aileron Damping Test Steps **(listed below)**.
9. Tap the Bluetooth logo and select the HC-05 device (00:18:E4:03:51:7C) to establish the Bluetooth connection.
10. Move the upper or lower slider to test the aileron.

### Aileron Damping Test Steps (5 Steps Only)
1. Click / Tap the "SYSTEM REPORT / TEST" button.
2. Click / Tap the "EFCS 1" button.
3. Click / Tap the "TEST" button.
4. Click / Tap the "AILERON DAMPING TEST" button.
5. Click / Tap "START LEFT AIL TEST" or "START RIGHT AIL TEST" to enter the testing interface.

## Troubleshooting:
If you cannot test the aileron with your device, consider these common issues:
### General Issues
- **USB Connection:** Ensure the USB cable from the remote aircraft (Arduino) is properly connected to a USB port on your computer or power bank.
### Using the USB port on your PC
- **COM Port Selection:** Verify you selected the correct COM port number for the Arduino.
### Using Bluetooth
- **Bluetooth Function:** Ensure Bluetooth is enabled on your device and check for the Bluetooth symbol on your phone screen or computer taskbar.
- **Pairing HC-05 Module:** Confirm your device is paired with the HC-05 device using the code: 1234.
- **COM Port Selection:** Ensure you select the correct Virtual COM port number for the HC-05 device on your computer or the correct HC-05 option (00:18:E4:03:51:7C) on your phone.
