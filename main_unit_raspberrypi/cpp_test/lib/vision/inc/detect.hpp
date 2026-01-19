#include <opencv2/opencv.hpp>

class Detector {
    private:
        

        cv::Mat get_mask(cv::Mat frame, cv::Scalar l_thresh, cv::Scalar h_thresh);
        cv::Mat compare_contours(cv::Mat frame);
    public:
        cv::Mat detect_pucks(cv::Mat frame, cv::Scalar l_thresh, cv::Scalar h_thresh);
};