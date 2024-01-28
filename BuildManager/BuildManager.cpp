// local project headers
// ----------------------
#include "BuildManager.h"

// standard C/C++ headers
// ----------------------

void BuildManager::execute()
{
    int selection = m_menu.displayMenuAndGetSelection();
    m_menu.displayAction(selection);

    // Invoke GccCommandGenerator based on the user's menu selection
    // (1-compile, 2-recompile, 3-build executable, 4-create library)
    m_controller.performOperation(selection);
}
