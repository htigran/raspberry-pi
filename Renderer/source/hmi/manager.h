/*
 * Manager.h
 *
 *  Created on: Jun 21, 2015
 *      Author: tigran
 */

#ifndef HMI_MANAGER_H
#define HMI_MANAGER_H

#include <ihmi_manager.h>
#include <vector>
#include <memory>
#include <iscreen.h>

namespace hmi
{

class Manager : public IHmiManager
{
public:
	Manager() throw();
	virtual ~Manager() throw();

	virtual size_t addScreen(const IScreen*) throw();
	virtual void selectScreen(size_t) throw();
	virtual void setRenderer(IRenderer*) throw();

private:
	std::vector<const IScreen*> m_screens;
	IRenderer* m_renderer;
};

} /* namespace hmi */

#endif /* HMI_MANAGER_H */
