/*
 * display.h
 *
 *  Created on: Jun 28, 2015
 *      Author: tigran
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

namespace output
{

class display
{
public:
	display();
	virtual ~display();

	void show();
};

} /* namespace output */

#endif /* DISPLAY_H_ */
