# Facial Expression Detection and LED Control

This repository contains Python code for real-time facial expression detection using OpenCV and DeepFace, and Arduino code for controlling LEDs based on the detected emotions.

## Dependencies

- [deepface](https://github.com/serengil/deepface): A deep learning facial analysis library that provides pre-trained models for facial emotion detection. It relies on TensorFlow for the underlying deep learning operations.
- [OpenCV](https://opencv.org/): An open-source computer vision library used for image and video processing.

## Files Included:

1. **arduinoIDE_facialExpression.ino:**
   - Arduino IDE code for controlling LEDs based on detected emotions.
   - The code listens for commands over the serial port and adjusts the behavior of the LEDs based on the received commands.

2. **emotion.py:**
   - Python code for real-time facial expression detection.
   - It captures video from the webcam, detects faces using Haar cascade classifier, analyzes facial expressions using DeepFace, and sends commands over the serial port to the Arduino based on the detected emotions.

3. **haarcascade_frontalface.xml:**
   - Pre-trained Haar cascade classifier XML file for face detection.
   - It is used by the Python code to detect faces in the captured video frames.

## Requirements:

- Python 3.x
- OpenCV (cv2)
- DeepFace
- PySerial

## Usage:
### Initial steps:
- Git clone this repository Run: ``
1. Install the required dependencies:
   - You can use `pip install -r requirements.txt`
   - Or you can install dependencies individually:
      - `pip install deepface`
      - `pip install tf_keras`
      - `pip install opencv-python`
      - `pip install tf_keras`

2. Download the Haar cascade XML file for face detection:
   - Visit the [OpenCV GitHub repository](https://github.com/opencv/opencv/tree/master/data/haarcascades) and download the `haarcascade_frontalface_default.xml` file.

1. **Arduino Setup:**
   - Upload the `Arduino_LED_Control.ino` code to your Arduino board using the Arduino IDE.
   - Connect two LEDs to the specified pins on the Arduino board according to the pin configuration defined in the code.

2. **Python Setup:**
   - Install the required Python libraries using `pip`:
     ```
     pip install opencv-python deepface pyserial
     ```

3. **Run the Code:**
   - Connect your Arduino board to your computer via USB.
   - Run the `emotion.py` Python script to start real-time facial expression detection and LED control.
   - Follow the instructions in the console to exit the program.

## Contributors:

- [Ravindar Singh Shekhawat](https://github.com/RavindrSingh0): Project Lead

Feel free to contribute to this project by submitting bug reports, feature requests, or pull requests.
