/*
 * Renderer.cpp
 *
 *  Created on: Jun 21, 2015
 *      Author: tigran
 */

#include <render/renderer.h>
#include <iscreen.h>
#include <input/image_reader.h>

#include <cassert>

namespace render
{

void Renderer::render() throw()
{
	assert(0 != m_screen);
	m_screen->draw();
}

void Renderer::setScreen(const IScreen* screen) throw()
{
	assert(0 != screen);
	m_screen = screen;
}

Renderer::Renderer() throw()
	: m_screen(0)
{
}

Renderer::~Renderer() throw()
{
}

} /* namespace renderer */
