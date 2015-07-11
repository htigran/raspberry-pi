/*
 * video.h
 *
 *  Created on: Jun 20, 2015
 *      Author: tigran
 */

#ifndef WIDGETS_VIDEO_H
#define WIDGETS_VIDEO_H

#include <iwidget.h>

namespace widget
{

class video : public IWidget
{
public:
	video() throw();
	virtual ~video() throw();

	virtual void draw() const throw();
};

} /* namespace widgets */

#endif /* WIDGETS_VIDEO_H */
