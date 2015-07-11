/*
 * iscreenmanager.h
 *
 *  Created on: Jun 1, 2015
 *      Author: tigran
 */

#ifndef IHMI_MANAGER_H
#define IHMI_MANAGER_H

#include <cstddef>

class IScreen;
class IRenderer;

class IHmiManager
{
private:

public:
	virtual size_t addScreen(const IScreen*) throw() = 0;
	virtual void selectScreen(size_t) throw() = 0;
	virtual void setRenderer(IRenderer*) throw() = 0;
};

#endif /* IHMI_MANAGER_H */
