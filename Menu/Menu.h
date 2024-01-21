#ifndef MENU_H
#define MENU_H

// local project headers
// ----------------------

// standard C/C++ headers
// ----------------------

class Menu
{
public:
    // Displays menu and gets the user selection.
    int displayMenuAndGetSelection();

    // Executes an action based on user selection.
    void displayAction(int selection);
};

#endif // MENU_H
