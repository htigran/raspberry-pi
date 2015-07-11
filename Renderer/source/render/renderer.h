/*
 * renderer.h
 *
 *  Created on: Jun 21, 2015
 *      Author: tigran
 */

#ifndef RENDERER_H
#define RENDERER_H

#include <irenderer.h>

class IScreen;

namespace render
{

class Renderer : public IRenderer
{
public:
	virtual ~Renderer() throw();
	Renderer() throw();

	virtual void render() throw();
	virtual void setScreen(const IScreen*) throw();

private:
	const IScreen* m_screen;
};

} /* namespace renderer */

#endif /* RENDERER_H */
