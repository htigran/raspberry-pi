/*
 * image_reader.cpp
 *
 *  Created on: Jun 28, 2015
 *      Author: tigran
 */

#include <input/image_reader.h>
#include <core/core.h>
#include <core/messages.h>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>

namespace input
{

void
ImageReader::load()
{

	// Read the file
    core::in_buffer = cv::imread(core::test_image_path, CV_LOAD_IMAGE_COLOR);

    // Check for invalid input
    if(! core::in_buffer.data) {
        throw(msg::could_not_open_image);
    }
}

ImageReader::ImageReader()
{
	// TODO Auto-generated constructor stub

}

ImageReader::~ImageReader()
{
	// TODO Auto-generated destructor stub
}

} /* namespace input */
