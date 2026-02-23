#include <opencv2/opencv.hpp>
#include <iostream> 

int main() {
    // Open the default camera (index 0). For a USB camera, try index 1, 2, etc.
    cv::VideoCapture cap(0); 

    // Check if the camera opened successfully
    if (!cap.isOpened()) {
        std::cerr << "Error: Could not open camera. Try a different index." << std::endl;
        return -1;
    }

    std::cout << "Camera opened successfully. Starting video stream." << std::endl;

    // Loop to read and display frames
    while (true) {
        cv::Mat frame;
        // Read a new frame from the camera
        bool success = cap.read(frame); 

        // Breaking the loop if frames cannot be captured
        if (!success) {
            std::cerr << "Error: Could not read frame. Video stream ended or disconnected." << std::endl;
            break;
        }

        // Display the frame in a window
        cv::imshow("USB Webcam Feed", frame);

        // Wait for 10ms for a key press. If 'Esc' key (key code 27) is pressed, break the loop.
        if (cv::waitKey(10) == 27) {
            std::cout << "Esc key pressed by user. Stopping the stream." << std::endl;
            break;
        }
    }

    // Release the camera object and close all windows
    cap.release();
    cv::destroyAllWindows();

    return 0;
}
