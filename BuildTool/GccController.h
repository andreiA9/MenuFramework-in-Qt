#ifndef GCC_CONTROLLER_H
#define GCC_CONTROLLER_H

// local project headers
// ----------------------
#include "Process.h"

// standard C/C++ headers
// ----------------------
#include <QString>
#include <QStringList>
#include <QDir>
#include <QMap>
#include <QTimer>

class GccController : public QObject
{
    Q_OBJECT

public:
    enum BuildOperation
    {
        Compile = 1,
        Recompile = 2,
        Build = 3,
        GenerateLib = 4
    };

    GccController() = default;

    ~GccController() = default;

    // Compiles a single source file into an object file.
    bool compileFile(const QString& command);

    // Recompiles a source file only if it has been modified since the last compilation.
    bool recompileFileIfModified(const QString& command);

    // Builds and links an executable from a list of object files.
    bool buildExecutable(const QString& command);

    // Creates a library from a list of object files.
    bool createLibrary(const QString& command);

    // This is the gcc action to be performed
    bool performOperation(int selection);

private:
    QDir m_workingDirectory;
    QMap<BuildOperation, QString> m_OperationToPathMap;
    QTimer* m_lastModifiedTimer;
    Process m_process;
};

#endif // GCC_CONTROLLER_H
