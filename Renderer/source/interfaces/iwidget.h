/*
 * iwdgt.h
 *
 *  Created on: Jun 20, 2015
 *      Author: tigran
 */

#ifndef IWIDGET_H
#define IWIDGET_H

class IWidget
{
public:
	virtual void draw() const throw() = 0;
};

#endif /* IWIDGET_H */
