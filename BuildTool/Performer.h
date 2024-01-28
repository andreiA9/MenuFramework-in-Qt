#ifndef PERFORMER_H
#define PERFORMER_H

// local project headers
// ----------------------

// standard C/C++ headers
// ----------------------
#include <QObject>

class Performer
{

public:
    enum Operation
    {
        Compile = 1,
        Recompile = 2,
        Build = 3,
        GenerateLib = 4
    };

    Performer() = default;

    ~Performer() = default;

    // Compiles a single source file into an object file.
    bool compileFile(const QString& command);

    // Recompiles a source file only if it has been modified since the last compilation.
    bool recompileFileIfModified(const QString& command);

    // Builds and links an executable from a list of object files.
    bool buildExecutable(const QString& command);

    // Creates a library from a list of object files.
    bool createLibrary(const QString& command);

    bool prepareOperation(int selection);

    // This is the gcc action to be performed
    bool performOperation(int selection);

private:
};

#endif // PERFORMER_H
