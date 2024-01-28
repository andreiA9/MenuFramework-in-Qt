#ifndef CONTROLLER_H
#define CONTROLLER_H

// local project headers
// ----------------------
#include "Performer.h"

// standard C/C++ headers
// ----------------------

class Controller
{
public:
    Controller() = default;

    bool performOperation(int selection);

private:
    Performer m_performer;
};

#endif // CONTROLLER_H
