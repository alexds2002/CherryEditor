#include <ncurses.h>
#include <string.h>

int main() {
    char str[80]; // Buffer to store user input
    int row, col;
    while(true)
    {
        initscr();            // Start ncurses mode
        cbreak();             // Disable line buffering
        noecho();             // Don't echo typed characters to the screen
        keypad(stdscr, TRUE); // Enable special keys handling (like arrow keys)

        getmaxyx(stdscr, row, col); // Get screen dimensions
        mvprintw(row / 2, (col - strlen("Type something: ")) / 2, "Type something: ");
        refresh();

        // Accept a line of input from the user
        move(row / 2 + 1, (col - 20) / 2); // Move cursor to next line
        getstr(str); // Get a string input from the user

        // Display the entered text
        mvprintw(row / 2 + 3, (col - strlen("You typed: ")) / 2, "You typed: %s", str);
        refresh();
    }
    getch(); // Wait for a keypress before exiting
    endwin(); // End ncurses mode
    return 0;
}
