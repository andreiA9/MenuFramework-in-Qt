// local project headers
// ----------------------
#include "BuildManager.h"

// standard C/C++ headers
// ----------------------
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    
    // RESURSELE se vor ACCESA.cu
    // :/CompileFolder/main.cpp
    // SAU
    // :/Resources/CompileFolder/main.cpp
    BuildManager buildManager;
    buildManager.execute();

    // app.exec() is not called because it's not a GUI application and
    // we do not need to start the Qt event loop.
    return 0;
}
