#include <iostream>
#include "detect.hpp"
#include <opencv2/opencv.hpp>

Detector det;

int main()
{
    cv::Scalar l_thresh = cv::Scalar(0,10,10);
    cv::Scalar h_thresh = cv::Scalar(100,255,255);

    cv::Mat frame = cv::imread("../../../display.jpg");
    cv::imshow("image",frame);
    cv::waitKey(0);


    cv::Mat result = det.detect_pucks(frame,l_thresh,h_thresh);
    cv::imshow("result",result);
    cv::waitKey(0);


    cv::destroyAllWindows();
    return 0;
}