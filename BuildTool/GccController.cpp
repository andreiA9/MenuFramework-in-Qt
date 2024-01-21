// local project headers
// ----------------------
#include "GccController.h"
#include "GccCommandGenerator.h"

// standard C/C++ headers
// ----------------------
#include <QProcess>
#include <QFileInfo>
#include <QDateTime>
#include <QDebug>
#include <QDirIterator>

bool GccController::compileFile(const QString& command)
{
    qDebug() << "executing" << command;

    return true;
}

bool GccController::recompileFileIfModified(const QString& command)
{
    qDebug() << "executing" << command;
    
    return true;
}

bool GccController::buildExecutable(const QString& command)
{
    qDebug() << "executing" << command;

    return true;
}

bool GccController::createLibrary(const QString& command)
{
    qDebug() << "executing" << command;

    return true;
}

bool GccController::performOperation(int selection)
{
    switch (selection)
    {
        case BuildOperation::Compile:
        {
            QString command = GccCommandGenerator::generateCompileCommand();
            qDebug() << "Compile command:" << command;
            if (!compileFile(command))
            {
                qDebug() << "Compiling resulted in errors";
            }

            break;
        }
        case BuildOperation::Recompile:
        {
            QString command = GccCommandGenerator::generateRecompileCommand();
            qDebug() << "Recompile command:" << command;
            if (recompileFileIfModified(command))
            {
                qDebug() << "RECOMPILE";
            }
            break;
        }
        case BuildOperation::Build:
        {
            QString command = GccCommandGenerator::generateBuildCommand();
            qDebug() << "Build command:" << command;
            if (buildExecutable(command))
            {
                qDebug() << "BUILD";
            }
            break;
        }
        case BuildOperation::GenerateLib:
        {
            QString command = GccCommandGenerator::generateLibraryCreationCommand();
            qDebug() << "Library creation command:" << command;
            if (createLibrary(command))
            {
                qDebug() << "LIBRARY CREATE";
            }
            break;
        }
        default:
            qDebug() << "Invalid selection";
            break;
    }

    return true;
}
