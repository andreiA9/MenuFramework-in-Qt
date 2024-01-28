// local project headers
// ----------------------
#include "Performer.h"
#include "Helper.h"

// standard C/C++ headers
// ----------------------
#include <QDebug>

bool Performer::compileFile(const QString& command)
{
    qDebug() << "executing" << command;

    return true;
}

bool Performer::recompileFileIfModified(const QString& command)
{
    qDebug() << "executing" << command;

    return true;
}

bool Performer::buildExecutable(const QString& command)
{
    qDebug() << "executing" << command;

    return true;
}

bool Performer::createLibrary(const QString& command)
{
    qDebug() << "executing" << command;

    return true;
}

bool Performer::prepareOperation(int selection)
{
    Q_UNUSED(selection);
    return true;
}

bool Performer::performOperation(int selection)
{
    switch (selection)
    {
        case Operation::Compile:
        {
            QString command = Helper::generateCompileCommand();
            qDebug() << "Compile command:" << command;
            if (!compileFile(command))
            {
                qDebug() << "Compiling resulted in errors";
            }

            break;
        }
        case Operation::Recompile:
        {
            QString command = Helper::generateRecompileCommand();
            qDebug() << "Recompile command:" << command;
            if (recompileFileIfModified(command))
            {
                qDebug() << "RECOMPILE";
            }
            break;
        }
        case Operation::Build:
        {
            QString command = Helper::generateBuildCommand();
            qDebug() << "Build command:" << command;
            if (buildExecutable(command))
            {
                qDebug() << "BUILD";
            }
            break;
        }
        case Operation::GenerateLib:
        {
            QString command = Helper::generateLibraryCreationCommand();
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
