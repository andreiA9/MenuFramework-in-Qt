// local project headers
// ----------------------
#include "GccCommandGenerator.h"

// standard C/C++ headers
// ----------------------
#include <QFileInfo>
#include <QDebug>

QString GccCommandGenerator::generateCompileCommand()
{
    return QString("gcc -c file.cpp");
}

QString GccCommandGenerator::generateRecompileCommand()
{
    return QString("gcc -c file.cpp");
}

QString GccCommandGenerator::generateBuildCommand()
{
    return QString("gcc file.cpp -o file");
}

QString GccCommandGenerator::generateLibraryCreationCommand()
{
    return QString("gcc lib");
}
