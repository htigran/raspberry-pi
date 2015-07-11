/*
 * iscreen.h
 *
 *  Created on: Jun 1, 2015
 *      Author: tigran
 */

#ifndef ISCREEN_H
#define ISCREEN_H

#include <iwidget.h>

class IScreen
{
public:
	virtual void addWidget(const IWidget*)  throw()= 0;
	virtual void draw() const throw() = 0;
};

#endif /* ISCREEN_H */
