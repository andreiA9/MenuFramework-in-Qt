// local project headers
// ----------------------
#include "Controller.h"

// standard C/C++ headers
// ----------------------

bool Controller::performOperation(int selection)
{
    if (!m_performer.prepareOperation(selection))
    {
        return false;
    }
    m_performer.performOperation(selection);

    return true;
}
