/*
 * image_reader.h
 *
 *  Created on: Jun 28, 2015
 *      Author: tigran
 */

#ifndef IMAGE_READER_H_
#define IMAGE_READER_H_

namespace input
{

class ImageReader
{
public:
	ImageReader();
	virtual ~ImageReader();

	void load();
};

} /* namespace input */

#endif /* IMAGE_READER_H_ */
