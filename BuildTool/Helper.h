#ifndef HELPER_H
#define HELPER_H

// local project headers
// ----------------------

// standard C/C++ headers
// ----------------------
#include <QString>

class Helper
{
public:
    // Generate GCC command for compiling source files
    static QString generateCompileCommand();

    // Generate GCC command for compiling source files that have been modified
    static QString generateRecompileCommand();

    // Generate GCC command for building an executable from source files
    static QString generateBuildCommand();

    // Generate GCC command for creating a library from source files
    static QString generateLibraryCreationCommand();
};

#endif // HELPER_H
