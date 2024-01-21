#ifndef BUILD_MANAGER_H
#define BUILD_MANAGER_H

// local project headers
// ----------------------
#include "Menu.h"
#include "GccController.h"

// standard C/C++ headers
// ----------------------

class BuildManager
{
public:
    void execute();

private:
    Menu m_menu;
    GccController m_gccController;
};

#endif // BUILD_MANAGER_H
