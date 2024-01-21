// local project headers
// ----------------------
#include "Menu.h"

// standard C/C++ headers
// ----------------------
#include <QTextStream>

int Menu::displayMenuAndGetSelection()
{
    QTextStream qin(stdin);
    QTextStream qout(stdout);
    QString line;
    
    while (true)
    {
        qout << "\nPlease select an option:\n";
        qout << "1. Compile a file\n";
        qout << "2. Recompile a file if it was modified\n";
        qout << "3. Build and generate the executable\n";
        qout << "4. Create a library\n";
        qout << "0. Exit\n";
        qout << "Enter your choice and press return: ";
        qout.flush();
        
        line = qin.readLine();
        bool ok;
        int selection = line.toInt(&ok);

        if (ok
                && selection >= 0 && selection < 5)
        {
            return selection; // Valid choice, return it.
        }
        else
        {
            qout << "Invalid choice, please try again.\n";
            qout.flush();
        }
    }
}

void Menu::displayAction(int selection)
{
    // Placeholder function for executing actions.
    // This would interact with the GccHelper or similar classes/methods
    // to perform the actual work based on the user's selection.
    QTextStream qout(stdout);
    switch (selection)
    {
        case 1: // Compile
            qout << "Compiling folder...\n";
            break;
        case 2: // Recompile if modified
            qout << "Recompiling folder...\n";
            break;
        case 3: // Build executable
            qout << "Building folder...\n";
            break;
        case 4: // Create library
            qout << "Generating library from folder...\n";
            break;
        default:
            // Handle invalid selection
            break;
    }
    qout.flush();
}
