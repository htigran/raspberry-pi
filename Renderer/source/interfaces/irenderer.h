/*
 * irenderer.h
 *
 *  Created on: Jun 21, 2015
 *      Author: tigran
 */

#ifndef IRENDERER_H
#define IRENDERER_H

class IScreen;

class IRenderer
{

public:
	virtual void render() throw() = 0;
	virtual void setScreen(const IScreen*) throw() = 0;
};

#endif /* IRENDERER_H */
