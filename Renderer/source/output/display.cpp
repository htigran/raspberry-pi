/*
 * display.cpp
 *
 *  Created on: Jun 28, 2015
 *      Author: tigran
 */

#include <output/display.h>

#include <core/core.h>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

namespace output
{

void
display::show()
{
    cv::imshow("Video", core::in_buffer);
}

display::display()
{
	cvNamedWindow("Video", CV_WINDOW_NORMAL);
//	cvSetWindowProperty("Video", CV_WND_PROP_FULLSCREEN, CV_WINDOW_FULLSCREEN);
}

display::~display()
{

}

} /* namespace output */
