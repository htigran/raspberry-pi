/*
 * application.h
 *
 *  Created on: Jul 11, 2015
 *      Author: tigran
 */

#ifndef APPLICATION_H_
#define APPLICATION_H_

#include <hmi/manager.h>
#include <screen/screen.h>
#include <widget/video.h>
#include <render/renderer.h>

namespace app
{

class application
{
public:
	application();
	virtual ~application();

	int run();

private:
	widget::video m_videoWidget;
	screen::Screen m_frontScreen;
	render::Renderer m_ren;
	hmi::Manager m_hmiManager;
	size_t m_currentScreenId;
};

} /* namespace app */

#endif /* APPLICATION_H_ */
