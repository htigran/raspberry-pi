/*
 * screen.cpp
 *
 *  Created on: Jun 21, 2015
 *      Author: tigran
 */

#include <screen/screen.h>

#include <cstddef>
#include <cassert>

namespace screen
{

void
Screen::addWidget(
	const IWidget* widget
) throw()
{
	assert(0 != widget);
	m_widgets.push_back(widget);
}

void
Screen::draw() const throw()
{
	for (size_t i = 0; i < m_widgets.size(); ++i) {
		assert(0 != m_widgets[i]);
		m_widgets[i]->draw();
	}
}

Screen::Screen() throw()
	: m_widgets()
{
}

Screen::~Screen() throw()
{
}

} /* namespace hmi */
