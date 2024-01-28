#ifndef BUILD_MANAGER_H
#define BUILD_MANAGER_H

// local project headers
// ----------------------
#include "Menu.h"
#include "Controller.h"

// standard C/C++ headers
// ----------------------

class BuildManager
{
public:
    void execute();

private:
    Menu m_menu;
    Controller m_controller;
};

#endif // BUILD_MANAGER_H
