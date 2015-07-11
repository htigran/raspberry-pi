/*
 * screen.h
 *
 *  Created on: Jun 21, 2015
 *      Author: tigran
 */

#ifndef SCREEN_SCREEN_H
#define SCREEN_SCREEN_H

#include <iscreen.h>
#include <vector>

class IWidget;

namespace screen
{

class Screen : public IScreen
{
public:
	Screen() throw();
	virtual ~Screen() throw();

	virtual void addWidget(const IWidget* widget) throw();
	virtual void draw() const throw();

private:
	std::vector<const IWidget*> m_widgets;

};

} /* namespace hmi */

#endif /* SCREEN_SCREEN_H */
