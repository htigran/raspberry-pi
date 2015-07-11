/*
 * application.cpp
 *
 *  Created on: Jul 11, 2015
 *      Author: tigran
 */

#include <app/application.h>
#include <output/display.h>
#include <input/image_reader.h>

#include <opencv2/highgui/highgui.hpp>


namespace app
{

application::application()
{
	m_frontScreen.addWidget(&m_videoWidget);
	m_hmiManager.setRenderer(&m_ren);
	m_currentScreenId = m_hmiManager.addScreen(&m_frontScreen);
	m_hmiManager.selectScreen(m_currentScreenId);
}

application::~application()
{
	// TODO Auto-generated destructor stub
}

int
application::run()
{
	input::ImageReader img;
	output::display disp;
	while (1) {
		// load image
		img.load();
		// render
		m_ren.render();
		// show rendered image
		disp.show();
		// exit if a key is pressed and delay 30ms
		if (cv::waitKey(30) >=0) {
		  break;
		}
	}
	return 0;
}

} /* namespace app */
