#include "detect.hpp"

cv::Mat Detector::detect_pucks(cv::Mat frame, cv::Scalar l_thresh, cv::Scalar h_thresh)
{
    cv::Mat frame_hsv;
    cv::Mat result_frame;

    cvtColor(frame,frame_hsv,cv::COLOR_BGR2HSV);
    cv::inRange(frame_hsv,l_thresh,h_thresh,result_frame);



    return result_frame;
}