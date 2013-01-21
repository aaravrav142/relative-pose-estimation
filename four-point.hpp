#ifndef FOUR_POINT_HPP
#define FOUR_POINT_HPP

#include <opencv2/opencv.hpp>

void four_point(cv::InputArray points1, cv::InputArray points2, 
                double angle, double focal, cv::Point2d pp, 
                cv::OutputArrayOfArrays rvecs, cv::OutputArrayOfArrays tvecs); 

void four_point_helper(double k1, double k2, double k3, 
                       double x1[4], double y1[4], double x2[4], double y2[4], 
                       double a[55], double b[55]); 

#endif
