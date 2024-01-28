// local project headers
// ----------------------
#include "Helper.h"

// standard C/C++ headers
// ----------------------
#include <QFileInfo>
#include <QDebug>

QString Helper::generateCompileCommand()
{
    return QString("gcc -c file.cpp");
}

QString Helper::generateRecompileCommand()
{
    return QString("gcc -c file.cpp");
}

QString Helper::generateBuildCommand()
{
    return QString("gcc file.cpp -o file");
}

QString Helper::generateLibraryCreationCommand()
{
    return QString("gcc lib");
}
