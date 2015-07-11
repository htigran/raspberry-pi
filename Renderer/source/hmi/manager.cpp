/*
 * Manager.cpp
 *
 *  Created on: Jun 21, 2015
 *      Author: tigran
 */

#include <cassert>

#include <irenderer.h>

#include "manager.h"

namespace hmi
{

size_t
Manager::addScreen(const IScreen* screen) throw()
{
	assert(0 != screen);
	m_screens.push_back(screen);
	return m_screens.size() - 1;
}

void
Manager::selectScreen(size_t index) throw()
{
	assert(index < m_screens.size());
	m_renderer->setScreen(m_screens[index]);
}

void
Manager::setRenderer(IRenderer* renderer) throw()
{
	assert(0 != renderer);
	m_renderer = renderer;
}

Manager::Manager() throw()
	: m_renderer(0)
{
}

Manager::~Manager() throw()
{
}

} /* namespace hmi */

