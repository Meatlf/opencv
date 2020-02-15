//Example 2-1. A simple OpenCV program that loads an image from disk and displays it
//on the screen
#include <opencv2/opencv.hpp>
#include<iostream>

void help(char** argv ) {
	std::cout << "\n"
	<< "A simple OpenCV program that loads and displays an image from disk\n"
	<< argv[0] <<" <path/filename>\n"
	<< "For example:\n"
	<< argv[1] << " ../data/input/fruits.jpg\n"
	<< std::endl;
}
	

int main( int argc, char** argv ) {
	if (argc != 1) {
		help(argv);
		return 0;
	}
  cv::Mat img = cv::Mat(256,256,CV_8UC3);
  cv::Point center_point(125,125);
  int radius = 100;
  const cv::Scalar color = cv::Scalar(12,12,42);
  int thickness = -1;

  cv::circle(img, center_point, radius, color, thickness);

  if( img.empty() ) return -1;

  cv::namedWindow( "Example 2-1", cv::WINDOW_AUTOSIZE );
  cv::imshow( "Example 2-1", img );
  cv::waitKey( 0 );
  cv::destroyWindow( "Example 2-1" );

  return 0;
}
